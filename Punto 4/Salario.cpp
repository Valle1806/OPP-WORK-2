/******************************************************************************************
 * Autores:                                                                               *
 *                                                                                        *
 * -Christian Camilo Taborda Campiño 1632081-3743.                                        *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743.                                      *
 * -Juan Sebastián Paz Velásquez 1626846-3743.                                            *
 *                                                                                        *
 * Título: Salario.cpp                                                                    *
 *                                                                                        *
 * Descripción:                                                                           *
 *                                                                                        *
 * -Este programa define los métodos de la clase -Salario-.                               *
 *                                                                                        *	
 * Fecha de Creación: 8 / Noviembre / 2016                                                *
 * Fecha de última modificación: 12 / Noviembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#include "Salario.h"

// Esta función construye un salario.

Salario::Salario(float monto_basicoIn, float comisionesIn, float primas_extralegalesIn){

	monto_basico = monto_basicoIn;
	comisiones = comisionesIn;
	primas_extralegales = primas_extralegalesIn;
	
}

// Esta función retorna el monto básico de un salario.

float Salario::getMonto_basico(){

	return monto_basico;
	
}

// Esta función retorna las comisiones de un salario.

float Salario::getComisiones(){

	return comisiones;
	
}

// Esta función retorna las primas extra-legales de un salario.

float Salario::getPrimas_extralegales(){

	return primas_extralegales;
	
}

// Esta función retorna la suma de los atributos de un salario.

float Salario::getTotal_salario(){

	return monto_basico + comisiones + primas_extralegales;
	
}

