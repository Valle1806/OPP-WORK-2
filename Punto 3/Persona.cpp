/******************************************************************************************
 * Autores:                                                                               *
 *                                                                                        *
 * -Christian Camilo Taborda Campiño 1632081-3743.                                        *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743.                                      *
 * -Juan Sebastián Paz Velásquez 1626846-3743.                                            *
 *                                                                                        *
 * Título: Persona.cpp                                                                    *
 *                                                                                        *
 * Descripción:                                                                           *
 *                                                                                        *
 * -Este programa define los métodos de la clase -Persona-.                               *
 *                                                                                        *	
 * Fecha de Creación: 5 / Noviembre / 2016                                                *
 * Fecha de última modificación: 12 / Noviembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#include "Persona.h"

#include <sstream>
using std::stringstream;

// Esta función sirve para construir una Persona.

Persona::Persona(string nombreIn, int edadIn, string estadoIn){

	nombre = nombreIn;
	edad = edadIn;
	estado = estadoIn;
	
}

// Esta función retorna el nombre de una Persona.

string Persona::getNombre(){

	return nombre;
	
}

// Esta función retorna la edad de una Persona.

int Persona::getEdad(){

	return edad;
	
}

// Esta función retorna el estado de una Persona.

string Persona::getEstado(){

	return estado;
	
}

// Esta función recibe un mensaje y lo retorna.

string Persona::hablar(string mensaje){

	return mensaje;
	
}

// Esta función recibe dos mensajes y retorna otro de acuerdo al primer mensaje.

string Persona::contestar(string mensaje, string respuesta){

	string responder;
	
	// Cambio de letras mayúsculas a minúsculas.
	
	for(int x=0; x<mensaje.length(); x++){
	
		if((int)mensaje[x] >= 65 && (int)mensaje[x] <= 90){
		
			mensaje[x] = (int)mensaje[x] + 32;
			
		}
		
	}
	
	// Comparación del mensaje de entrada con los comandos.

	if(mensaje.compare("hola") == 0){
	
		responder = "Hola, me llamo ";
		responder.append(nombre);
		responder.append(", ");
		responder.append(respuesta);
		
	}
	
	else {
	
		if(mensaje.compare("¿como vas?") == 0){
		
			responder = estado;
			responder.append(", ");
			responder.append(respuesta);
			
		}
		
		else {
		
			if(mensaje.compare("¿tu edad?") == 0){
			
				// Conversión de int a string.
				
				stringstream ss;
				ss << edad;
				string str = ss.str();
				
				responder = str;
				responder.append(", ");
				responder.append(respuesta);
				
			}
			
			else {
			
				if(mensaje.compare("chao") == 0){
				
					responder = "Chao";
					
				}
				
				else {
				
					responder = respuesta;
					
				}
			}
		}
	}
	
	return responder;
	
}
	
	
