// FILE: listacontabil.cc
// TITLE: listacontabil
// SUBMITTED BY: Maurilio Atila Carvalho de Santana, Fristtram Helder Fernandes e Lauro Costa Borges.
// Todo o código é meu, excepto quando creditado a outros.
// FOR COURSE: INE5408
// DUE DATE: 24 de Setembro 2012
//
// PURPOSE:
// Este programa implementa uma listacontabil, funciona exatamente como
// uma listacontabil do mundo real, onde podemos inserir elementos apenas
// no final e retirar os elementos apenas do inicio. Ou seja
// esta sobre o modelo LIFO - Last in First out.
//
// OVERALL METHOD:
// A listacontabil geral de tarefas é:
// 
// 1. Entre com elementos, ate o maximo de 100 valores.
// 2. Liste os elementos.
// 3. Veja o ultimo elemento.
// 4. Remova elementos da listacontabil.
//
// FUNCTIONS:
//
// inclui
// emfilera um conteudo e retorna o ultimo, em caso de listacontabil cheia retorna  
// o codigo de erro e uma mensagem de listacontabil cheia.
//
// 
// cheia
// quando a listacontabil está cheia, retorna o Maximo da listacontabil menos um 
// em outras palavras o ultimo é igual a maximo da listacontabil menos um.
//
// retira
// desemfilerar do primeiro elemento e retorna o ultimo da listacontabil, em caso de listacontabil
// vazia, retorna o codigo de erro e mensagem de listacontabil vazia.
//
// ultimo
// retorna a posição do ultimo elemento. 
//
//
// vazia
// retorna verdadeiro (True) para listacontabil vazia e falso (False)
// para listacontabil com algum elemento.
//
//
// inicializa
// faz ultimos igual a -1, listacontabil vazia.
//
//
// mostra
// listacontabil os elementos da listacontabil, em caso de vazia retorna 
// codigo de erro e mensagem "ListaContabil Vazia"
//
//
// INCLUDED FILES:
// string.h
// stdio.h
// listacontabil.h
//
// DATA FILES:
// none

#include "listacontabil.h"
#include <stdio.h>

// Contructor
// CREDIT:
// PURPOSE:
// O construtor inicia a listacontabil.
//
// CALLS TO: inicializa
//
// METHOD: O seguinte é um pseudocodigo explicando como o contrutor funciona.
// 1. Initializa a variavel ultimo com -1 chamando a função inicializa.
// 2. Escreve uma mensagem "CRIANDO LISTA"

ListaContabil::ListaContabil(){
	_ultimo = -1;
	printf("%s\n","CRIANDO LISTA");
}
// name OF FUNCTION: adiciona
// CREDIT:
// PURPOSE:
// Permite ao usuario inserir um valor na listacontabil de valores.
//
// PARAMETERS:
// nome tipo valor/referencia descrição
// ---------------------------------------------------------------------
// dado int valor numero
//
// RETURN VALUE:
// nome tipo descrição
// ---------------------------------------------------------------------
// topo int indice do valor no topo da listacontabil
// ERROfilaCHEIA int constante com o codigo de erro para listacontabil cheia
//
// CALLS TO: cheia
//
// CALLED FROM: main
//
// METHOD: O seguinte é um pseudocodigo explicando como o contrutor funciona.
// 1.  Testa se a listacontabil esta cheia com a função cheia.
// 2.  Em caso de listacontabil cheia.
// 2.1 Escreve mensagem "listacontabil Cheia.".
// 2.2 Retorna o codigo de erro para listacontabil cheia.
// 3.  Caso contrario.
// 3.1 Incrementa topo em 1.
// 3.2 Insere dado no arranjo listacontabil usando o indice de topo.
// 3.3 Retorna o valor de topo.

int ListaContabil::adiciona(Lancamento lancamento){
	if(cheia())
		return ERROLISTACHEIA;
	_ultimo++;
	_lista[_ultimo] = lancamento;
	return _ultimo; 
}

// name OF FUNCTION: cheia
// CREDIT:
// PURPOSE:
// Retorna verdadeiro (True) se a listacontabil esta vazia e falso (False) caso contrario.
//
// PARAMETERS:
// nome tipo valor/referencia descrição
// ---------------------------------------------------------------------
// 
//
// RETURN VALUE:
// nome tipo descrição
// ---------------------------------------------------------------------
// - bool Retorna verdadeiro (True) se a listacontabil esta vazia e falso (False) caso contrario.
//
// CALLS TO: none
//
// CALLED FROM: insere
//
// METHOD: O seguinte é um pseudocodigo explicando como o contrutor funciona.
// 1.  Retorna verdadeiro (True) se a listacontabil esta vazia e falso (False) caso contrario
bool ListaContabil::cheia(){
	return _ultimo == MAXLISTA - 1;
}
// name OF FUNCTION: retira
// CREDIT:
// PURPOSE:
// Permite ao usuario remove o valor do topo da listacontabil de valores.
//
// PARAMETERS:
// nome tipo valor/referencia descrição
// ---------------------------------------------------------------------
// none
//
// RETURN VALUE:
// nome tipo descrição
// ---------------------------------------------------------------------
// topo int indice do valor no topo da listacontabil
// ERROfilaVAZIA int constante com o codigo de erro para listacontabil vazia
//
// CALLS TO: vazia
//
// CALLED FROM: main
//
// METHOD: O seguinte é um pseudocodigo explicando como o contrutor funciona.
// 1.  Testa se a listacontabil esta vazia com a função vazia.
// 2.  Em caso de listacontabil vazia.
// 2.1 Escreve mensagem "listacontabil Vazia.".
// 2.2 Retorna o codigo de erro para listacontabil vazia.
// 3.  Caso contrario.
// 3.1 Decrementa topo em 1.
// 3.2 Retorna o valor de topo.

int ListaContabil::retira(){
	if(vazia()){
		return ERROLISTAVAZIA;
	}
	else{
		_ultimo--;
		return _lista[_ultimo+1].valor;
	}
}

// name OF FUNCTION: ultimo
// CREDIT:
// PURPOSE:
// retorna o valor do ultimo elemento da listacontabil.
//
// PARAMETERS:
// nome tipo valor/referencia descrição
// ---------------------------------------------------------------------
// none
//
// RETURN VALUE:
// nome tipo descrição
// ---------------------------------------------------------------------
// listacontabil int retorna um valor do arranjo que esta no topo da listacontabil
// ERROfilaVAZIA int constante com o codigo de erro de listacontabil vazia
//
// CALLS TO: vazia
//
// CALLED FROM: main
//

int ListaContabil::ultimo(){
	return _ultimo+1;
}
// name OF FUNCTION: vazia
// CREDIT:
// PURPOSE:
// Retorna verdadeiro (True) se a listacontabil esta cheia e falso (False) caso contrario.
//
// PARAMETERS:
// nome tipo valor/referencia descrição
// ---------------------------------------------------------------------
// 
//
// RETURN VALUE:
// nome tipo descrição
// ---------------------------------------------------------------------
// - bool Retorna verdadeiro (True) se a listacontabil esta cheia e falso (False) caso contrario.
//
// CALLS TO: none
//
// CALLED FROM: mostra, remove
//
// METHOD: O seguinte é um pseudocodigo explicando como o contrutor funciona.
// 1.  Retorna verdadeiro (True) se a listacontabil esta vazia e falso (False) caso contra
bool ListaContabil::vazia(){
	return _ultimo == -1;
}
// name OF FUNCTION: inicializa
// CREDIT:
// PURPOSE:
// Inicia uma listacontabil.
//
// PARAMETERS:
// nome tipo valor/referencia descrição
// ---------------------------------------------------------------------
// none
//
// RETURN VALUE:
// nome tipo descrição
// ---------------------------------------------------------------------
// none
//
// CALLS TO: none
//
// CALLED FROM: main
//
// METHOD: O seguinte é um pseudocodigo explicando como o contrutor funciona.
// 1.  Faz topo recebe -1.
void ListaContabil::inicializa(){
	_ultimo = -1;
}
// name OF FUNCTION: mostra
// CREDIT:
// PURPOSE:
// Mostra a listacontabil de valores inteiros nas posiçoes validas da listacontabil.
//
// PARAMETERS:
// nome tipo valor/referencia descrição
// ---------------------------------------------------------------------
// none
//
// RETURN VALUE:
// nome tipo descrição
// ---------------------------------------------------------------------
// none
//
// CALLS TO: vazia
//
// CALLED FROM: main
//
// METHOD: O seguinte é um pseudocodigo explicando como o contrutor funciona.
// 1.  Se a listacontabil esta fazia
// 1.1 Escreve a mensagem "ListaContabil Vazia."
// 1.2 Retorna o codigo de errro de listacontabil cheia.
// 2.  Caso contrario
// 3.  Loop: Faz i igual ao valor da variavel topo e itera ate zero decrementando.
// 3.1 Escreve um valor.
// 4.  Retorna topo.
void ListaContabil::mostra(){
	
//	Lancamento lc;
	if(vazia()){
		printf("%s\n","Lista Vazia.");
	}
	else{
		for(int i = 0 ;i<=_ultimo; i++){
			printf("%s\n",_lista[i].nome);
			printf("%d\n",_lista[i].valor);
		} 
	}
}
// Destrutor
ListaContabil::~ListaContabil(){}
