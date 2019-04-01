#include <stdio.h>
#include <stdlib.h>

typedef int TipoDato;

typedef struct nodo{
	TipoDato dato;
	struct nodo *sig;
}NODO;

void ingresarLCSE(NODO **, TipoDato);
NODO *buscarLCSE(NODO *, TipoDato);
void eliminarLCSE(NODO **, TipoDato);
void imprimeLCSE(NODO *);
