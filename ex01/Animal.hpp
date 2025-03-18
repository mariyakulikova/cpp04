/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 13:03:27 by mkulikov          #+#    #+#             */
/*   Updated: 2025/03/18 11:07:13 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define RESET "\033[0m"

class Animal
{
protected:
	std::string _type;
public:
	Animal();
	Animal(const std::string& str);
	Animal(const Animal &other);
	Animal &operator=(const Animal &other);
	virtual ~Animal();
	std::string getType() const;
	virtual void makeSound() const;
};
