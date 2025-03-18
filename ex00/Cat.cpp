/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 10:06:26 by mkulikov          #+#    #+#             */
/*   Updated: 2025/03/18 10:32:50 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
	: Animal("Cat")
{
	std::cout << YELLOW << "Cat default constructor called" << std::endl;
}

Cat::Cat(const std::string &str)
	: Animal(str)
{
	std::cout << YELLOW << "Cat parameterized constructor called" << std::endl;
}

Cat::Cat(const Cat& other)
	: Animal(other)
{
	std::cout << YELLOW << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other) {
		Animal::operator=(other);
	}
	std::cout << YELLOW << "Cat assignment constructor called" << std::endl;
	return *this;
}

Cat::~Cat()
{
	std::cout << YELLOW << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << YELLOW << "Cat says meow" << std::endl;
}

