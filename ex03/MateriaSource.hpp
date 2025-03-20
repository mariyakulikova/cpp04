/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 19:02:13 by mkulikov          #+#    #+#             */
/*   Updated: 2025/03/20 12:55:42 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "IMateriaSource.hpp"

#include "AMateria.hpp"
#define INIT_SIZE 4


class MateriaSource : public IMateriaSource {
private:
	AMateria* _materias[INIT_SIZE];
	AMateria* _clones[INIT_SIZE];
	int _count;
	int _cCount;

	void _addClone(AMateria *m);
public:
	MateriaSource();
	MateriaSource(const MateriaSource& other);
	MateriaSource& operator=(const MateriaSource& other);
	~MateriaSource();

	void learnMateria(AMateria* m);
	AMateria* createMateria(const std::string& type);
};
