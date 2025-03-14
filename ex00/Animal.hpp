/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 13:03:27 by mkulikov          #+#    #+#             */
/*   Updated: 2025/03/14 13:11:32 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal(/* args */);
	Animal(const std::string& str);
	Animal(const Animal &other);
	Animal &operator=(const Animal &other);
	~Animal();

	~Animal();
};

#endif
