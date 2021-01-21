/******************************************************************************************
 * Autores:                                                                               *
 *                                                                                        *
 * -Christian Camilo Taborda Campiño 1632081-3743.                                        *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743.                                      *
 * -Juan Sebastián Paz Velásquez 1626846-3743.                                            *
 *                                                                                        *
 * Título: Persona.h                                                                      *
 *                                                                                        *
 * Descripción:                                                                           *
 *                                                                                        *
 * -Este programa define la clase -Persona- con sus respectivos atributos y métodos.      *
 *                                                                                        *	
 * Fecha de Creación: 5 / Noviembre / 2016                                                *
 * Fecha de última modificación: 12 / Noviembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using std::string;

class Persona {
	
	private:
		
		string nombre;
		int edad;
		string estado;
		
	public:
		
		// CONSTRUCTOR:
		
		Persona(string nombreIn, int edadIn, string estadoIn);
		
		// MÉTODOS GET:
		
		string getNombre();
		int getEdad();
		string getEstado();
		
		// MÉTODOS PARTICULARES:
		
		string hablar(string mensaje);
		string contestar(string mensaje, string respuesta);		
		
};

#endif
