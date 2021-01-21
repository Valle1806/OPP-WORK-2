/******************************************************************************************
 * Autores:                                                                               *
 *                                                                                        *
 * -Christian Camilo Taborda Campiño 1632081-3743.                                        *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743.                                      *
 * -Juan Sebastián Paz Velásquez 1626846-3743.                                            *
 *                                                                                        *
 * Título: Tablero.h                                                                      *
 *                                                                                        *
 * Descripción:                                                                           *
 *                                                                                        *
 * -Este programa define la clase -Tablero- con sus respectivos métodos y atributos.      *
 *                                                                                        *	
 * Fecha de Creación: 9 / Noviembre / 2016                                                *
 * Fecha de última modificación: 12 / Noviembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#ifndef TABLERO_H
#define TABLERO_H

#include <string>
using std::string;

class Tablero {
	
	private:
		
		string triqui [3][3];
		
	public:
		
		// CONSTRUCTOR:
		
		Tablero();
		
		// MÉTODO GET:
		
		string getPosicion_triqui(int posicion_xIn, int posicion_yIn);
		
		// MÉTODO SET:
		
		void setPosicion_triqui(int posicion_xIn, int posicion_yIn, string N);
		
		// MÉTODOS PARTICULARES:
		
		bool posicion_ocupada(int F, int C);
		string juzgar(bool &decision, int empate);
		
};

#endif
				
