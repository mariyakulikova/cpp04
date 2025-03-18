/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:56:46 by mkulikov          #+#    #+#             */
/*   Updated: 2025/03/18 12:01:45 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Brain
{
public:
	std::string ideas[100];
	Brain();
	Brain(const Brain &other);
	Brain &operator=(const Brain &other);
	~Brain();
};
