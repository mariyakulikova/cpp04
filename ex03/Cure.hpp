/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:18:24 by mkulikov          #+#    #+#             */
/*   Updated: 2025/03/19 20:29:42 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Cure: public AMateria
{
public:
	Cure();
	~Cure();
	Cure(std::string const &type);
	Cure(const Cure &other);
	Cure &operator=(const Cure &other);
	Cure* clone() const;
	void use(ICharacter &target);
};


