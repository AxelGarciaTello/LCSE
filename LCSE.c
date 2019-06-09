/*
 * Instituto Politécnico Nacional
 * Escuela Superior de Cómputo
 * Estructura de datos
 * Grupo: 1CV8
 * Alumno: De la Cruz Sierra Diana Paola
 * 		   García Tello Axel
 * Profesor: Benjamín Luna Benoso
 * @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
 * Funciones principales de una LCSE
 * 
 * Fecha: 1 de abril de 2019
*/

#include "LCSE.h"

//Función para ingresar un nodo en la LCSE
void ingresarLCSE(NODO **cab, TipoDato x){
	NODO *nuevo=(NODO *) malloc(sizeof(NODO));
	nuevo->dato=x;
	nuevo->sig=nuevo;
	if(*cab){
		nuevo->sig=(*cab)->sig;
		(*cab)->sig=nuevo;
	}
	*cab=nuevo;
}

//Busca el nodo con la información indicada
NODO *buscarLCSE(NODO *a, TipoDato x){
	NODO *Aux=a;
	while(Aux->sig!=a){
		if(Aux->sig->dato==x){
			return Aux->sig;
		}
		Aux=Aux->sig;
	}
	if(Aux->sig->dato==x){
		return Aux->sig;
	}
	return NULL;
}

//Elimina el nodo con la información indicada
void eliminarLCSE(NODO **cab, TipoDato x){
	NODO *actual=(*cab);
	int encontrado=0;
	while(actual->sig!=(*cab) && !encontrado){
		encontrado=(actual->sig->dato==x);
		if(!encontrado){
			actual==actual->sig;
		}
	}
	encontrado=(actual->sig->dato==x);
	if(encontrado){
		NODO *aux=actual->sig;
		if((*cab)->sig==(*cab)){
			*cab=NULL;
		}
		else{
			if(aux==(*cab)){
				*cab=actual;
			}
			actual->sig=aux->sig;
			free(aux);
		}
	}
}

//Imprime todos los datos de la LCSE
void imprimeLCSE(NODO *cab){
	NODO *actual=cab;
	while(actual->sig!=cab){
		printf("%c", actual->sig->dato);
		actual=actual->sig;
	}
	printf("%c", actual->sig->dato);
}
