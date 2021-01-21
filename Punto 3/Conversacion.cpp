/******************************************************************************************
 * Autores:                                                                               *
 *                                                                                        *
 * -Christian Camilo Taborda Campiño 1632081-3743.                                        *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743.                                      *
 * -Juan Sebastián Paz Velásquez 1626846-3743.                                            *
 *                                                                                        *
 * Título: Conversacion.cpp                                                               *
 *                                                                                        *
 * Descripción:                                                                           *
 *                                                                                        *
 * -Este programa define los métodos de la clase -Conversacion-.                          *
 *                                                                                        *	
 * Fecha de Creación: 5 / Noviembre / 2016                                                *
 * Fecha de última modificación: 12 / Noviembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#include "Conversacion.h"

// Esta función sirve para construir una Conversación.

Conversacion::Conversacion(vector <string> lineasIn){
	
	lineas = lineasIn;
	
}

// Esta función retorna una de las líneas del vector de una Conversación.

string Conversacion::getLinea(int posicion){

	return lineas[posicion];
	
}

