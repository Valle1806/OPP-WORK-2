/******************************************************************************************
 * Autores:                                                                               *
 *                                                                                        *
 * -Christian Camilo Taborda Campiño 1632081-3743.                                        *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743.                                      *
 * -Juan Sebastián Paz Velásquez 1626846-3743.                                            *
 *                                                                                        *
 * Título: main.cpp                                                                       *
 *                                                                                        *
 * Descripción:                                                                           *
 *                                                                                        *
 * -Este programa contiene las instancias e implementaciones para la ejecución.           *
 *                                                                                        *	
 * Fecha de Creación: 5 / Noviembre / 2016                                                *
 * Fecha de última modificación: 12 / Noviembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#include "Persona.h"
#include "Conversacion.h"

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;	

// Esta función convierte un mensaje a minúsculas.

string cambiar_letras(string mensaje){
	
	for(int x=0; x<mensaje.length(); x++){
	
		if((int)mensaje[x] >= 65 && (int)mensaje[x] <= 90){
		
			mensaje[x] = (int)mensaje[x] + 32;
			
		}
		
	}
		
	return mensaje;
	
}

int main (int argc, char * argv []){

	// Creación de dos punteros de Personas.
	
	Persona * P1 = new Persona("Camilo", 30, "triste");
	Persona * P2 = new Persona("Juan", 20, "feliz");
	
	// Declaración de las variables a utilizar.
	
	string mensajep1;
	string mensajep2;
	vector <string> mensajes;
	char linea[520];
	int posicion = 1;
	
	// Lectura del archivo que contiene el texto.
	
	ifstream archivo(argv[1]);
	
	while((cambiar_letras(linea)).compare("chao") != 0){
	
		archivo.getline(linea, 520);
		mensajes.push_back(linea);
		
	}
	
	archivo.close();
	
	// Creación de un puntero de Conversación.
	
	Conversacion * C = new Conversacion(mensajes);
		
	// Emisión del primer mensaje de la implementación.
	
	mensajep1 = P1->hablar(C->getLinea(0));	
	
	cout << endl;
	cout << P1->getNombre() << ": " << mensajep1 << endl;
	
	// Implementación de la conversación.
	
	while((cambiar_letras(mensajep1)).compare("chao") != 0){

		mensajep2 = P2->contestar(mensajep1, C->getLinea(posicion));		
		posicion += 1;		
		cout << P2->getNombre() << ": " << mensajep2 << endl;
		
		mensajep1 =  P1->contestar(mensajep2, C->getLinea(posicion));		
		posicion += 1;		
		cout << P1->getNombre() << ": " << mensajep1 << endl;
		
	}
	
	// Emisión del último mensaje de la conversación.

	mensajep2 = P2->contestar(mensajep1, "");
	
	cout << P2->getNombre() << ": " << mensajep2 << endl;
	cout << endl;
		
	return 0;
	
}
	
	
		
