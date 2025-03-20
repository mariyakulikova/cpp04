/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 13:05:11 by mkulikov          #+#    #+#             */
/*   Updated: 2025/03/20 16:27:20 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
	:_type("Animal")
{
	std::cout <<  "Animal default constructor called" << std::endl;
}

Animal::Animal(const std::string &str)
	: _type(str)
{
	std::cout <<  "Animal parameterized constructor called" << std::endl;
}

Animal::Animal(const Animal &other)
	: _type(other._type)
{
	std::cout <<  "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	std::cout <<  "Animal assignment constructor called" << std::endl;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const
{
	return _type;
}

void Animal::makeSound() const
{
	std::cout << "Animal makes some noise" << std::endl;
}
