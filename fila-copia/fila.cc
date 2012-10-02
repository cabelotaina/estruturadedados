// FILE: fila.cc
// TITLE: fila
// SUBMITTED BY: Maurilio Atila Carvalho de Santana, Fristtram Helder Fernandes e Lauro Costa Borges.
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
// name OF FUNCTION: inclui
// CREDIT:
// PURPOSE:
// Permite ao usuario inserir um valor na fila de valores.
//
// PARAMETERS:
// nome tipo valor/referencia descriçao
// ---------------------------------------------------------------------
// dado int valor numero
//
// RETURN VALUE:
// nome tipo descriçao
// ---------------------------------------------------------------------
// topo int indice do valor no topo da fila
// ERROfilaCHEIA int constante com o codigo de erro para fila cheia
//
// CALLS TO: cheia
//
// CALLED FROM: main
//
// METHOD: O seguinte é um pseudocodigo explicando como o contrutor funciona.
// 1.  Testa se a fila esta cheia com a funçao cheia.
// 2.  Em caso de fila cheia.
// 2.1 Escreve mensagem "fila Cheia.".
// 2.2 Retorna o codigo de erro para fila cheia.
// 3.  Caso contrario.
// 3.1 Incrementa topo em 1.
// 3.2 Insere dado no arranjo fila usando o indice de topo.
// 3.3 Retorna o valor de topo.

int Fila::inclui(ElementoFila dado){
	if(cheia()){
		printf("%s\n","Fila Cheia.");
		return ERROFILACHEIA;
	}
	_ultimo++;
	_fila[_ultimo] = dado;
	return _ultimo;
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
bool Fila::cheia(){
	return _ultimo == MAXFILA - 1;
}
// name OF FUNCTION: retira
// CREDIT:
// PURPOSE:
// Permite ao usuario remove o valor do topo da fila de valores.
//
// PARAMETERS:
// nome tipo valor/referencia descriçao
// ---------------------------------------------------------------------
// none
//
// RETURN VALUE:
// nome tipo descriçao
// ---------------------------------------------------------------------
// topo int indice do valor no topo da fila
// ERROfilaVAZIA int constante com o codigo de erro para fila vazia
//
// CALLS TO: vazia
//
// CALLED FROM: main
//
// METHOD: O seguinte é um pseudocodigo explicando como o contrutor funciona.
// 1.  Testa se a fila esta vazia com a funçao vazia.
// 2.  Em caso de fila vazia.
// 2.1 Escreve mensagem "fila Vazia.".
// 2.2 Retorna o codigo de erro para fila vazia.
// 3.  Caso contrario.
// 3.1 Decrementa topo em 1.
// 3.2 Retorna o valor de topo.

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

// name OF FUNCTION: ultimo
// CREDIT:
// PURPOSE:
// retorna o valor do ultimo elemento da fila.
//
// PARAMETERS:
// nome tipo valor/referencia descriçao
// ---------------------------------------------------------------------
// none
//
// RETURN VALUE:
// nome tipo descriçao
// ---------------------------------------------------------------------
// fila int retorna um valor do arranjo que esta no topo da fila
// ERROfilaVAZIA int constante com o codigo de erro de fila vazia
//
// CALLS TO: vazia
//
// CALLED FROM: main
//

int Fila::ultimo(){
	return _ultimo+1;
}
// name OF FUNCTION: vazia
// CREDIT:
// PURPOSE:
// Retorna verdadeiro (True) se a fila esta cheia e falso (False) caso contrario.
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
// CALLED FROM: mostra, remove
//
// METHOD: O seguinte é um pseudocodigo explicando como o contrutor funciona.
// 1.  Retorna verdadeiro (True) se a lista esta vazia e falso (False) caso contra
bool Fila::vazia(){
	return _ultimo == -1;
}
// name OF FUNCTION: inicializa
// CREDIT:
// PURPOSE:
// Inicia uma fila.
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
void Fila::inicializa(){
	_ultimo = -1;
}
// name OF FUNCTION: mostra
// CREDIT:
// PURPOSE:
// Mostra a lista de valores inteiros nas posiçoes validas da fila.
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
// 1.  Se a fila esta fazia
// 1.1 Escreve a mensagem "Fila Vazia."
// 1.2 Retorna o codigo de errro de fila cheia.
// 2.  Caso contrario
// 3.  Loop: Faz i igual ao valor da variavel topo e itera ate zero decrementando.
// 3.1 Escreve um valor.
// 4.  Retorna topo.
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
// Destrutor
Fila::~Fila(){}
