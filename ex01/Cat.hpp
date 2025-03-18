/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 10:06:22 by mkulikov          #+#    #+#             */
/*   Updated: 2025/03/18 13:17:06 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
	Brain* brain;
public:
	Cat();
	Cat(const std::string &str);
	Cat(const Cat& other);
	Cat& operator=(const Cat& other);
	~Cat();
	void setIdea(int idx, std::string idea);
	std::string getIdea(int idx) const;
	void makeSound() const;
};
