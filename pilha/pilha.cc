// FILE: pilha.cc
// TITLE: Pilha
// SUBMITTED BY: Maurilio Atila
// Todo o código é meu, excepto quando creditado a outros.
// FOR COURSE: INE5408
// DUE DATE: 23 de Setembro 2012
//
// PURPOSE:
// Este programa implementa uma pilha, funciona exatamente como
// uma pilha do mundo real, onde podemos inserir elementos apenas
// no topo, e podemos retirar os elementos apenas do topo. Ou seja
// esta sobre o modelo FIFO - First in First out.
//
// OVERALL METHOD:
// A lista geral de tarefas é:
// 
// 1. Entre com valores, ate o maximo de 30 valores.
// 2. Liste os valores.
// 3. Veja o valor que esta no topo.
// 4. Remova valores da pilha.
//
// FUNCTIONS:
//
// insere
// empilha um conteudo e retona o ultimo, em caso de pilha cheia retorna  
// o codigo de erro e uma mensagem de pilha cheia.
// 
// remove
// desempilha um elemento do topo e retorna o ultimo, em caso de pilha 
// vazia 
//
// topoPilha
//
//
//
// inicializa
//
//
//
// mostra
//
//
//
// cheia
//
//
//
// vazia
//
//
//
// INCLUDED FILES:
// string.h
// stdio.h
// pilha.h
//
// DATA FILES:
// none

#include <string.h>
#include "pilha.h"
#include <stdio.h>

Pilha::Pilha(){
	inicializa();
	printf("%s\n","CRIANDO PILHA");
}
int Pilha::insere(int dado){
	if (cheia()){
		printf("%s\n","Pilha cheia.");
		return ERROPILHACHEIA;
	}
	else{
		topo++;
		pilha[topo] = dado;
		return topo;
	}
}
int Pilha::remove(){
	if (vazia()){
	printf("%s\n","Pilha Vazia.");
		return ERROPILHAVAZIA;
	}
	else{
		topo--;
		return topo;
	}
}
void Pilha::inicializa(){
	topo = - 1;
}
int Pilha::topoPilha(){
	if(vazia()){
		printf("%s\n","Pilha Vazia.");
		return ERROPILHAVAZIA;
	}
	else{
		return pilha[topo];
	}
}
int Pilha::mostra(){
	if(vazia()){
		printf("%s\n","Pilha Vazia.");
		return ERROPILHAVAZIA;
	}else{
		for(int i = topo; i >= 0; i--){
			printf("%d\n", pilha[i]);
		}
	return topo;
	}
}
bool Pilha::cheia(){
	return topo == MAXPILHA - 1;
}
bool Pilha::vazia(){
	return topo == -1;
}
Pilha::~Pilha(){}
