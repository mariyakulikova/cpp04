/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 19:04:27 by mkulikov          #+#    #+#             */
/*   Updated: 2025/03/19 21:27:27 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
	: _count(0)
{
	std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &other)
	: _count(other._count)
{
	for (int i = 0; i < _count; i++)
	{
		_materias[i] = other._materias[i];
	}
	std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
	{
		for (int i = 0; i < other._count; i++)
		{
			if (i <= _count)
			{
				delete _materias[i];
			}
			_materias[i] = other._materias[i];
		}
		_count = other._count;
	}
	std::cout << "MateriaSource copy assignment operator called" << std::endl;
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < _count; i++)
	{
		delete _materias[i];
	}
	std::cout << "MateriaSource destructor called" << std::endl;
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (_count > 4)
	{
		return ;
	}
	_materias[_count] = m;
	_count++;
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
	for (int i = (_count - 1); i > -1; i--)
	{
		if (_materias[i]->getType() == type)
		{
			return _materias[i]->clone();
		}
	}
	return 0;
}
