/*
 * Triangulo.cpp
 *
 *  Created on: 1 oct. 2019
 *      Author: antonio
 */

#include <iostream>
#include "Triangulo.h"

Triangulo::Triangulo(std::string etiqueta, std::string color, double altura, double base):Figura2D(etiqueta, color), altura(altura), base(base) {
}

double Triangulo::area() {
	return base*altura/2;
}

void Triangulo::dibujar() {
	std::cout << "Triangulo" << this->area() << std::endl;
}

Triangulo::~Triangulo() {
	// TODO Auto-generated destructor stub
}

