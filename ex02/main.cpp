/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 10:06:54 by mkulikov          #+#    #+#             */
/*   Updated: 2025/03/18 16:22:15 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	std::cout << "\nTesting deep copies:\n";
	Cat originalCat;
	originalCat.setIdea(0, "I want to chase a mouse!");
	Cat copiedCat = originalCat;
	std::cout << "Original Cat Idea: " << originalCat.getIdea(0) << std::endl;
	std::cout << "Copied Cat Idea: " << copiedCat.getIdea(0) << std::endl;
	originalCat.setIdea(0, "I want to sleep!");
	std::cout << "After modification:" << std::endl;
	std::cout << "Original Cat Idea: " << originalCat.getIdea(0) << std::endl;
	std::cout << "Copied Cat Idea: " << copiedCat.getIdea(0) << std::endl;

	Dog *originalDog = new Dog("Original Dog");
	originalDog->setIdea(0, "Let's play!");
	Dog *copyDog = new Dog(*originalDog);
	std::cout << "Original Dog Idea: " << originalDog->getIdea(0) << std::endl;
	std::cout << "Copied Dog Idea: " << copyDog->getIdea(0) << std::endl;
	originalDog->setIdea(0, "I'm a good boy! Give me some snacks!");
	std::cout << "After modification:" << std::endl;
	std::cout << "Original Dog Idea: " << originalDog->getIdea(0) << std::endl;
	std::cout << "Copied Dog Idea: " << copyDog->getIdea(0) << std::endl;
	delete originalDog;
	delete copyDog;

	std::cout << "\nTesting polymorphism\n";
	AAnimal *animals[6];
	for (int i = 0; i < 3; ++i)
	{
		animals[i] = new Dog();
	}
	for (int i = 3; i < 6; ++i)
	{
		animals[i] = new Cat();
	}
	for (int i = 0; i < 6; ++i)
	{
		delete animals[i];
	}
	return 0;
}
