/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 19:40:51 by mkulikov          #+#    #+#             */
/*   Updated: 2025/03/20 16:20:09 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	std::cout << "Testing equip" << std::endl;
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	std::cout << "Testing valid use" << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << "Testing valid and invalid unequip" << std::endl;
	me->unequip(666);
	me->unequip(3);
	me->unequip(2);
	me->unequip(1);
	me->unequip(0);
	std::cout << "Testing invalid use" << std::endl;
	me->use(0, *bob);
	me->use(666, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}
