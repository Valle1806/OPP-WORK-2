/******************************************************************************************
 * Autores:                                                                               *
 *                                                                                        *
 * -Christian Camilo Taborda Campiño 1632081-3743.                                        *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743.                                      *
 * -Juan Sebastián Paz Velásquez 1626846-3743.                                            *
 *                                                                                        *
 * Título: Jugador.h                                                                      *
 *                                                                                        *
 * Descripción:                                                                           *
 *                                                                                        *
 * -Este programa define la clase -Jugador- con sus respectivos métodos y atributos.      *
 *                                                                                        *	
 * Fecha de Creación: 9 / Noviembre / 2016                                                *
 * Fecha de última modificación: 12 / Noviembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#ifndef JUGADOR_H
#define JUGADOR_H

#include "Tablero.h"

class Jugador {

	private:
	
		string simbolo;
		int posicion_x;
		int posicion_y;
		
	public:
	
		// CONSTRUCTOR:
	
		Jugador(string simboloIn);
		
		// MÉTODOS GET:
		
		string getSimbolo();
		int getPosicion_x();
		int getPosicion_y();
		
		// MÉTODOS SET:
		
		void setPosicion_x(int posicion_xIn);
		void setPosicion_y(int posicion_yIn);
		
		// MÉTODOS PARTICULARES:
		
		void jugar(Tablero * &T);
		
};

#endif	
	
