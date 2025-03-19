/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 17:26:27 by mkulikov          #+#    #+#             */
/*   Updated: 2025/03/19 20:29:08 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Ice: public AMateria
{
public:
	Ice();
	~Ice();
	Ice(std::string const &type);
	Ice(const Ice &other);
	Ice &operator=(const Ice &other);
	Ice* clone() const;
	void use(ICharacter &target);
};
