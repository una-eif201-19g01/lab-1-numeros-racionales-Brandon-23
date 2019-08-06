//
// Created by Brandon Arguedas on 2019-05-08
//

#include <string>

#ifndef NUMEROSRACIONALES_RACIONAL_H
#define NUMEROSRACIONALES_RACIONAL_H


class Racional {
private:
	// Variables
	int numerador, denominador;
	// Métodos
	static int calcularMCD(int num, int den);

public:
	// Constructores
	Racional();
	Racional(int numerador, int denominador);

	// Métodos
	static void simplificarFraccion(Racional& fraccion);
	Racional sumFraccion(Racional fraccion);
	std::string obtenerString();
	Racional restFraccion(Racional fraccion);
	Racional multFraccion(Racional fraccion);
	Racional divFraccion(Racional fraccion);
	Racional elevFraccion(Racional fraccion);
	Racional elevEFraccion(Racional fraccion); 
	int getNumerador() const;

	void setNumerador(int numerador);

	int getDenominador() const;

	void setDenominador(int denominador);
};


#endif //NUMEROSRACIONALES_RACIONAL_H
