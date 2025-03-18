#include "Dog.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 10:06:29 by mkulikov          #+#    #+#             */
/*   Updated: 2025/03/18 10:06:30 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
	: Animal("Dog")
{
	std::cout << GREEN << "Dog default constructor called" << std::endl;
}

Dog::Dog(const std::string &str)
	: Animal(str)
{
	std::cout << GREEN << "Dog parameterized constructor called" << std::endl;
}

Dog::Dog(const Dog& other)
	: Animal(other)
{
	std::cout << GREEN << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other) {
		Animal::operator=(other);
	}
	std::cout << GREEN << "Dog assignment constructor called" << std::endl;
	return *this;
}

Dog::~Dog()
{
	std::cout << GREEN << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << GREEN << "Dog says woof woof" << std::endl;
}

