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
	: AAnimal("Dog")
	, brain(new Brain())
{
	std::cout << YELLOW << "Dog default constructor called" << std::endl;
}

Dog::Dog(const std::string &str)
	: AAnimal(str)
	, brain(new Brain())
{
	std::cout << YELLOW << "Dog parameterized constructor called" << std::endl;
}

Dog::Dog(const Dog& other)
	: AAnimal(other)
	, brain(new Brain(*other.brain))
{
	std::cout << YELLOW << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other) {
		AAnimal::operator=(other);
		*brain = *other.brain;
	}
	std::cout << YELLOW << "Dog assignment constructor called" << std::endl;
	return *this;
}

Dog::~Dog()
{
	std::cout << YELLOW << "Dog destructor called" << std::endl;
	delete brain;
}

void Dog::makeSound() const
{
	std::cout << YELLOW << "Dog says meow" << std::endl;
}

void Dog::setIdea(int idx, std::string idea)
{
	if (idx >= 0 && idx < 100)
	{
		brain->ideas[idx] = idea;
	}
}

std::string Dog::getIdea(int idx) const {
	return (idx >= 0 && idx < 100) ? brain->ideas[idx] : "";
}

