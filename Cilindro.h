/*
 * Cilindro.h
 *
 *  Created on: 1 oct. 2019
 *      Author: antonio
 */

#ifndef CILINDRO_H_
#define CILINDRO_H_

#include "Figura3D.h"

class Cilindro: public Figura3D {

	double radio;
	double altura;

public:
	Cilindro(std::string etiqueta ="", std::string color="black", double radio = 5.0, double altura = 7.5);

	double volumen();
	void dibujar();

	virtual ~Cilindro();
};

#endif /* CILINDRO_H_ */
