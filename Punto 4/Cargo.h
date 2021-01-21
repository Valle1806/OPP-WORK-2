/******************************************************************************************
 * Autores:                                                                               *
 *                                                                                        *
 * -Christian Camilo Taborda Campiño 1632081-3743.                                        *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743.                                      *
 * -Juan Sebastián Paz Velásquez 1626846-3743.                                            *
 *                                                                                        *
 * Título: Cargo.h                                                                        *
 *                                                                                        *
 * Descripción:                                                                           *
 *                                                                                        *
 * -Este programa define la clase -Cargo- con sus respectivos métodos y atributos.        *
 *                                                                                        *	
 * Fecha de Creación: 8 / Noviembre / 2016                                                *
 * Fecha de última modificación: 12 / Noviembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#ifndef CARGO_H
#define CARGO_H

#include <string>
using std::string;

class Cargo {

	private:
	
		string seccion;
		string descripcion;
		string codigo;
		
	public:
		
		// CONSTRUCTOR:
		
		Cargo(string seccionIn, string descripcionIn, string codigoIn);
		
		// MÉTODOS GET:
		
		string getSeccion();
		string getDescripcion();
		string getCodigo();
		
};

#endif
		
