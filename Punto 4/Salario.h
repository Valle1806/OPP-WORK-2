/******************************************************************************************
 * Autores:                                                                               *
 *                                                                                        *
 * -Christian Camilo Taborda Campiño 1632081-3743.                                        *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743.                                      *
 * -Juan Sebastián Paz Velásquez 1626846-3743.                                            *
 *                                                                                        *
 * Título: Salario.h                                                                      *
 *                                                                                        *
 * Descripción:                                                                           *
 *                                                                                        *
 * -Este programa define la clase -Salario- con sus respectivos métodos y atributos.      *
 *                                                                                        *	
 * Fecha de Creación: 8 / Noviembre / 2016                                                *
 * Fecha de última modificación: 12 / Noviembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#ifndef SALARIO_H
#define SALARIO_H

class Salario {

	private:
	
		float monto_basico;
		float comisiones;
		float primas_extralegales;
		
	public:
		
		// CONSTRUCTOR:
		
		Salario(float monto_basicoIn, float comisionesIn, float primas_extralegalesIn);
		
		// MÉTODOS GET:
		
		float getMonto_basico();
		float getComisiones();
		float getPrimas_extralegales();
		
		// MÉTODO PARTICULAR:
		
		float getTotal_salario();
		
};

#endif
