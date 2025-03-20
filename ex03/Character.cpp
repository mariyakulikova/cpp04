/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 17:39:54 by mkulikov          #+#    #+#             */
/*   Updated: 2025/03/20 16:21:12 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
	: _name("Noname")
	, _mCount(0)
{
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string const &str)
	:_name(str)
	, _mCount(0)
{
	std::cout << "Character parameterized constructor called" << std::endl;
}

Character::Character(const Character &other)
	:_name(other._name)
	, _mCount(other._mCount)
{
	for (int i = 0; i < _mCount; i++)
	{
		_inventory[i] = other._inventory[i];
	}
	std::cout << "Character copy constructor called" << std::endl;
}

Character &Character::operator=(const Character &other)
{
	if (this != &other)
	{
		_name = other._name;
		for (int i = 0; i < other._mCount; i++)
		{
			if (i <= _mCount)
			{
				delete _inventory[i];
			}
			_inventory[i] = other._inventory[i];
		}
		_mCount = other._mCount;
	}
	std::cout << "Character assignment operator called" << std::endl;
	return *this;
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
}

std::string const &Character::getName() const
{
	return _name;
}

void Character::equip(AMateria *m)
{
	if (_mCount > 4)
	{
		return ;
	}
	_inventory[_mCount] = m;
	_mCount++;
	std::cout<<"equip _mCount "<<_mCount<<std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= _mCount)
	{
		std::cout<<"unequip is doing nothing"<<std::endl;
		return ;
	}
	if (idx == (_mCount - 1))
	{
		_inventory[idx] = 0;
		_mCount--;
		std::cout<<"unequip _mCount "<<_mCount<<std::endl;
		return ;
	}
	for (int i = (idx + 1); i < _mCount; i++)
	{
		_inventory[idx] = _inventory[i];
		idx++;
		_mCount--;
		std::cout<<"unequip _mCount "<<_mCount<<std::endl;
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (_mCount == 0)
	{
		std::cout<<"use is doing nothing"<<std::endl;
		return ;
	}
	if (idx >= 0 && idx < 4)
	{
		_inventory[idx]->use(target);
	}
}
