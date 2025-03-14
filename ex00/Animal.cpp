/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 13:05:11 by mkulikov          #+#    #+#             */
/*   Updated: 2025/03/14 13:10:45 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const std::string &name)
{
}

Animal::Animal(const Animal &other)
{

}

Animal &Animal::operator=(const Animal &other)
{
	// TODO: insert return statement here
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}
