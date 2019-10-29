/*
 * Cubo.cpp
 *
 *  Created on: 1 oct. 2019
 *      Author: antonio
 */

#include <iostream>
#include "Cubo.h"

Cubo::Cubo(std::string etiqueta, std::string color, double lado):Figura3D(etiqueta, color), lado(lado) {
}

double Cubo::volumen() {
	return lado*lado*lado;
}

void Cubo::dibujar() {
	std::cout << "Cubo " << this->volumen() << std::endl;
}

Cubo::~Cubo() {
	// TODO Auto-generated destructor stub
}

