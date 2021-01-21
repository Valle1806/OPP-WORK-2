/******************************************************************************************
 * Autores:                                                                               *
 *                                                                                        *
 * -Christian Camilo Taborda Campiño 1632081-3743.                                        *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743.                                      *
 * -Juan Sebastián Paz Velásquez 1626846-3743.                                            *
 *                                                                                        *
 * Título: Consolidado.cpp                                                                *
 *                                                                                        *
 * Descripción:                                                                           *
 *                                                                                        *
 * -Este programa define los métodos de la clase -Consolidado-.                           *
 *                                                                                        *	
 * Fecha de Creación: 8 / Noviembre / 2016                                                *
 * Fecha de última modificación: 12 / Noviembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#include "Consolidado.h"

// Esta función construye un consolidado.

Consolidado::Consolidado(int total_ejecutivosIn, int total_operativosIn, float salarios_ejecutivosIn, float salarios_operativosIn, float promedio_ejecutivosIn, float promedio_operativosIn){

	total_ejecutivos = total_ejecutivosIn;
	total_operativos = total_operativosIn;
	salarios_ejecutivos = salarios_ejecutivosIn;
	salarios_operativos = salarios_operativosIn;
	promedio_ejecutivos = promedio_ejecutivosIn;
	promedio_operativos = promedio_operativosIn;
	
}

// Esta función retorna el total de ejecutivos de un consolidado.

int Consolidado::getTotal_ejecutivos(){

	return total_ejecutivos;
	
}

// Esta función retorna el total de operativos de un consolidado.

int Consolidado::getTotal_operativos(){

	return total_operativos;
	
}

// Esta función retorna el total de los salarios de los ejecutivos de un consolidado.

float Consolidado::getSalarios_ejecutivos(){

	return salarios_ejecutivos;
	
}

// Esta función retorna el total de los salarios de los operativos de un consolidado.

float Consolidado::getSalarios_operativos(){

	return salarios_operativos;
	
}

// Esta función retorna el promedio de salarios de los ejecutivos de un consolidado.

float Consolidado::getPromedio_ejecutivos(){

	return promedio_ejecutivos;
	
}

// Esta función retorna el promedio de salarios de los operativos de un consolidado.

float Consolidado::getPromedio_operativos(){

	return promedio_operativos;
	
}

// Esta función cambia el total de ejecutivos de un consolidado.

void Consolidado::setTotal_ejecutivos(int total_ejecutivosIn){

	total_ejecutivos = total_ejecutivosIn;
	
}

// Esta función cambia el total de operativos de un consolidado.

void Consolidado::setTotal_operativos(int total_operativosIn){

	total_operativos = total_operativosIn;
	
}

// Esta función cambia el total de los salarios de los ejecutivos de un consolidado.

void Consolidado::setSalarios_ejecutivos(float salarios_ejecutivosIn){

	salarios_ejecutivos = salarios_ejecutivosIn;
	
}

// Esta función cambia el total de los salarios de los operativos de un consolidado.

void Consolidado::setSalarios_operativos(float salarios_operativosIn){

	salarios_operativos = salarios_operativosIn;
	
}

// Esta función cambia el promedio de los salarios de los ejecutivos de un consolidado.

void Consolidado::setPromedio_ejecutivos(float promedio_ejecutivosIn){

	promedio_ejecutivos = promedio_ejecutivosIn;
	
}

// Esta función cambia el promedio de los salarios de los operativos de un consolidado.

void Consolidado::setPromedio_operativos(float promedio_operativosIn){

	promedio_operativos = promedio_operativosIn;
	
}


