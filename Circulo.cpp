/*
 * Circulo.cpp
 *
 *  Created on: 30 sept. 2019
 *      Author: antonio
 */

#include <iostream>
#include <cmath>
#include "Circulo.h"

Circulo::Circulo(std::string etiqueta, std::string color, double radio):Figura2D (etiqueta, color), radio(radio){
}

double Circulo::area() {
	return (PI * pow(radio, 2.0));
}

void Circulo::dibujar() {
	std::cout << "Circulo:  " << this->getEtiqueta()<< " "  << this->getColor() << this->area() << std::endl;
}

Circulo::~Circulo() {
	// TODO Auto-generated destructor stub
}

