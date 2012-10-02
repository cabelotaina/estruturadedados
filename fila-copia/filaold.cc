// FILE: fila.cc
// TITLE: fila
// SUBMITTED BY: Maurilio Atila Carvalho de Santana, Fristtram Helder Fernandes e Lauro Costa Borges
// Todo o código é meu, excepto quando creditado a outros.
// FOR COURSE: INE5408
// DUE DATE: 24 de Setembro 2012
//
// PURPOSE:
// Este programa implementa uma fila, funciona exatamente como
// uma fila do mundo real, onde podemos inserir elementos apenas
// no final e retirar os elementos apenas do inicio. Ou seja
// esta sobre o modelo LIFO - Last in First out.
//
// OVERALL METHOD:
// A lista geral de tarefas é:
// 
// 1. Entre com elementos, ate o maximo de 100 valores.
// 2. Liste os elementos.
// 3. Veja o ultimo elemento.
// 4. Remova elementos da fila.
//
// FUNCTIONS:
//
// inclui
// emfilera um conteudo e retorna o ultimo, em caso de fila cheia retorna  
// o codigo de erro e uma mensagem de fila cheia.
//
// 
// cheia
// quando a fila está cheia, retorna o Maximo da fila menos um 
// em outras palavras o ultimo é igual a maximo da fila menos um.
//
// retira
// desemfilerar do primeiro elemento e retorna o ultimo da fila, em caso de fila
// vazia, retorna o codigo de erro e mensagem de fila vazia.
//
// ultimo
// retorna a posiçao do ultimo elemento. 
//
//
// vazia
// retorna verdadeiro (True) para fila vazia e falso (False)
// para fila com algum elemento.
//
//
// inicializa
// faz ultimos igual a -1, fila vazia.
//
//
// mostra
// lista os elementos da fila, em caso de vazia retorna codigo de erro e mensagem 
//
//
// INCLUDED FILES:
// string.h
// stdio.h
// fila.h
//
// DATA FILES:
// none

#include "fila.h"
#include <stdio.h>

// Contructor
// CREDIT:
// PURPOSE:
// O construtor inicia a fila.
//
// CALLS TO: inicializa
//
// METHOD: O seguinte é um pseudocodigo explicando como o contrutor funciona.
// 1. Initializa a variavel ultimo com -1 chamando a funçao inicializa.
// 2. Escreve uma mensagem "CRIANDO FILA"

Fila::Fila(){
	_ultimo = -1;
	printf("%s\n","CRIANDO FILA");
}
// copiar de pilha.cc
int Fila::inclui(ElementoFila dado){
	if(cheia()){
		printf("%s\n","Fila Cheia.");
		return ERROFILACHEIA;
	}
	_ultimo++;
	_fila[_ultimo] = dado;
	return _ultimo;
}
// copiar de pilha.cc
bool Fila::cheia(){
	return _ultimo == MAXFILA - 1;
}
// copiar de pilha.cc
int Fila::retira(){
	
	if(vazia()){
		printf("%s\n","Fila Vazia.");
		return ERROFILAVAZIA;
	}	
	else{ 
		_ultimo--;
		for (int i = 0; i <= _ultimo; i++){
			_fila[i] = _fila[i+1];
		}
	return _ultimo;
	}
}
// copiar de pilha.cc
int Fila::ultimo(){
	return _ultimo+1;
}
// copiar de pilha.cc
bool Fila::vazia(){
	return _ultimo == -1;
}
// copiar de pilha.cc
void Fila::inicializa(){
	_ultimo = -1;
}
// copiar de pilha.cc
void Fila::mostra(){
	
	ElementoFila ef;
	if(vazia()){
		printf("%s\n","Fila Vazia.");
	}
	else{
		//Falta testar nao retirar
		//if(cheia()) printf("%s\n","Fila Cheia.");
		for(int i = 0 ;i<=_ultimo; i++){
			printf("%s\n",_fila[i].data);
		} 
	}
}
// copiar de pilha.cc
Fila::~Fila(){}
