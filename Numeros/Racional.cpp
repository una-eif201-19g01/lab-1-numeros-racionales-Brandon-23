#include <iostream>     // std::cout
#include <cmath>
#include <string>// std::abs
#include "Racional.h"

// Constructor Default
Racional::Racional() {
	setNumerador(0);
	setDenominador(1);
}

// Constructor Principal
Racional::Racional(int numerador, int denominador) : numerador(numerador), denominador(denominador) {}

// Función de prototypo
int Racional::calcularMCD(int num, int den) {
	int resultado = 0;

	if (den == 0) {
		resultado = num;
	}
	else {
		resultado = calcularMCD(den, num % den); // Función de recursividad y uso de una operación con modulo %
	}

	return resultado;
}

// Función referencias y parámetros de referencia
void Racional::simplificarFraccion(Racional &fraccion) {
	if (fraccion.numerador != 0) {
		// abs = retorna el valor absoluto de un parámetro, es parte de la libreria <math>
		int numeroMCD = calcularMCD(abs(fraccion.getNumerador()), fraccion.getDenominador());
		int numerador = fraccion.getNumerador() / numeroMCD;
		int denominador = fraccion.getDenominador() / numeroMCD;
		fraccion.setNumerador(numerador);
		fraccion.setDenominador(denominador);
	}
}

Racional Racional::sumFraccion(Racional fraccion) {
	Racional resultado;
	resultado.setNumerador(
		getNumerador() * fraccion.getDenominador() +
		getDenominador() * fraccion.getNumerador());
	resultado.setDenominador(getDenominador() * fraccion.getDenominador());
	simplificarFraccion(resultado);
	return resultado;
}

std::string Racional::obtenerString() {
	std::string resultado;
	resultado = std::to_string(getNumerador()) + "/" + std::to_string(getDenominador());
	return resultado;
}

Racional Racional::restFraccion(Racional fraccion) {
	Racional resultado;
	resultado.setNumerador(
		getNumerador() * fraccion.getDenominador() -
		getDenominador() * fraccion.getNumerador());
	resultado.setDenominador(getDenominador()*fraccion.getDenominador());
	simplificarFraccion(resultado);
	return resultado;
}
Racional Racional::multFraccion(Racional fraccion) {
	Racional resultado;
	resultado.setNumerador(
		getNumerador()*fraccion.getNumerador());
	resultado.setDenominador(getDenominador()*fraccion.getDenominador());
	simplificarFraccion(resultado);
	return resultado;
}
Racional Racional::divFraccion(Racional fraccion) {
	Racional resultado;
	resultado.setNumerador(
		getNumerador()*fraccion.getDenominador());
	resultado.setDenominador(getDenominador()*fraccion.getNumerador());
	simplificarFraccion(resultado);
	return resultado;
}
Racional Racional::elevFraccion(Racional fraccion) {
	Racional resultado;
	resultado.setNumerador(
		fraccion.getNumerador()*fraccion.getNumerador());
	resultado.setDenominador(fraccion.getDenominador()*fraccion.getDenominador());
	return resultado;
}

bool Racional::elevEFraccion(Racional fraccion) {
	if(getNumerador()*fraccion.getDenominador() != getDenominador()*fraccion.getNumerador())
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int Racional::getNumerador() const {
	return numerador;
}

void Racional::setNumerador(int numerador) {
	Racional::numerador = numerador;
}

int Racional::getDenominador() const {
	return denominador;
}

void Racional::setDenominador(int denominador) {
	Racional::denominador = denominador;
}
