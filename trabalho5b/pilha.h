// FILE: pilha.h
// TITLE: pilha
// SUBMITTED BY: Maurilio Atila Carvalho de Santana, Fristtram Helder Fernandes e Lauro Costa Borges.
// Todo o código é meu, excepto quando creditado a outros.
// FOR COURSE: INE5408
// DUE DATE: 23 de Outubro 2012
//
// PURPOSE:
// Funciona como uma interface de pilha.cc 
//
// METODOS:
// 
// adiciona
// retira
// topo
// pilhaVazia
// criaPilha
// destroiPilha

#ifndef _PILHA_H
#define _PILHA_H
#include "tipoinfo.h"
#include "elementopilha.h"

class Pilha{

public:
	ElementoPilha *dados;
	int tamanho;


Pilha();
~Pilha();
int adiciona(Pilha *aPilha, ElementoPilha *e, TipoInfo *dado);
int retira(Pilha *aPilha, TipoInfo *dado);
Pilha* criaPilha(); 
void destroiPilha(Pilha *aPilha);
bool pilhaVazia(Pilha *aPilha);
int topo(Pilha *aPilha);
};
#endif
