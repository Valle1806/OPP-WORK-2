/************************************************************************************************
 * Autores:                                                                                     *
 *                                                                                              *
 * -Christian Camilo Taborda Campiño 1632081-3743.                                              *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743.                                            *
 * -Juan Sebastián Paz Velásquez 1626846-3743.                                                  *
 *                                                                                              *
 * Título: main.cpp                                                                             *
 *                                                                                              *
 * Descripción:                                                                                 *
 *                                                                                              *
 * -Este programa contiene las instancias e implementaciones para su ejecución.                 *
 *                                                                                              *			
 * Fecha de Creación: 8 / Noviembre / 2016                                                      *
 * Fecha de última modificación: 12 / Noviembre / 2016                                          *
 *                                                                                              *
 ************************************************************************************************
 */

#include "Empleado_Ejecutivo.h"
#include "Empleado_Operativo.h"
#include "Consolidado.h"

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Esta función imprime el menú principal del programa.

void menu(){

	cout << endl;
	cout << "////////////////////////////////////////////////////\n" << endl;
	cout << " *****************************\n";
	cout << " *   BIENVENIDO A UVNÓMINA   *\n";
	cout << " *****************************\n";
	cout << " *   Seleccione una opción:  *\n";
	cout << " *****************************\n";
	cout << " * 1. Ingresar empleado.     *\n";
	cout << " * 2. Consultar empleado.    *\n";
	cout << " * 3. Consultar Informes.    *\n";
	cout << " * 4. Salir.                 *\n";
	cout << " *****************************\n";
	cout << endl;
	
}	

// Esta función retorna la cantidad de empleados ejecutivos de un vector.

int contar_ejecutivos (vector <Empleado_Ejecutivo*> E){

	int total = 0;
	
	for (int x=0; x<E.size(); x++){
	
		total += 1;
		
	}
	
	return total;
	
}

// Esta función retorna la cantidad de empleados operativos de un vector.

int contar_operativos (vector <Empleado_Operativo*> E){

	int total = 0;
	
	for (int x=0; x<E.size(); x++){
	
		total += 1;
		
	}
	
	return total;
	
}

// Esta función retorna el total de salarios de los empleados ejecutivos de un vector.

float sumar_salarios_ejecutivos(vector <Empleado_Ejecutivo*> E){

	float suma = 0;
	
	for (int x=0; x<E.size(); x++){
	
		suma += E[x]->getSalario();
		
	}
	
	return suma;
	
}

// Esta función retorna el total de salarios de los empleados operativos de un vector.

float sumar_salarios_operativos(vector <Empleado_Operativo*> E){

	float suma = 0;
	
	for (int x=0; x<E.size(); x++){
	
		suma += E[x]->getSalario();
		
	}
	
	return suma;
	
}

// Esta función retorna el promedio de salarios de los empleados ejecutivos de un vector.

float promediar_salarios_ejecutivos(vector <Empleado_Ejecutivo*> E){

	float promedio;
	
	if (contar_ejecutivos(E) == 0){
	
		promedio = 0;
		
	}
	
	else {
	
		promedio = sumar_salarios_ejecutivos(E) / contar_ejecutivos(E);
		
	}
	
	return promedio;
	
}

// Esta función retorna el promedio de salarios de los empleados operativos de un vector.

float promediar_salarios_operativos(vector <Empleado_Operativo*> E){

	float promedio;
	
	if (contar_operativos(E) == 0){
	
		promedio = 0;
		
	}
	
	else {
	
		promedio = sumar_salarios_operativos(E) / contar_operativos(E);
		
	}
	
	return promedio;
	
}

// Esta función decide si existe un empleado ejecutivo dentro de un vector o no.

bool existe_ejecutivo(vector <Empleado_Ejecutivo*> E, int C){

	bool encontrar = false;
	
	for (int x=0; x<E.size(); x++){
	
		if(C == E[x]->getIdentificacion()){
		
			encontrar = true;
			
		}
	}
	
	return encontrar;
	
}	

// Esta función decide si existe un empleado operativo dentro de un vector o no.

bool existe_operativo(vector <Empleado_Operativo*> E, int C){

	bool encontrar = false;
	
	for (int x=0; x<E.size(); x++){
	
		if(C == E[x]->getIdentificacion()){
		
			encontrar = true;
			
		}
	}
	
	return encontrar;
	
}	

// Esta función busca un empleado ejecutivo dentro de un vector y retorna su posición.

int buscar_ejecutivo(vector <Empleado_Ejecutivo*> E, int C){

	for (int x=0; x<E.size(); x++){
	
		if(C == E[x]->getIdentificacion()){
		
			return x;
			
		}
	}
}		

// Esta función busca un empleado operativo dentro de un vector y retorna su posición.	

int buscar_operativo(vector <Empleado_Operativo*> E, int C){

	for (int x=0; x<E.size(); x++){
	
		if(C == E[x]->getIdentificacion()){
		
			return x;
			
		}
	}
}	

int main (int argc, char * argv []){

	// Declaración de las variables a utilizar.

	int opcion;
	vector <Empleado_Ejecutivo*> ejecutivos;
	vector <Empleado_Operativo*> operativos;	
	Empleado_Ejecutivo * E = 0;
	Empleado_Operativo * O = 0;	
	Consolidado * C = new Consolidado(0,0,0,0,0,0);	
	int identificacion;
	string nombre;
	int edad;
	string seccion;
	string descripcion;
	string codigo;
	float monto_basico;
	float comisiones;
	float primas_extralegales;
	int numero_empleados;
	float viaticos;
	string jefe;
	
	do {
	
		// Imprimimos el menú principal.
	
		menu();
		
		// Pedimos la opción a ejecutar.
	
	    cout << "Ingrese su opción: \n";
	    
	    cin >> opcion;
	    
	    // Decidimos qué hacer a partir de la opción ingresada.
	
	    switch(opcion){
	    
			case 1:
			
				int seleccion;
				
				do {
				
					cout << endl;
					cout << "Ingrese el tipo de empleado: \n";
					cout << "1. Ejecutivo. \n";
					cout << "2. Operativo. \n" << endl;
					
					cin >> seleccion;
					
					if(seleccion == 1 || seleccion == 2){
					
						// Pedimos los datos correspondientes a cualquier empleado.
						
						cout << endl;
						cout << "Ingrese el nombre del empleado: \n";
						
						cin >> nombre;
						
						cout << endl;
						cout << "Ingrese la edad del empleado: \n";
						
						cin >> edad;
						
						cout << endl;
						cout << "Ingrese la sección del cargo: \n";
						
						cin >> seccion;
						
						cout << endl;
						cout << "Ingrese la descripción del cargo: \n";
						
						cin >> descripcion;
						
						cout << endl;
						cout << "Ingrese el código del cargo: \n";
						
						cin >> codigo;
						
						cout << endl;
						cout << "Ingrese el monto básico del salario: \n";
						
						cin >> monto_basico;
						
						cout << endl;
						cout << "Ingrese las comisiones del salario: \n";
						
						cin >> comisiones;
						
						cout << endl;
						cout << "Ingrese las primas extra-legales del salario: \n";
						
						cin >> primas_extralegales;
						
						// Nuevamente decidimos qué hacer a partir de la selección ingresada.
						
						switch(seleccion){
						
							case 1:
							
								// Pedimos los datos extra correspondientes a un empleado ejecutivo.
							
								cout << endl;
								cout << "Ingrese el número de empleados a cargo: \n";
								
								cin >> numero_empleados;
								
								cout << endl;
								cout << "Ingrese el valor de los viáticos: \n";
								
								cin >> viaticos;
								
								// Definimos la identificación del empleado automáticamente.
								
								identificacion = contar_ejecutivos(ejecutivos) + contar_operativos(operativos);
								
								// Definimos el empleado ejecutivo con los datos ingresados.
								
								E = new Empleado_Ejecutivo(identificacion, nombre, edad, seccion, descripcion, codigo, monto_basico, comisiones, primas_extralegales, numero_empleados, viaticos);
								
								// Guardamos el empleado en su respectivo vector.
								
								ejecutivos.push_back(E);
								
								// Guardamos los datos actualizados en el consolidado.
								
								C->setTotal_ejecutivos(contar_ejecutivos(ejecutivos));
								C->setTotal_operativos(contar_operativos(operativos));
								C->setSalarios_ejecutivos(sumar_salarios_ejecutivos(ejecutivos));
								C->setSalarios_operativos(sumar_salarios_operativos(operativos));
								C->setPromedio_ejecutivos(promediar_salarios_ejecutivos(ejecutivos));
								C->setPromedio_operativos(promediar_salarios_operativos(operativos));
								
								// Imprimimos el mensaje para indicar que el ingreso funcionó.
								
								cout << endl;
								cout << "Ingreso exitoso! \n";
								
								break;
								
							case 2:
							
								// Pedimos los datos extra correspondientes a un empleado operativo.
								
								cout << endl;
								cout << "Ingrese el nombre del jefe a cargo: \n";
								
								cin >> jefe;
								
								// Definimos automáticamente la identificación del empleado. 
																							
								identificacion = contar_ejecutivos(ejecutivos) + contar_operativos(operativos);
								
								// Definimos el empleado operativo a partir de los datos ingresados.	
														
								O = new Empleado_Operativo(identificacion, nombre, edad, seccion, descripcion, codigo, monto_basico, comisiones, primas_extralegales, jefe);
								
								// Guardamos el empleado en su respectivo vector.
								
								operativos.push_back(O);
								
								// Guardamos los datos actualizados en el consolidado.
								
								C->setTotal_ejecutivos(contar_ejecutivos(ejecutivos));
								C->setTotal_operativos(contar_operativos(operativos));
								C->setSalarios_ejecutivos(sumar_salarios_ejecutivos(ejecutivos));
								C->setSalarios_operativos(sumar_salarios_operativos(operativos));
								C->setPromedio_ejecutivos(promediar_salarios_ejecutivos(ejecutivos));
								C->setPromedio_operativos(promediar_salarios_operativos(operativos));
								
								// Imprimimos un mensaje para indicar que el ingreso funcionó.
								
								cout << endl;
								cout << "Ingreso exitoso! \n";
								
								break;
								
							default:
							
								// Imprimimos un mensaje para indicar que la opción es incorrecta.
								
								cout << endl;
								cout << "Dato equivocado. \n";
								
								break;
								
						}
					}
					
					else {
					
						// Imprimimos un mensaje para indicar que la opción es incorrecta.
					
						cout << endl;
						cout << "Dato equivocado. \n";
						
					}
					
				}while(!(seleccion >= 1 && seleccion <= 2));
				
				break;
				
		    case 2:
		    
				int clave;
				int posicion;
				
				// Pedimos la identificación para buscar el empleado.
				
				cout << endl;
				cout << "Ingrese la identificación del empleado: \n";
				
				cin >> clave;
				
				// Verificamos si el empleado existe en el vector de ejecutivos.
				
				if(existe_ejecutivo(ejecutivos, clave)){
				
					// Seleccionamos el empleado de acuerdo a su identificación e imprimimos todos sus datos.
					
					posicion = buscar_ejecutivo(ejecutivos, clave);
					
					cout << endl;
					cout << "////////////////////////////////////////////////////\n" << endl;
					cout << " ***************************************\n";
					cout << " *        BIENVENIDO A UVNÓMINA        *\n";
					cout << " ***************************************\n";
					cout << " *         DATOS DEL EMPLEADO          *\n";
					cout << " ***************************************\n";
					cout << " - Identificación: " << ejecutivos[posicion]->getIdentificacion() << ".\n";
					cout << " - Nombre: " << ejecutivos[posicion]->getNombre() << ".\n";
					cout << " - Empleado: Ejecutivo. \n";
					cout << " - Edad: " << ejecutivos[posicion]->getEdad() << ".\n"; 
					cout << " - Num. Empleados a cargo: " << ejecutivos[posicion]->getNumero_empleados() << ".\n";
					cout << " ***************************************\n";
					cout << " *                CARGO                *\n";
					cout << " ***************************************\n";
					cout << " - Sección: " << ejecutivos[posicion]->getSeccion_cargo() << ".\n";
					cout << " - Descripción: " << ejecutivos[posicion]->getDescripcion_cargo() << ".\n";
					cout << " - Código: " << ejecutivos[posicion]->getCodigo_cargo() << ".\n";
					cout << " ***************************************\n";
					cout << " *               SALARIO               *\n";
					cout << " ***************************************\n";
					cout << " - Básico: " << ejecutivos[posicion]->getMonto_basico_salario() << ".\n";
					cout << " - Comisión: " << ejecutivos[posicion]->getComisiones_salario() << ".\n";
					cout << " - Prima Extra-Legal: " << ejecutivos[posicion]->getPrimas_extralegales_salario() << ".\n";
					cout << " - Viáticos: " << ejecutivos[posicion]->getViaticos() << ".\n";
					cout << " - Total: " << ejecutivos[posicion]->getSalario() << ".\n";
					cout << " ***************************************\n";
					
				}
				
				else {
				
					// Verificamos si el empleado existe en el vector de operativos.
				
					if(existe_operativo(operativos, clave)){
					
						// Seleccionamos el empleado de acuerdo a su identificación e imprimimos todos sus datos.
						
						posicion = buscar_operativo(operativos, clave);
						
						cout << endl;
						cout << "////////////////////////////////////////////////////\n" << endl;
						cout << " ***************************************\n";
						cout << " *        BIENVENIDO A UVNÓMINA        *\n";
						cout << " ***************************************\n";
						cout << " *         DATOS DEL EMPLEADO          *\n";
						cout << " ***************************************\n";
						cout << " - Identificación: " << operativos[posicion]->getIdentificacion() << ".\n";
						cout << " - Nombre: " << operativos[posicion]->getNombre() << ".\n";
						cout << " - Empleado: Operativo. \n";
						cout << " - Edad: " << operativos[posicion]->getEdad() << ".\n"; 
						cout << " - Jefe a cargo: " << operativos[posicion]->getJefe() << ".\n";
						cout << " ***************************************\n";
						cout << " *                CARGO                *\n";
						cout << " ***************************************\n";
						cout << " - Sección: " << operativos[posicion]->getSeccion_cargo() << ".\n";
						cout << " - Descripción: " << operativos[posicion]->getDescripcion_cargo() << ".\n";
						cout << " - Código: " << operativos[posicion]->getCodigo_cargo() << ".\n";
						cout << " ***************************************\n";
						cout << " *               SALARIO               *\n";
						cout << " ***************************************\n";
						cout << " - Básico: " << operativos[posicion]->getMonto_basico_salario() << ".\n";
						cout << " - Comisión: " << operativos[posicion]->getComisiones_salario() << ".\n";
						cout << " - Prima Extra-Legal: " << operativos[posicion]->getPrimas_extralegales_salario() << ".\n";
						cout << " - Auxilio de transporte: " << operativos[posicion]->getAuxilio_transporte() << ".\n";
						cout << " - Total: " << operativos[posicion]->getSalario() << ".\n";
						cout << " ***************************************\n";
						
					}
					
					else {
					
						// Imprimimos un mensaje para indicar que el empleado no fué encontrado.
					
						cout << endl;
						cout << "El empleado no está registrado. \n";
						
					}
				}	
						
				break;
				
		    case 3:
		    
				int decision;
				
				do {
				
					// Pedimos el tipo de informes que se desea.
				
					cout << endl;
					cout << " ******************************\n";
					cout << " *          INFORMES          *\n";
					cout << " ******************************\n";
					cout << " * 1. Informe por total.      *\n";
					cout << " * 2. Informe por promedio.   *\n";
					cout << " ******************************\n" << endl;
					cout << "Ingrese su opción: \n";
					
					cin >> decision;
					
					// Decidimos qué hacer a partir de la opción ingresada.
					
					switch(decision){
					
						case 1:
						
							// Imprimimos el total de empleados de cada tipo y el total de los salarios de los empleados de cada tipo.
						
							cout << endl;
							cout << "////////////////////////////////////////////////////\n" << endl;
							cout << " *****************************\n";
							cout << " *   BIENVENIDO A UVNÓMINA   *\n";
							cout << " *****************************\n";
							cout << " *     INFORME POR TOTAL     *\n";
							cout << " *****************************\n";
							cout << " * Total Ejecutivos: " << C->getTotal_ejecutivos() << ".\n";
							cout << " * Total Salarios: " << C->getSalarios_ejecutivos() << ".\n";
							cout << " * Total Operativos: " << C->getTotal_operativos() << ".\n";
							cout << " * Total Salarios: " << C->getSalarios_operativos() << ".\n";
							cout << " *****************************\n";
							
							break;
							
						case 2:
						
							// Imprimimos el total de empleados de cada tipo y el promedio de los salarios de los empleados de cada tipo.
						
							cout << endl;
							cout << "////////////////////////////////////////////////////\n" << endl;
							cout << " *****************************\n";
							cout << " *   BIENVENIDO A UVNÓMINA   *\n";
							cout << " *****************************\n";
							cout << " *    INFORME POR PROMEDIO   *\n";
							cout << " *****************************\n";
							cout << " * Total Ejecutivos: " << C->getTotal_ejecutivos() << ".\n";
							cout << " * Promedio Salarios: " << C->getPromedio_ejecutivos() << ".\n";
							cout << " * Total Operativos: " << C->getTotal_operativos() << ".\n";
							cout << " * Promedio Salarios: " << C->getPromedio_operativos() << ".\n";
							cout << " *****************************\n";
							
							break;
							
						default:
						
							// Imprimimos un mensaje para indicar que la opción es incorrecta.
						
							cout << endl;
							cout << "Dato equivocado. \n";
							
							break;
							
					}
					
				}while(!(decision >= 1 && decision <= 2));		
							
				break;
				
			case 4:
			
				// Salimos del programa.
			
				return 0;
				
				break;
				
			default:
			
				// Imprimimos un mensaje para indicar que la opción es incorrecta.
			
				cout << endl;
				cout << "Dato equivocado. \n";
				
				break;
		}
		
	}while(opcion != 4);
	
}
	
