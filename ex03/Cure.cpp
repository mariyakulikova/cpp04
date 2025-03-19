/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:20:46 by mkulikov          #+#    #+#             */
/*   Updated: 2025/03/19 20:32:51 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
	: AMateria("cure")
{
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(std::string const &type)
	:AMateria(type)
{
	std::cout << "Cure parameterized constructor called" << std::endl;
}

Cure::Cure(const Cure &other)
	:AMateria(other._type)
{
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	std::cout << "Cure assignment operator called" << std::endl;
	return *this;
}

Cure::~Cure()
{

	std::cout << "Cure destructor called" << std::endl;
}

Cure *Cure::clone() const
{
	return new Cure();
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
