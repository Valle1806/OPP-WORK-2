/******************************************************************************************
 * Autores:                                                                               *
 *                                                                                        *
 * -Christian Camilo Taborda Campiño 1632081-3743.                                        *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743.                                      *
 * -Juan Sebastián Paz Velásquez 1626846-3743.                                            *
 *                                                                                        *
 * Título: Cargo.cpp                                                                      *
 *                                                                                        *
 * Descripción:                                                                           *
 *                                                                                        *
 * -Este programa define los métodos de la clase -Cargo-.                                 *
 *                                                                                        *	
 * Fecha de Creación: 8 / Noviembre / 2016                                                *
 * Fecha de última modificación: 12 / Noviembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#include "Cargo.h"

// Esta función construye un Cargo.

Cargo::Cargo(string seccionIn, string descripcionIn, string codigoIn){

	seccion = seccionIn;
	descripcion = descripcionIn;
	codigo = codigoIn;
	
}

// Esta función retorna la sección de un cargo.

string Cargo::getSeccion(){

	return seccion;
	
}

// Esta función retorna la descripción de un cargo.

string Cargo::getDescripcion(){

	return descripcion;
	
}

// Esta función retorna el código de un cargo.

string Cargo::getCodigo(){

	return codigo;
	
}


