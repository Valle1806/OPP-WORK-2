/******************************************************************************************
 * Autores:                                                                               *
 *                                                                                        *
 * -Christian Camilo Taborda Campiño 1632081-3743.                                        *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743.                                      *
 * -Juan Sebastián Paz Velásquez 1626846-3743.                                            *
 *                                                                                        *
 * Título: Empleado.h                                                                     *
 *                                                                                        *
 * Descripción:                                                                           *
 *                                                                                        *
 * -Este programa define la clase -Empleado- con sus respectivos métodos y atributos.     *
 *                                                                                        *	
 * Fecha de Creación: 8 / Noviembre / 2016                                                *
 * Fecha de última modificación: 12 / Noviembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>
using std::string;

#include "Cargo.h"
#include "Salario.h"

class Empleado {

	protected:
	
		int identificacion;
		string nombre;
		int edad;
		Cargo * objCargo;
		Salario * objSalario;
		
	public:
		
		// CONSTRUCTOR:
		
		Empleado(int identificacionIn, string nombreIn, int edadIn, string seccionIn, string descripcionIn, string codigoIn, float monto_basicoIn, float comisionesIn, float primas_extralegalesIn);
		
		// MÉTODOS GET (EMPLEADO):
		
		int getIdentificacion();
		string getNombre();
		int getEdad();
		
		// MÉTODOS GET (CARGO):
		
		string getSeccion_cargo();
		string getDescripcion_cargo();
		string getCodigo_cargo();
		
		// MÉTODOS GET (SALARIO):
		
		float getMonto_basico_salario();
		float getComisiones_salario();
		float getPrimas_extralegales_salario();
		
		// MÉTODO PARTICULAR:
		
		virtual float getSalario() = 0;
		
};

#endif
