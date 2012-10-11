// FILE: pilha.cc
// TITLE: Pilha
// SUBMITTED BY: Maurilio Atila Carvalho de Santana, Fristtram Helder Fernandes e Lauro Costa Borges
// Todo o código é meu, excepto quando creditado a outros.
// FOR COURSE: INE5408
// DUE DATE: 23 de Setembro 2012
//
// PURPOSE:
// Este programa implementa uma pilha, funciona exatamente como
// uma pilha do mundo real, onde podemos inserir elementos apenas
// no topo, e podemos retirar os elementos apenas do topo. Ou seja
// esta sobre o modelo LIFO - Last in First out.
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

// CONTRUCTOR: Pilha
// CREDIT:
// PURPOSE:
// O construtor é chamado uma unica vez e deve iniciar a pilha.
// 
// CALLS TO: inicializa
//
// CALLED FROM: main (chamada automatica ao criar instalancia do objeto)
//
// METHOD: O seguinte é um pseudocodigo explicando como o contrutor funciona.
// 1. Initializa a pilha chamando a funçao inicializa.
// 2. escreve a mensagem "CRIANDO PILHA"

Pilha::Pilha(){
	inicializa();
	printf("%s\n","CRIANDO PILHA");
}
// name OF FUNCTION: insere
// CREDIT:
// PURPOSE:
// Permite ao usuario inserir um valor na pilha de valores.
//
// PARAMETERS:
// nome tipo valor/referencia descriçao
// ---------------------------------------------------------------------
// dado int valor numero
//
// RETURN VALUE:
// nome tipo descriçao
// ---------------------------------------------------------------------
// topo int indice do valor no topo da pilha
// ERROPILHACHEIA int constante com o codigo de erro para pilha cheia
//
// CALLS TO: cheia
//
// CALLED FROM: main
//
// METHOD: O seguinte é um pseudocodigo explicando como o contrutor funciona.
// 1.  Testa se a pilha esta cheia com a funçao cheia.
// 2.  Em caso de pilha cheia.
// 2.1 Escreve mensagem "Pilha Cheia.".
// 2.2 Retorna o codigo de erro para pilha cheia.
// 3.  Caso contrario.
// 3.1 Incrementa topo em 1.
// 3.2 Insere dado no arranjo pilha usando o indice de topo.
// 3.3 Retorna o valor de topo.

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

// name OF FUNCTION: remove
// CREDIT:
// PURPOSE:
// Permite ao usuario remove o valor do topo da pilha de valores.
//
// PARAMETERS:
// nome tipo valor/referencia descriçao
// ---------------------------------------------------------------------
// none
//
// RETURN VALUE:
// nome tipo descriçao
// ---------------------------------------------------------------------
// topo int indice do valor no topo da pilha
// ERROPILHAVAZIA int constante com o codigo de erro para pilha vazia
//
// CALLS TO: vazia
//
// CALLED FROM: main
//
// METHOD: O seguinte é um pseudocodigo explicando como o contrutor funciona.
// 1.  Testa se a pilha esta vazia com a funçao vazia.
// 2.  Em caso de pilha vazia.
// 2.1 Escreve mensagem "Pilha Vazia.".
// 2.2 Retorna o codigo de erro para pilha vazia.
// 3.  Caso contrario.
// 3.1 Decrementa topo em 1.
// 3.2 Retorna o valor de topo.

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

// name OF FUNCTION: inicializa
// CREDIT:
// PURPOSE:
// Inicia uma pilha.
//
// PARAMETERS:
// nome tipo valor/referencia descriçao
// ---------------------------------------------------------------------
// none
//
// RETURN VALUE:
// nome tipo descriçao
// ---------------------------------------------------------------------
// none
//
// CALLS TO: none
//
// CALLED FROM: main
//
// METHOD: O seguinte é um pseudocodigo explicando como o contrutor funciona.
// 1.  Faz topo recebe -1.

void Pilha::inicializa(){
	topo = - 1;
}

// name OF FUNCTION: topoPilha
// CREDIT:
// PURPOSE:
// retorna o valor no topo da pilha se houver valores na pilha.
//
// PARAMETERS:
// nome tipo valor/referencia descriçao
// ---------------------------------------------------------------------
// none
//
// RETURN VALUE:
// nome tipo descriçao
// ---------------------------------------------------------------------
// pilha int retorna um valor do arranjo que esta no topo da pilha
// ERROPILHAVAZIA int constante com o codigo de erro de pilha vazia
//
// CALLS TO: vazia
//
// CALLED FROM: main
//
// METHOD: O seguinte é um pseudocodigo explicando como o contrutor funciona.
// 1.  Se a pilha esta fazia
// 1.1 Escreve a mensagem "Pilha Vazia."
// 1.2 Retorna o codigo de errro de pilha cheia.
// 2.   Caso contrario
// 2.1  Retorna o valor do inteiro que esta no topo da pilha.

int Pilha::topoPilha(){
	if(vazia()){
		printf("%s\n","Pilha Vazia.");
		return ERROPILHAVAZIA;
	}
	else{
		return pilha[topo];
	}
}

// name OF FUNCTION: mostra
// CREDIT:
// PURPOSE:
// Mostra a lista de valores inteiros nas posiçoes validas da pilha.
//
// PARAMETERS:
// nome tipo valor/referencia descriçao
// ---------------------------------------------------------------------
// none
//
// RETURN VALUE:
// nome tipo descriçao
// ---------------------------------------------------------------------
// none
//
// CALLS TO: vazia
//
// CALLED FROM: main
//
// METHOD: O seguinte é um pseudocodigo explicando como o contrutor funciona.
// 1.  Se a pilha esta fazia
// 1.1 Escreve a mensagem "Pilha Vazia."
// 1.2 Retorna o codigo de errro de pilha cheia.
// 2.  Caso contrario
// 3.  Loop: Faz i igual ao valor da variavel topo e itera ate zero decrementando.
// 3.1 Escreve um valor.
// 4.  Retorna topo.

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

// name OF FUNCTION: cheia
// CREDIT:
// PURPOSE:
// Retorna verdadeiro (True) se a lista esta vazia e falso (False) caso contrario.
//
// PARAMETERS:
// nome tipo valor/referencia descriçao
// ---------------------------------------------------------------------
// 
//
// RETURN VALUE:
// nome tipo descriçao
// ---------------------------------------------------------------------
// - bool Retorna verdadeiro (True) se a lista esta vazia e falso (False) caso contrario.
//
// CALLS TO: none
//
// CALLED FROM: insere
//
// METHOD: O seguinte é um pseudocodigo explicando como o contrutor funciona.
// 1.  Retorna verdadeiro (True) se a lista esta vazia e falso (False) caso contrario


bool Pilha::cheia(){
	return topo == MAXPILHA - 1;
}

// name OF FUNCTION: vazia
// CREDIT:
// PURPOSE:
// Retorna verdadeiro (True) se a lista esta cheia e falso (False) caso contrario.
//
// PARAMETERS:
// nome tipo valor/referencia descriçao
// ---------------------------------------------------------------------
// 
//
// RETURN VALUE:
// nome tipo descriçao
// ---------------------------------------------------------------------
// - bool Retorna verdadeiro (True) se a lista esta cheia e falso (False) caso contrario.
//
// CALLS TO: none
//
// CALLED FROM: mostra, topoPilha, remove
//
// METHOD: O seguinte é um pseudocodigo explicando como o contrutor funciona.
// 1.  Retorna verdadeiro (True) se a lista esta vazia e falso (False) caso contra

bool Pilha::vazia(){
	return topo == -1;
}

// Destrutor 

Pilha::~Pilha(){}
