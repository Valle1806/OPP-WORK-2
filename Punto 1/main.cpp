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
 * Fecha de Creación: 11 / Noviembre / 2016                                               *
 * Fecha de última modificación: 12 / Noviembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#include "Letrero.h"

#include <iostream>

using namespace std;

// Esta función imprime un letrero a partir de un vector.

void Imprimir(vector <string> letrero_acomodado){

	cout << endl;

	for(int i=0; i<letrero_acomodado.size(); i++){
	
			cout << letrero_acomodado[i] << endl;
			
	}
	
	cout << endl;
	
}

int main (int argc, char * argv[]){

	// Pedimos el mensaje de entrada y lo guardamos en una variable.

	char entrada[300];
	
	cout << endl;
	cout << "Ingrese la frase:\n";
	
	cin.getline(entrada, 300);
	
	// Definimos un puntero de letrero con la entrada ingresada.

	Letrero * objLetrero1 = new Letrero(entrada);
	
	//Creamos el vector para almacenar el letrero acomodado.

	vector <string> letrero_acomodado; 
	
	//Transformamos el vector anterior.
	
	objLetrero1->transformar(letrero_acomodado);
	
	// Imprimimos el letrero final.
	
	Imprimir(letrero_acomodado);
	
	return 0;
	
}

	
