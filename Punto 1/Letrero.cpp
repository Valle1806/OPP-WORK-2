/******************************************************************************************
 * Autores:                                                                               *
 *                                                                                        *
 * -Christian Camilo Taborda Campiño 1632081-3743.                                        *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743.                                      *
 * -Juan Sebastián Paz Velásquez 1626846-3743.                                            *
 *                                                                                        *
 * Título: Letrero.cpp                                                                    *
 *                                                                                        *
 * Descripción:                                                                           *
 *                                                                                        *
 * -Este programa define los métodos de la clase -Letrero-.                               *
 *                                                                                        *	
 * Fecha de Creación: 11 / Noviembre / 2016                                               *
 * Fecha de última modificación: 12 / Noviembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#include "Letrero.h"

//Esta función convierte el mensaje de un letrero a mayusculas.

void Letrero::mayuscula(string &mensajeIn){

	for(int i=0; i<(int)mensajeIn.length(); i++){
	
		if((int)mensajeIn[i] >= 97 && (int)mensajeIn[i] <= 122){
		
			mensajeIn[i] = mensajeIn[i]-32;
			
		}
	}
}

//Esta función concatena los respectivos espacios antes y despues del mensaje de un letrero.

void Letrero::agregar_espacios(string &mensajeIn){

	// Definimos los espacios.

	string espacios1 = "       ";
	string espacios2 = "        ";
	
	//Concatenamos los espacios.
	
	mensajeIn.append(espacios2);
	
	string mensaje1 = espacios1.append(mensajeIn);
	mensajeIn = mensaje1;
	
}

// Esta función construye un letrero.

Letrero::Letrero(string mensajeIn){

	//Convertimos a mayúsculas.

	mayuscula(mensajeIn);
	
	//Agregamos los espacios.
	
	agregar_espacios(mensajeIn);
	
	// Asignamos el resultado al atributo.
	
	mensaje = mensajeIn;
	
}


// Esta función transforma el mensaje en la salida requerida.

void Letrero::transformar(vector<string> &mensajeIn){

	// Almacenamos en la primera posicion del vector la parte superior del letrero.
	
	mensajeIn.push_back("**********");
	
	// Recorremos desde 0 hasta el tamaño del mensaje -7 unidades debido a que se le agregaron espacios anteriormente. 
	
	for(int i=0; i<(int)mensaje.length()-7; i++){
	
		// Almacenamos en el vector cada linea con sus respectivos espacios.
		
		mensajeIn.push_back("*" + mensaje.substr(i,8) + "*");
	
	}
	
	// Almacenamos en el vector la parte inferior del letrero.
	
	mensajeIn.push_back("**********");
	
}
