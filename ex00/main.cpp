/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 10:06:54 by mkulikov          #+#    #+#             */
/*   Updated: 2025/03/18 11:08:19 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal *dog = new Dog("Dog");
	const Animal *cat = new Cat("Cat");

	std::cout << GREEN << "Object's dog type is " << dog->getType() << std::endl;
	std::cout << YELLOW << "Object's cat type is " << cat->getType() << std::endl;
	dog->makeSound();
	cat->makeSound();
	meta->makeSound();
	delete meta;
	delete dog;
	delete cat;

	std::cout << RESET << "\nTesting WrongAnimal and WrongCat:\n";
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat("Wrong cat");

	std::cout << "Object's wrong cat type is "  << wrongCat->getType() << " " << std::endl;
	std::cout << "WrongAnimal and WrongCat makeSound testing" << std::endl;
	wrongCat->makeSound();
	wrongMeta->makeSound();

	delete wrongMeta;
	delete wrongCat;
	return 0;
}
