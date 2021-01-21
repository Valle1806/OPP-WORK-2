/******************************************************************************************
 * Autores:                                                                               *
 *                                                                                        *
 * -Christian Camilo Taborda Campiño 1632081-3743.                                        *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743.                                      *
 * -Juan Sebastián Paz Velásquez 1626846-3743.                                            *
 *                                                                                        *
 * Título: Conversacion.h                                                                 *
 *                                                                                        *
 * Descripción:                                                                           *
 *                                                                                        *
 * -Este programa define la clase -Conversacion- con sus respectivos atributos y métodos. *
 *                                                                                        *	
 * Fecha de Creación: 5 / Noviembre / 2016                                                *
 * Fecha de última modificación: 12 / Noviembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#ifndef CONVERSACION_H
#define CONVERSACION_H

#include <string>
using std::string;

#include <vector>
using std::vector;

class Conversacion {
	
	private:
		
		vector <string> lineas;
		
	public:
		
		// CONSTRUCTOR:
		
		Conversacion(vector <string> lineasIn);
		
		// MÉTODO GET:
		
		string getLinea(int posicion);

};

#endif
