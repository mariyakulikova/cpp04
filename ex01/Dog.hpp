/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 10:06:31 by mkulikov          #+#    #+#             */
/*   Updated: 2025/03/18 15:14:16 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
private:
	Brain* brain;
public:
	Dog();
	Dog(const std::string &str);
	Dog(const Dog& other);
	Dog& operator=(const Dog& other);
	~Dog();
	void setIdea(int idx, std::string idea);
	std::string getIdea(int idx) const;
	void makeSound() const;
};

