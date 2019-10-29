/*
 * Cilindro.cpp
 *
 *  Created on: 1 oct. 2019
 *      Author: antonio
 */

#include <iostream>
#include "Cilindro.h"

#define PI 3.1415

Cilindro::Cilindro(std::string etiqueta, std::string color, double radio,
		double altura):Figura3D(etiqueta, color), radio(radio), altura(altura){

}

double Cilindro::volumen() {
	return altura*radio*radio*PI;
}

void Cilindro::dibujar() {
	std::cout << "Cilindro: " << this->getEtiqueta() << " " << this->getColor() << altura << radio << volumen() << std::endl;
}

Cilindro::~Cilindro() {
	// TODO Auto-generated destructor stub
}

