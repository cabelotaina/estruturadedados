// FILE: pilha.h
// TITLE: Pilha
// SUBMITTED BY: Maurilio Atila Carvalho de Santana, Fristtram Helder Fernandes e Lauro Costa Borges
// Todo o código é meu, excepto quando creditado a outros.
// FOR COURSE: INE5408
// DUE DATE: 25 de Setembro 2012
//
// PURPOSE:
// Funciona como uma interface da pilha.cc. 
//
// METODOS:
// 
// insere
// empilha um conteudo e retona o ultimo, em caso de pilha cheia retorna  
// o codigo de erro e uma mensagem de pilha cheia.
// 
//
// remove
// desempilha um elemento do topo e retorna o ultimo, em caso de pilha 
// vazia retorna o codigo de erro e mensagem de pilha vazia.
//
// topoPilha
// retorna a posição do topo da pilha, em caso da pilha encontra vazia 
// retorna o codigo de erro e uma mensagem pilha vazia.
//
//
// inicializa
// na inicialização o topo recebe menos um elemento.
//
//
// mostra
// mostra os elementos da pilha
// caso a pilha está cheia retorna o topo e em caso da pilha
// estiver vazia retorna o codigo de erro e uma mensagem pilha vazia.
//
//
// cheia
// quando a pilha está cheia, retorna o Maximo da pilha menos um 
// em outras palavras o topo é igual a maximo da pilha menos um.
//
//
// vazia
// quando fila está vazio retorna menos um (-1), quer dizer o topo   
// é igual a menos 1.
//
#ifndef PILHA_H
#define PILHA_H

#define MAXPILHA 30
#define ERROPILHACHEIA -1
#define ERROPILHAVAZIA -2

class Pilha{

private:

	int topo;
	int pilha[MAXPILHA];

public:
	Pilha();
	~Pilha();
	void inicializa();
	int insere(int dado);
	int remove();
	int topoPilha();
	bool cheia();
	bool vazia();
	int mostra();

};

#endif
