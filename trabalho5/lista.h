// FILE: lista.h
// TITLE: Lista
// SUBMITTED BY: Maurilio Atila Carvalho de Santana, Fristtram Helder Fernandes e Lauro Costa Borges
// Todo o código é meu, excepto quando creditado a outros.
// FOR COURSE: INE5408
// DUE DATE: 16 de Outubro 2012
//
// PURPOSE:
// Funciona como uma interface da lista.cc
//
// METODOS:
// 
// f1
// 
// s
// 
//
// f2
//
//
// s
#ifndef _LISTA_ENCADEADA_
#define _LISTA_ENCADEADA_
#include "tipoinfo.h"
#include "elementolista.h"

#define ERROLISTAVAZIA -1
#define ERROPOSICAO -2
#define ERROLISTACHEIA -3
class Lista{

public:
	ElementoLista *dados;
	int tamanho;


Lista();
~Lista();
int adiciona(Lista *aLista, TipoInfo *dado);
int adicionaNoInicio(Lista *aLista, TipoInfo *dado);
int adicionaNaPosicao(Lista *aLista, TipoInfo *dado, int posicao); 
int adicionaEmOrdem(Lista *aLista, TipoInfo *dado); 
int retira(Lista *aLista); 
TipoInfo* retiraDoInicio(Lista *aLista); 
int retiraDaPosicao(Lista *aLista,int posicao); 
int retiraEspecifico(Lista *aLista, ElementoLista *dado);
bool listaVazia(Lista *aLista); 
int posicao(Lista *aLista, ElementoLista *dado);
bool contem(Lista *aLista, ElementoLista *dado);
Lista* criaLista(); 
void destroiLista(Lista *aLista);
};
#endif
