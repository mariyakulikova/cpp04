/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 10:06:22 by mkulikov          #+#    #+#             */
/*   Updated: 2025/03/18 16:24:19 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
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
