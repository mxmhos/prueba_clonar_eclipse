/*
 * Figura.h
 *
 *  Created on: 30 sept. 2019
 *      Author: antonio
 */

#ifndef FIGURA_H_
#define FIGURA_H_


#include <string>

class Figura {

	std::string etiqueta;
	std::string color;


public:
	Figura(std::string etiqueta ="", std::string color = "black");

	virtual void dibujar()=0;


	virtual ~Figura();

	const std::string& getColor() const {
		return color;
	}

	void setColor(const std::string& color) {
		this->color = color;
	}

	const std::string& getEtiqueta() const {
		return etiqueta;
	}

	void setEtiqueta(const std::string& etiqueta) {
		this->etiqueta = etiqueta;
	}
};

#endif /* FIGURA_H_ */
