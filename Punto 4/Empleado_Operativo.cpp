/******************************************************************************************
 * Autores:                                                                               *
 *                                                                                        *
 * -Christian Camilo Taborda Campiño 1632081-3743.                                        *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743.                                      *
 * -Juan Sebastián Paz Velásquez 1626846-3743.                                            *
 *                                                                                        *
 * Título: Empleado_Operativo.cpp                                                         *
 *                                                                                        *
 * Descripción:                                                                           *
 *                                                                                        *
 * -Este programa define los métodos de la clase -Empleado_Operativo-.                    *
 *                                                                                        *	
 * Fecha de Creación: 8 / Noviembre / 2016                                                *
 * Fecha de última modificación: 12 / Noviembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#include "Empleado_Operativo.h"

// Esta función construye un empleado operativo.

Empleado_Operativo::Empleado_Operativo(int identificacionIn, string nombreIn, int edadIn, string seccionIn, string descripcionIn, string codigoIn, float monto_basicoIn, float comisionesIn, float primas_extralegalesIn, string jefeIn):Empleado(identificacionIn, nombreIn, edadIn, seccionIn, descripcionIn, codigoIn, monto_basicoIn, comisionesIn, primas_extralegalesIn){

	jefe = jefeIn;
	auxilio_transporte = monto_basicoIn * 0.15;
	
}

// Esta función retorna el nombre del jefe a cargo de un empleado operativo.

string Empleado_Operativo::getJefe(){

	return jefe;
	
}

// Esta función retorna el valor del auxilio de transporte de un empleado operativo.

float Empleado_Operativo::getAuxilio_transporte(){

	return auxilio_transporte;
	
}

// Esta función retorna el salario total de un empleado operativo.

float Empleado_Operativo::getSalario(){

	return (objSalario->getTotal_salario()) + auxilio_transporte;
	
}
