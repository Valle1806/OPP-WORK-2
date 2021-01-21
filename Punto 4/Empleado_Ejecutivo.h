/************************************************************************************************
 * Autores:                                                                                     *
 *                                                                                              *
 * -Christian Camilo Taborda Campiño 1632081-3743.                                              *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743.                                            *
 * -Juan Sebastián Paz Velásquez 1626846-3743.                                                  *
 *                                                                                              *
 * Título: Empleado_Ejecutivo.h                                                                 *
 *                                                                                              *
 * Descripción:                                                                                 *
 *                                                                                              *
 * -Este programa define la clase -Empleado_Ejecutivo- con sus respectivos métodos y atributos. *
 *                                                                                              *			
 * Fecha de Creación: 8 / Noviembre / 2016                                                      *
 * Fecha de última modificación: 12 / Noviembre / 2016                                          *
 *                                                                                              *
 ************************************************************************************************
 */


#ifndef EMPLEADO_EJECUTIVO_H
#define EMPLEADO_EJECUTIVO_H

#include "Empleado.h"

#include <string>
using std::string;

class Empleado_Ejecutivo: public Empleado {

	private:
	
		int numero_empleados;
		float viaticos;
		
	public:
		
		// CONSTRUCTOR:
		
		Empleado_Ejecutivo(int identificacionIn, string nombreIn, int edadIn, string seccionIn, string descripcionIn, string codigoIn, float monto_basicoIn, float comisionesIn, float primas_extralegalesIn, int numero_empleadosIn, float viaticosIn);
				
		// MÉTODOS GET:
		
		int getNumero_empleados();
		float getViaticos();
		
		//MÉTODO PARTICULAR:
		
		float getSalario();	
			
};

#endif
