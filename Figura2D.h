/*
 * Figura2D.h
 *
 *  Created on: 30 sept. 2019
 *      Author: antonio
 */

#ifndef FIGURA2D_H_
#define FIGURA2D_H_

#include <string>
#include "Figura.h"

class Figura2D: public Figura {
public:

	Figura2D(std::string etiqueta="", std::string color="black");
	virtual double area()= 0;

	virtual ~Figura2D();
};

#endif /* FIGURA2D_H_ */
