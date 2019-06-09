/*
 * Instituto Politécnico Nacional
 * Escuela Superior de Cómputo
 * Estructura de datos
 * Grupo: 1CV8
 * Alumno: De la Cruz Sierra Diana Paola
 * 		   García Tello Axel
 * Profesor: Benjamín Luna Benoso
 * @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
 * Cabeceras para las funciones de LCSE
 * 
 * Fecha: 1 de abril de 2019
*/

#include <stdio.h>
#include <stdlib.h>

//Tipo de dato a guardar en la LCSE
typedef char TipoDato;

//Estructura de los nodos que componen la LCSE
typedef struct nodo{
	TipoDato dato;
	struct nodo *sig;
}NODO;

//Funciones principales para la LCSE
void ingresarLCSE(NODO **, TipoDato);
NODO *buscarLCSE(NODO *, TipoDato);
void eliminarLCSE(NODO **, TipoDato);
void imprimeLCSE(NODO *);
