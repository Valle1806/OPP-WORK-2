/************************************************************************************************
 * Autores:                                                                                     *
 *                                                                                              *
 * -Christian Camilo Taborda Campiño 1632081-3743.                                              *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743.                                            *
 * -Juan Sebastián Paz Velásquez 1626846-3743.                                                  *
 *                                                                                              *
 * Título: Empleado_Operativo.h                                                                 *
 *                                                                                              *
 * Descripción:                                                                                 *
 *                                                                                              *
 * -Este programa define la clase -Empleado_Operativo- con sus respectivos métodos y atributos. *
 *                                                                                              *			
 * Fecha de Creación: 8 / Noviembre / 2016                                                      *
 * Fecha de última modificación: 12 / Noviembre / 2016                                          *
 *                                                                                              *
 ************************************************************************************************
 */

#ifndef EMPLEADO_OPERATIVO_H
#define EMPLEADO_OPERATIVO_H

#include "Empleado.h"

#include <string>
using std::string;

class Empleado_Operativo: public Empleado {

	private:
	
		string jefe;
		float auxilio_transporte;
		
	public:
	
		// CONSTRUCTOR:
		
		Empleado_Operativo(int identificacionIn, string nombreIn, int edadIn, string seccionIn, string descripcionIn, string codigoIn, float monto_basicoIn, float comisionesIn, float primas_extralegalesIn, string jefeIn);
		
		// MÉTODOS GET:
		
		string getJefe();
		float getAuxilio_transporte();
		
		// MÉTODO PARTICULAR:
		
		float getSalario();
		
};

#endif
