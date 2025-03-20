/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 19:04:27 by mkulikov          #+#    #+#             */
/*   Updated: 2025/03/20 14:29:11 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
	: _count(0)
	, _cCount(0)
{
	std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &other)
	: _count(other._count)
	, _cCount(other._cCount)
{
	for (int i = 0; i < _count; i++)
	{
		_materias[i] = other._materias[i];
	}
	for (int i = 0; i < _cCount; i++)
	{
		_clones[i] = other._clones[i];
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
		for (int i = 0; i < other._cCount; i++)
		{
			if (i <= _cCount)
			{
				delete _clones[i];
			}
			_materias[i] = other._clones[i];
		}
		_cCount = other._cCount;
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
	for (int i = 0; i < _cCount; i++)
	{
		delete _clones[i];
	}
	std::cout << "MateriaSource destructor called" << std::endl;
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (_count >= 4)
	{
		return ;
	}
	_materias[_count] = m;
	_count++;
}

void MateriaSource::_addClone(AMateria *m)
{
	if (_cCount >= 4)
	{
		return ;
	}
	_clones[_cCount] = m;
	_cCount++;
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
	for (int i = (_count - 1); i > -1; i--)
	{
		if (_materias[i]->getType() == type)
		{
			AMateria *temp = _materias[i]->clone();
			_addClone(temp);
			return temp;
		}
	}
	return 0;
}
