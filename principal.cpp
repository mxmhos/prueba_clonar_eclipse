
#include <iostream>
#include <memory>

#include "Figura.h"
#include "Figura2D.h"
#include "Figura3D.h"
#include "Circulo.h"
#include "Triangulo.h"
#include "Cilindro.h"
#include "Cubo.h"


void test_error_abstract(){
	//Figura f;

	//Figura *f;
	std::unique_ptr<Figura> ptr;
	auto c = std::make_unique<Circulo>("cir1", "green", 3.4);
	c->dibujar();

}



void test_array_figuras(){
	std::unique_ptr<std::unique_ptr<Figura> []> figuras;

	figuras = std::make_unique<std::unique_ptr<Figura> []>(4);

	figuras[0]=std::make_unique<Circulo>("Cir1", "Orange", 2.5);
	figuras[1]=std::make_unique<Circulo>("Cir2", "Blue", 2.5);
	figuras[2]=std::make_unique<Cilindro>("Cil1", "Orange", 2.5);
	figuras[3]=std::make_unique<Cilindro>("Cil1");

	for(int i = 0; i < 4; i++)
	{
		figuras[i]->dibujar();
	}
}

void test_arra_figura_auto() {
	auto figuras = std::make_unique<std::unique_ptr<Figura> []>(4);

	figuras[0]=std::make_unique<Circulo>("Cir1", "Orange", 2.5);
	figuras[1]=std::make_unique<Circulo>("Cir2", "Blue", 2.5);
	figuras[2]=std::make_unique<Cilindro>("Cil1", "Orange", 2.5);
	figuras[3]=std::make_unique<Cilindro>("Cil2");

	for(int i = 0; i < 4; i++)
	{
		figuras[i]->dibujar();
	}

}


int main(int argc, char **argv) {
	//test_error_abstract();
	test_array_figuras();

}
