#include "LCSE.h"

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

void imprimeLCSE(NODO *cab){
	NODO *actual=cab;
	while(actual->sig!=cab){
		printf("%d\n", actual->sig->dato);
		actual=actual->sig;
	}
	printf("%d\n", actual->sig->dato);
}
