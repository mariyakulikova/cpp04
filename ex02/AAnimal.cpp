/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 13:05:11 by mkulikov          #+#    #+#             */
/*   Updated: 2025/03/18 16:21:03 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
	:_type("AAnimal")
{
	std::cout << BLUE << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(const std::string &str)
	: _type(str)
{
	std::cout << BLUE << "AAnimal parameterized constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other)
	: _type(other._type)
{
	std::cout << BLUE << "AAnimal copy constructor called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	std::cout << BLUE << "AAnimal assignment constructor called" << std::endl;
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << BLUE << "AAnimal destructor called" << std::endl;
}

std::string AAnimal::getType() const
{
	return _type;
}
