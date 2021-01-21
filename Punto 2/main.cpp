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
 * -Este programa contiene las instancias e implementaciones para su ejecución.           *
 *                                                                                        *	
 * Fecha de Creación: 9 / Noviembre / 2016                                                *
 * Fecha de última modificación: 12 / Noviembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#include "Tablero.h"
#include "Jugador.h"

#include <iostream>

using namespace std;

// Esta función imprime el estado actual de un Tablero.

void dibujar(Tablero * T){

	cout << endl;
	cout << " |---------TRIQUI--------|\n" << endl;
    cout << " *************************\n";
    cout << " *    ESTADO DEL JUEGO   *\n";
    cout << " *************************\n";
    
		for (int x=0; x<3; x++) {
		
			for (int y=0; y<3; y++) {
			
                 cout << " |  " << T->getPosicion_triqui(x, y) << "  | ";
                 
             }
             
             cout << endl;
             cout << " *************************\n";
             
         }
         
    cout << endl;
    
}    

// Esta función decide si una posición es válida o no.

bool posicion_valida (int F, int C) {

     if ((F <= 2 && F >= 0) && (C <= 2 && C >= 0)){
     
             return true;
             
     }
     
     else {
     
          return false;
          
     }
}

int main(int argc, char * argv[]){

	// Declaración de las variables a utilizar.
	
	Jugador * J1 = new Jugador("X");
	Jugador * J2 = new Jugador("O");
	Tablero * T = new Tablero();
	int fila;
	int columna; 
	bool decision = true;
	int empate = 0;
	string juicio;
	
	// Imprimimos el inicio del juego.
	
	dibujar(T);
	
	do {
	
		// Verificamos si el juego acabó o continúa.
	
		if(decision){
		
			do {
			
				// Pedimos y acomodamos los datos de la posición de juego.
			
				cout << "Jugador 1 " << "(" << J1->getSimbolo() << ")\n" << endl;
				cout << "Ingrese la fila: \n";
				
				cin >> fila; 
				
				fila -= 1;			
				
				cout << endl;
				cout << "Ingrese la columna: \n";
				
				cin >> columna;
				
				columna -= 1;
				
				// Verificamos si la posición se puede jugar o no.
				
				if ((T->posicion_ocupada(fila,columna)) || (!(posicion_valida(fila,columna)))) {
				
														cout << endl;
                                                        cout << "Posición ocupada o no válida.\n" << endl;
                                                        
				}
				
			} while((T->posicion_ocupada(fila,columna)) || (!(posicion_valida(fila,columna))));
			
			// Guardamos la posición aceptada.
			
			J1->setPosicion_x(fila);
			J1->setPosicion_y(columna);
			
			// Jugamos la posición.
			
			J1->jugar(T);
			
			// Contamos el turno.
			
			empate += 1;
			
			// Volvemos a imprimir el estado actual del tablero.
			
			dibujar(T);
			
			// Verificamos si el juego acaba o continúa.
			
			juicio = T->juzgar(decision, empate);
		}
		
		// Verificamos si el juego acabó o continúa.
		
		if(decision){
		
			do {
			
				// Pedimos y acomodamos los datos de la posición.
			
				cout << "Jugador 2 " << "(" << J2->getSimbolo() << ")\n" << endl;
				cout << "Ingrese la fila: \n";
				
				cin >> fila; 
				
				fila -= 1;		
					
				cout << endl;
				cout << "Ingrese la columna: \n";
				
				cin >> columna;
				
				columna -= 1;
				
				// Verificamos si la posición se puede jugar o no.
				
				if ((T->posicion_ocupada(fila,columna)) || (!(posicion_valida(fila,columna)))) {
				
														cout << endl;
                                                        cout << "Posición ocupada o no válida.\n" << endl;
                                                        
				}
				
			} while((T->posicion_ocupada(fila,columna)) || (!(posicion_valida(fila,columna))));
			
			// Guardamos la posición aceptada.
			
			J2->setPosicion_x(fila);
			J2->setPosicion_y(columna);
			
			// Jugamos la posición.
			
			J2->jugar(T);
			
			// Contamos el turno.
			
			empate += 1;
			
			// Volvemos a imprimir el estado actual del juego.
			
			dibujar(T);
			
			// Verificamos si el juego acaba o continúa.
			
			juicio = T->juzgar(decision, empate);
			
		}
		
	} while(decision);
	
	// Mostramos el veredicto final cuando acaba el juego.
	
	cout << juicio << endl;
	
return 0;

}
			
				
				
				
				
			
			
				
