/******************************************************************************************
 * Autores:                                                                               *
 *                                                                                        *
 * -Christian Camilo Taborda Campiño 1632081-3743.                                        *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743.                                      *
 * -Juan Sebastián Paz Velásquez 1626846-3743.                                            *
 *                                                                                        *
 * Título: Empleado_Ejecutivo.cpp                                                         *
 *                                                                                        *
 * Descripción:                                                                           *
 *                                                                                        *
 * -Este programa define los métodos de la clase -Empleado_Ejecutivo-.                    *
 *                                                                                        *	
 * Fecha de Creación: 8 / Noviembre / 2016                                                *
 * Fecha de última modificación: 12 / Noviembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#include "Empleado_Ejecutivo.h"

// Esta función construye un empleado ejecutivo.

Empleado_Ejecutivo::Empleado_Ejecutivo(int identificacionIn, string nombreIn, int edadIn, string seccionIn, string descripcionIn, string codigoIn, float monto_basicoIn, float comisionesIn, float primas_extralegalesIn, int numero_empleadosIn, float viaticosIn):Empleado(identificacionIn, nombreIn, edadIn, seccionIn, descripcionIn, codigoIn, monto_basicoIn, comisionesIn, primas_extralegalesIn){

	numero_empleados = numero_empleadosIn;
	viaticos = viaticosIn;
	
}

// Esta función retorna el número de empleados a cargo de un empleado ejecutivo.

int Empleado_Ejecutivo::getNumero_empleados(){

	return numero_empleados;
	
}

// Esta función retorna el valor de los viáticos de un empleado ejecutivo.

float Empleado_Ejecutivo::getViaticos(){

	return viaticos;
	
}

// Esta función retorna el salario total de un empleado ejecutivo.

float Empleado_Ejecutivo::getSalario(){

	return (objSalario->getTotal_salario()) + viaticos;
	
}
