// FILE: pilha.cc
// TITLE: pilha
// SUBMITTED BY: Maurilio Atila Carvalho de Santana, Fristtram Helder Fernandes e Lauro Costa Borges.
// Todo o código é meu, excepto quando creditado a outros.
// FOR COURSE: INE5408
// DUE DATE: 23 de Outubro 2012
//
// PURPOSE:
// Este programa implementa pilha com memoria alocada dinamicamente
//
// OVERALL METHOD:
// 
// 
//
// FUNCTIONS:
//
// adiciona
// cria na memoria um novo elemento da fila, e adiciona no final da pilha existente
// 
// 
// retira
// cria na memoria um novo elemento do tipo TipoInfo, remove por completo da memoria
// o ElementoFila e TipoInfo anteriores, copiando o TipoInfo original para este auxiliar
//
// topo
// retorna o topo da pilha
//
//
// vazia
// retorna verdadeiro (True) para pilha vazia e falso (False)
//
//
// criaPilha
// cria uma pilha vazia
//
//
// INCLUDED FILES:
// pilha.h
// elementopilha.h
// tipoinfo.h
// cstring.h
//
// DATA FILES:
// none

#include "pilha.h"
#include "elementopilha.h"
#include "tipoinfo.h"
#include <cstring>

Pilha::Pilha(){
	
}


Pilha* Pilha::criaPilha(){

	Pilha *aPilha;
	aPilha = new Pilha;
	if (aPilha != NULL) {
		aPilha->tamanho = 0;
		aPilha->dados = NULL;
	}
	return aPilha;
}


bool  Pilha::pilhaVazia(Pilha *aPilha){
	return (aPilha->tamanho==0);
}



int Pilha::adiciona(Pilha *aPilha, ElementoPilha *e, TipoInfo *dado){
	ElementoPilha *aux;

	if (pilhaVazia(aPilha)) {
		aPilha->dados = e;
		aPilha->dados->info = dado;
		aPilha->tamanho = aPilha->tamanho + 1;
		return 0;
	}

	aux = aPilha->dados;
	while(aux->proximo != NULL) {
		aux = aux->proximo;
	}
	aux->proximo = e;
	e->info = dado;
	aPilha->tamanho = aPilha->tamanho + 1;		
	return 0;	
}


int Pilha::retira(Pilha *aPilha, TipoInfo *dado){
	ElementoPilha *e;

	if (pilhaVazia(aPilha)) {
		return 1;
	}else{
		e = aPilha->dados;
		memcpy(dado, e->info, sizeof(TipoInfo));
		aPilha->dados = e->proximo;
		aPilha->tamanho = aPilha->tamanho - 1;
		delete e;
		delete e->info;
		return 0;
	}
}

int Pilha::topo(Pilha *aPilha){

	if(pilhaVazia(aPilha)) {
		return 0;
	}

	ElementoPilha *auxiliar = aPilha->dados;
	while(auxiliar->proximo != NULL) {
		auxiliar = auxiliar->proximo;
	}
	return auxiliar->info->disco;
}

void Pilha::destroiPilha(Pilha *aPilha){
	
	if (pilhaVazia(aPilha)) {
	delete  aPilha;
	}else{
		ElementoPilha *atual = aPilha->dados;
		while (atual != NULL){
			ElementoPilha *anterior = atual;
			atual = atual->proximo;
			delete anterior->info;
			delete anterior;
		}
		delete  aPilha;
	}
}

Pilha::~Pilha(){}
