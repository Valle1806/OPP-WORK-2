/******************************************************************************************
 * Autores:                                                                               *
 *                                                                                        *
 * -Christian Camilo Taborda Campiño 1632081-3743.                                        *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743.                                      *
 * -Juan Sebastián Paz Velásquez 1626846-3743.                                            *
 *                                                                                        *
 * Título: Tablero.cpp                                                                    *
 *                                                                                        *
 * Descripción:                                                                           *
 *                                                                                        *
 * -Este programa define los métodos de la clase -Tablero-.                               *
 *                                                                                        *	
 * Fecha de Creación: 9 / Noviembre / 2016                                                *
 * Fecha de última modificación: 12 / Noviembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#include "Jugador.h"

// Esta función construye un Jugador.

Jugador::Jugador(string simboloIn){

	simbolo = simboloIn;
	posicion_x = 0;
	posicion_y = 0;
	
}

// Esta función retorna el símbolo de un Jugador.

string Jugador::getSimbolo(){

	return simbolo;
	
}

// Esta función retorna la posición en X de un Jugador.

int Jugador::getPosicion_x(){

	return posicion_x;
	
}

// Esta función retorna la posición en Y de un Jugador.

int Jugador::getPosicion_y(){

	return posicion_y;
	
}

// Esta función cambia la posición en X de un Jugador.

void Jugador::setPosicion_x(int posicion_xIn){

	posicion_x = posicion_xIn;
	
}

// Esta función cambia la posición en Y de un jugador.

void Jugador::setPosicion_y(int posicion_yIn){

	posicion_y = posicion_yIn;
	
}

// Esta función recibe un Tablero y cambia un elemento de su matríz dada una posición (X,Y).

void Jugador::jugar(Tablero * &T){

	T->setPosicion_triqui(posicion_x, posicion_y, simbolo);
	
}
	
