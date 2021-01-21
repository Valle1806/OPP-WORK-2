/******************************************************************************************
 * Autores:                                                                               *
 *                                                                                        *
 * -Christian Camilo Taborda Campiño 1632081-3743.                                        *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743.                                      *
 * -Juan Sebastián Paz Velásquez 1626846-3743.                                            *
 *                                                                                        *
 * Título: Empleado.cpp                                                                   *
 *                                                                                        *
 * Descripción:                                                                           *
 *                                                                                        *
 * -Este programa define los métodos de la clase -Empleado-.                              *
 *                                                                                        *	
 * Fecha de Creación: 8 / Noviembre / 2016                                                *
 * Fecha de última modificación: 12 / Noviembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#include "Empleado.h"

// Esta función construye un empleado.

Empleado::Empleado(int identificacionIn, string nombreIn, int edadIn, string seccionIn, string descripcionIn, string codigoIn, float monto_basicoIn, float comisionesIn, float primas_extralegalesIn){

	identificacion = identificacionIn;
	nombre = nombreIn;
	edad = edadIn;
	objCargo = new Cargo(seccionIn, descripcionIn, codigoIn);
	objSalario = new Salario(monto_basicoIn, comisionesIn, primas_extralegalesIn);
	
}

// Esta función retorna la identificación de un empleado.

int Empleado::getIdentificacion(){

	return identificacion;
	
}

// Esta función retorna el nombre de un empleado.

string Empleado::getNombre(){

	return nombre;
	
}

// Esta función retorna la edad de un empleado.

int Empleado::getEdad(){

	return edad;
	
}

// Esta función retorna la sección del cargo de un empleado.

string Empleado::getSeccion_cargo(){

	return objCargo->getSeccion();
	
}

// Esta función retorna la descripción del cargo de un empleado.

string Empleado::getDescripcion_cargo(){

	return objCargo->getDescripcion();
	
}

// Esta función retorna código del cargo de un empleado.

string Empleado::getCodigo_cargo(){

	return objCargo->getCodigo();
	
}

// Esta función retorna el monto básico del salario de un empleado.

float Empleado::getMonto_basico_salario(){

	return objSalario->getMonto_basico();
	
}

// Esta función retorna las comisiones del salario de un empleado.

float Empleado::getComisiones_salario(){

	return objSalario->getComisiones();
	
}

// Esta función retorna las primas extra-legales del salario de un empleado.

float Empleado::getPrimas_extralegales_salario(){

	return objSalario->getPrimas_extralegales();
	
}




	
