/******************************************************************************************
 * Autores:																				  *
 *																						  *
 * -Christian Camilo Taborda Campiño 1632081-3743.										  *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743. 									  *
 * -Juan Sebastián Paz Velásquez 1626846-3743.											  *
 * 																						  *
 * Título: Letrero.h																      *
 *																						  *
 * Descripción: 																		  *
 *																						  *
 * -Este programa define la clase -Letrero- con sus respectivos métodos y atributos.      *
 *                                    													  *	
 * Fecha de Creación: 5 / Noviembre / 2016                                                *
 * Fecha de última modificación: 12 / Noviembre / 2016        						      *
 *															                              *
 ******************************************************************************************
 */

#ifndef LETRERO_H
#define LETRERO_H

#include <string>
using std::string;

#include <vector>
using std::vector;

class Letrero{

	private: 
	
		string mensaje;
		
	public:
		
		// CONSTRUCTOR:
		
		Letrero(string mensajeIn);
		
		// MÉTODOS PARTICULARES:
			
		void mayuscula(string &mensajeIn);
		void agregar_espacios(string &mensajeIn);
		void transformar(vector<string> &mensajeIn);
		
};
#endif
