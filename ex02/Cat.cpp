/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 10:06:26 by mkulikov          #+#    #+#             */
/*   Updated: 2025/03/18 16:26:06 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
	: AAnimal("Cat")
	, brain(new Brain())
{
	std::cout << YELLOW << "Cat default constructor called" << std::endl;
}

Cat::Cat(const std::string &str)
	: AAnimal(str)
	, brain(new Brain())
{
	std::cout << YELLOW << "Cat parameterized constructor called" << std::endl;
}

Cat::Cat(const Cat& other)
	: AAnimal(other)
	, brain(new Brain(*other.brain))
{
	std::cout << YELLOW << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other) {
		AAnimal::operator=(other);
		*brain = *other.brain;
	}
	std::cout << YELLOW << "Cat assignment constructor called" << std::endl;
	return *this;
}

Cat::~Cat()
{
	std::cout << YELLOW << "Cat destructor called" << std::endl;
	delete brain;
}

void Cat::makeSound() const
{
	std::cout << YELLOW << "Cat says meow" << std::endl;
}

void Cat::setIdea(int idx, std::string idea)
{
	if (idx >= 0 && idx < 100)
	{
		brain->ideas[idx] = idea;
	}
}

std::string Cat::getIdea(int idx) const {
	return (idx >= 0 && idx < 100) ? brain->ideas[idx] : "";
}

