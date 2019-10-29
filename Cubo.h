/*
 * Cubo.h
 *
 *  Created on: 1 oct. 2019
 *      Author: antonio
 */

#ifndef CUBO_H_
#define CUBO_H_

#include "Figura3D.h"

class Cubo: public Figura3D {
	double lado;
public:
	Cubo(std::string etiqueta ="", std::string color="black", double lado = 1);

	double volumen();
	void dibujar();

	virtual ~Cubo();
};

#endif /* CUBO_H_ */
