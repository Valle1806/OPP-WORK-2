/******************************************************************************************
 * Autores:                                                                               *
 *                                                                                        *
 * -Christian Camilo Taborda Campiño 1632081-3743.                                        *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743.                                      *
 * -Juan Sebastián Paz Velásquez 1626846-3743.                                            *
 *                                                                                        *
 * Título: Consolidado.h                                                                  *
 *                                                                                        *
 * Descripción:                                                                           *
 *                                                                                        *
 * -Este programa define la clase -Consolidado- con sus respectivos métodos y atributos.  *
 *                                                                                        *	
 * Fecha de Creación: 8 / Noviembre / 2016                                                *
 * Fecha de última modificación: 12 / Noviembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#ifndef CONSOLIDADO_H
#define CONSOLIDADO_H

class Consolidado {	

	private:
	
		int total_ejecutivos;
		int total_operativos;
		float salarios_ejecutivos;
		float salarios_operativos;
		float promedio_ejecutivos;
		float promedio_operativos;
		
	public:
		
		// CONSTRUCTOR:
		
		Consolidado(int total_ejecutivosIn, int total_operativosIn, float salarios_ejecutivosIn, float salarios_operativosIn, float promedio_ejecutivosIn, float promedio_operativosIn);
				
		// MÉTODOS GET:
		
		int getTotal_ejecutivos();
		int getTotal_operativos();
		float getSalarios_ejecutivos();
		float getSalarios_operativos();
		float getPromedio_ejecutivos();
		float getPromedio_operativos();
		
		// MÉTODOS SET:
		
		void setTotal_ejecutivos(int total_ejecutivosIn);
		void setTotal_operativos(int total_operativosIn);
		void setSalarios_ejecutivos(float salarios_ejecutivosIn);
		void setSalarios_operativos(float salarios_operativosIn);
		void setPromedio_ejecutivos(float promedio_ejecutivosIn);
		void setPromedio_operativos(float promedio_operativosIn);
		
};

#endif
		
	
		
		
					
	
	
