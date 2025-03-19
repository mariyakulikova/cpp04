/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:20:46 by mkulikov          #+#    #+#             */
/*   Updated: 2025/03/19 20:32:57 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
	: AMateria("ice")
{
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(std::string const &type)
	:AMateria(type)
{
	std::cout << "Ice parameterized constructor called" << std::endl;
}

Ice::Ice(const Ice &other)
	:AMateria(other._type)
{
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	std::cout << "Ice assignment operator called" << std::endl;
	return *this;
}

Ice::~Ice()
{

	std::cout << "Ice destructor called" << std::endl;
}

Ice *Ice::clone() const
{
	return new Ice();
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
