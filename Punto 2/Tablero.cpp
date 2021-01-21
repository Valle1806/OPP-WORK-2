/******************************************************************************************
 * Autores:                                                                               *
 *                                                                                        *
 * -Christian Camilo Taborda Campiño 1632081-3743.                                        *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743.                                      *
 * -Juan Sebastián Paz Velásquez 1626846-3743.                                            *
 *                                                                                        *
 * Título: Tablero.cpp                                                                    *
 *                                                                                        *
 * Descripción:                                                                           *
 *                                                                                        *
 * -Este programa define los métodos de la clase -Tablero-.                               *
 *                                                                                        *	
 * Fecha de Creación: 9 / Noviembre / 2016                                                *
 * Fecha de última modificación: 12 / Noviembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#include "Tablero.h"

// Esta función construye un Tablero vacío.

Tablero::Tablero(){

	for(int x=0; x<3; x++){
	
		for(int y=0; y<3; y++){
		
			triqui[x][y] = " ";
			
		}
	}
}

// Esta función retorna un elemento de la matríz del Tablero.

string Tablero::getPosicion_triqui(int posicion_xIn, int posicion_yIn){
		
		return triqui[posicion_xIn][posicion_yIn];
		
}

// Esta función cambia uno de los elementos de la matríz del Tablero.

void Tablero::setPosicion_triqui(int posicion_xIn, int posicion_yIn, string N){
	
	triqui[posicion_xIn][posicion_yIn] = N;
	
}

// Esta función decide si una posición está ocupada o no.

bool Tablero::posicion_ocupada(int F, int C){

	if ((F >= 0 && F <= 2) && (C >=0 && C <= 2)){
	
		if ((triqui[F][C].compare("X") == 0)||(triqui[F][C].compare("O") == 0)) {
		
			return true;
			
		}
		
		else {
		
			return false;
			
		}
		
	}
	
	else {
	
		return false;
		
	}
} 

// Esta función decide si hay algún ganador o el juego queda empatado.

string Tablero::juzgar(bool &decision, int empate){

    for(int i=0; i<3; i++){
    
			// Comprobamos las filas para el jugador 1.
              
              if((triqui[i][0].compare("X") == 0)&&(triqui[i][1].compare("X") == 0)&&(triqui[i][2].compare("X") == 0)&&(decision)){
                  
                  decision = false;
                  return "El juego ha terminado: Gana el jugador 1\n";
                  
              }
              
              else {
              
				// Comprobamos las columnas para el jugador 1.
              
                   if((triqui[0][i].compare("X") == 0)&&(triqui[1][i].compare("X") == 0)&&(triqui[2][i].compare("X") == 0)&&(decision)){
                        
                        decision = false;
						return "El juego ha terminado: Gana el jugador 1\n";
						
                   }
                   
                   else {
                   
						// Comprobamos las filas para el jugador 2.
                   
                        if ((triqui[i][0].compare("O") == 0)&&(triqui[i][1].compare("O") == 0)&&(triqui[i][2].compare("O") == 0)&&(decision)){
                            
                            decision = false;
							return "El juego ha terminado: Gana el jugador 2\n";
							
                        } 
                                                
                        else{
                        
							// Comprobamos las columnas para el jugador 2.
                        
                             if ((triqui[0][i].compare("O") == 0)&& (triqui[1][i].compare("O") == 0)&&(triqui[2][i].compare("O") == 0)&&(decision)){
                                  
                                decision = false;
								return "El juego ha terminado: Gana el jugador 2\n";
								
                             }
                        } 
                   }
              }              
                 
      }     
      
      // Comprobamos la diagonal para el jugador 1.
      
      if ((triqui[0][0].compare("X") == 0)&&(triqui[1][1].compare("X") == 0)&&(triqui[2][2].compare("X") == 0)&&(decision)){
                  
                  decision = false;
                  return "El juego ha terminado: Gana el jugador 1\n";
                  
      } 
      else {
      
		// Comprobamos la diagonal opuesta para el jugador 1.
      
           if ((triqui[0][2].compare("X") == 0)&&(triqui[1][1].compare("X") == 0)&&(triqui[2][0].compare("X") == 0)&&(decision)){
                 
                  decision = false;
                  return "El juego ha terminado: Gana el jugador 1\n";
                  
            }
            
            else {
            
				// Comprobamos la diagonal para el jugador 2.
            
                 if ((triqui[0][0].compare("O") == 0)&&(triqui[1][1].compare("O") == 0)&&(triqui[2][2].compare("O") == 0)&&(decision)){
                  
					decision = false;
					return "El juego ha terminado: Gana el jugador 2\n";
					
                  }
                  
                  else {
                  
					// Comprobamos la diagonal opuesta para el jugador 2.
                  
                       if ((triqui[0][2].compare("O") == 0)&&(triqui[1][1].compare("O") == 0)&&(triqui[2][0].compare("O") == 0)&&(decision)){
                           
                            decision = false;
							return "El juego ha terminado: Gana el jugador 2\n";
							
                       }
                  } 
            }  
      }
      
      // Comprobamos si se han jugado las 9 posiciones.
      
      if ((empate==9)&&(decision)){
                     
                     decision = false;
					 return "El juego ha terminado: Empate\n";    
					      
      }
      
		else {
		
			return "";  
			
		}             
} 
