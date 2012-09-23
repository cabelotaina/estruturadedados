/*
@author Maurilio Atila;
@date ...
*/

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
