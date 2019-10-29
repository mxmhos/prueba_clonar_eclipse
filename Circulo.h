/*
 * Circulo.h
 *
 *  Created on: 30 sept. 2019
 *      Author: antonio
 */

#ifndef CIRCULO_H_
#define CIRCULO_H_

#include "Figura2D.h"

#define PI 3.1415

class Circulo: public Figura2D {

	double radio;

public:
	Circulo(std::string etiqueta ="", std::string color ="black", double radio = 5.0);
	double area();
	void dibujar();
	virtual ~Circulo();
};

#endif /* CIRCULO_H_ */
