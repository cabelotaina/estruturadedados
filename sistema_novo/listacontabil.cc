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
// enfilera um conteudo e retorna o ultimo, em caso de listacontabil cheia retorna  
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
// 1.  Testa se a _lista esta cheia com a função cheia.
// 2.  Em caso de _lista cheia.
// 2.1 Escreve mensagem "Lista Cheia.".
// 2.2 Retorna o codigo de erro para _lista cheia.
// 3.  Caso contrario.
// 3.1 Incrementa _ultimo em 1.
// 3.2 Insere dado no arranjo _lista usando o indice de _ultimo.
// 3.3 Retorna o valor de _ultimo.

int ListaContabil::adiciona(Lancamento lancamento){
	if(cheia()){
		printf("%s\n", "Lista Cheia");
		return ERROLISTACHEIA;
	}
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
// 1.  Retorna verdadeiro (True) se a listacontabil esta cheia e falso (False) caso contrario

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
// 1.  Testa se a _lista esta vazia com a função vazia.
// 2.  Em caso de _lista vazia.
// 2.1 Escreve mensagem "Lista Vazia.".
// 2.2 Retorna o codigo de erro para _lista vazia.
// 3.  Caso contrario.
// 3.1 Decrementa topo em 1.
// 3.2 Retorna o valor de topo.

int ListaContabil::retira(){
	if(vazia()){
		printf("%s\n", "Lista Vazia");
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
// Retorna verdadeiro (True) se a _lista esta vazia e falso (False) caso contrario.
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
// CALLED FROM: mostra, remove, contem, posicao
//
// METHOD: O seguinte é um pseudocodigo explicando como o contrutor funciona.
// 1.  Retorna verdadeiro (True) se a listacontabil esta vazia e falso (False) caso contra
bool ListaContabil::vazia(){
	return _ultimo == -1;
}
 
// name OF FUNCTION: contem
// CREDIT:
// PURPOSE:
// Retorna verdadeiro (True) se o inteiro existe na lista, e falso (False) se nao existe na lista
//
// PARAMETERS:
// lancamento inteiro valor o inteiro a ser buscado
// ---------------------------------------------------------------------
// 
//
// RETURN VALUE:
// bool True se existe e False se nao existe
// ---------------------------------------------------------------------
// - bool Retorna verdadeiro (True) se o elemento existe na lista e falso (False) caso contrario.
//
// CALLS TO: vazia
//
// CALLED FROM: 
//
// METHOD:
// Busca na lista o inteiro recebido como argumento

bool ListaContabil::contem(Lancamento l) {
	int i;

	if(vazia()) {
		printf("%s\n", "Lista Vazia");
		return false;
	} else {
		for(i=0;i<=_ultimo;i++) {
			if(_lista[i].valor == l.valor && _lista[i].nome == l.nome) {
				return true;
			}
		}
		return false;
	}
}

// name OF FUNCTION: posicao
// CREDIT:
// PURPOSE:
// Retorna a posicao no vetor onde esta o nome/inteiro buscados
//
// PARAMETERS:
// dado Lancamento objeto que contem o inteiro e o nome buscados
// ---------------------------------------------------------------------
// 
//
// RETURN VALUE:
// retorna um inteiro, que indica a posicao no vetor onde esta o numero/nome buscados
// ---------------------------------------------------------------------
// - 
//
// CALLS TO: vazia
//
// CALLED FROM: 
//
// METHOD:
// Busca na lista o inteiro/nome recebidos como argumento, e retorna sua posicao
int ListaContabil::posicaoNaLista(Lancamento l) {
	int i;

	if(vazia()) {
		printf("%s\n", "Lista Vazia");
		return ERROLISTAVAZIA;
	} else {
		for(i=0;i<=_ultimo;i++) {
			if(igual(l,_lista[i])) {
				return i;
			}
		}
		return ERROPOSICAO;
	}
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
// name OF FUNCTION: maior
// CREDIT:
// PURPOSE:
// Testa se um se um lançamento tem o valor maior que o outro.
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
// 1.  Testa se o valor de dado1 é maior que o valor de dado2
// 2. return verdadeiro (TRUE) ou falso (FALSE) caso contrario

bool ListaContabil::maior(Lancamento dado1, Lancamento dado2){
        return dado1.valor > dado2.valor;
}

// name OF FUNCTION: igual
// CREDIT:
// PURPOSE:
// Testa se um se um lançamento tem o valor igual ao outro.
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
// 1. Testa se o valor de dado1 é igual ao valor de dado2 AND testa se o arranjo de caracteres é igual ao outro
// 2. return verdadeiro (TRUE) ou falso (FALSE) caso contrario.

bool ListaContabil::igual(Lancamento dado1, Lancamento dado2){
        return dado1.valor == dado2.valor && dado1.nome == dado2.nome;
}

// name OF FUNCTION: menor
// CREDIT:
// PURPOSE:
// Testa se um se um lançamento tem o valor menor que o outro.
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
// 1. Testa se o valor de dado1 é menor que o valor de dado2
// 2. return verdadeiro (TRUE) ou falso (FALSE) caso contrario

bool ListaContabil::menor(Lancamento dado1, Lancamento dado2){
        return dado1.valor < dado2.valor;
}

// name OF FUNCTION: adicionaNoInicio
// CREDIT:
// PURPOSE:
// Adiciona lançamento no inicio da lista;
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
// CALLS TO: cheia
//
// CALLED FROM: main
//
// METHOD: O seguinte é um pseudocodigo explicando como o contrutor funciona.
// 1.  Se a _lista esta cheia
// 1.1 Escreve a mensagem "Lista Cheia."
// 1.2 Retorna o codigo de erro de lista cheia.
// 2.  Caso contrario
// 2.1 Incrementa _ultimo
// 3.4 Faz posição igual a _ultimo
// 3.4 LOOP: enquanto a posição não é maior que 0
// 3.4.1 _lista na posição atual recebe o valor de _lista na posição anterior
// 3.4.2 posição é decrementado
// 3.5 _lista recebe o lançamento no indice 0, ou seja no inicio da lista
// 3.6 o valor de _ultimo é retornado

int ListaContabil::adicionaNoInicio(Lancamento dado){

		if(cheia()){
			printf("%s\n", "Lista Cheia.");
			return ERROLISTACHEIA;		
		}
		else{
			int posicao;
			_ultimo++;
			posicao = _ultimo;
			while(posicao > 0){
				_lista[posicao] = _lista[posicao - 1];
				posicao -= 1;
			}
		_lista[0] = dado;
		return _ultimo;
		}
}

// name OF FUNCTION: adicionaNaposicao
// CREDIT:
// PURPOSE:
// Adiciona lançamento na posição da lista definida pelo usuario;
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
// CALLS TO: cheia
//
// CALLED FROM: main
//
// METHOD: O seguinte é um pseudocodigo explicando como o contrutor funciona.
// 1.  Se a _lista esta cheia
// 1.1 Escreve a mensagem "Lista Cheia."
// 1.2 Retorna o codigo de erro de lista cheia.
// 2.  Caso contrario
// 3.  Se destino é maior que o indice ou destino < 0 ele esta fora do arranjo
// 3.1 Escreve mensagem de erro de possição e retorna erro de posição.
// 3.2 Caso contrario
// 3.3 Incrementa _ultimo
// 3.4 Faz posição igual a _ultimo
// 3.4 LOOP: enquanto a posição não é maior que destino
// 3.4.1 _lista na posição atual recebe o valor de _lista na posição anterior
// 3.4.2 posição é decrementado
// 3.5 _lista recebe o lançamento no destino passado pelo usuario.
// 3.6 o valor de destino é retornado.

int ListaContabil::adicionaNaPosicao(Lancamento l, int destino){
	int posicao;
	if(cheia()){
		printf("%s\n", "Lista cheia.");
		return ERROLISTACHEIA;
	}
	else{
		if(destino > _ultimo + 1 || destino < 0)
			return ERROPOSICAO;
		_ultimo += 1;
		posicao = _ultimo;

		while(posicao > destino){
			_lista[posicao] = _lista[posicao + 1];
			posicao -= 1;
		}
		_lista[destino] = l;
		return destino;
	}

}

// name OF FUNCTION: adicionaEmOrdem
// CREDIT:
// PURPOSE:
// Adiciona lançamento em ordem de valores na lista;
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
// CALLS TO: cheia, maior
//
// CALLED FROM: main
//
// METHOD: O seguinte é um pseudocodigo explicando como o contrutor funciona.
// 1.  Se a _lista esta cheia
// 1.1 Escreve a mensagem "Lista Cheia."
// 1.2 Retorna o codigo de erro de lista cheia.
// 2.  Caso contrario
// 2.1 Cria variavel inteira posição
// 3.4 Faz posição igual a 0
// 3.4 LOOP: enquanto a posição é menor ou igual a _ultimo AND o lançamento é maior que o valor que esta na posição x da lista faça
// 3.4.1 _lista na posição atual recebe o valor de _lista na posição anterior
// 3.4.2 posição é incrementado (esta percorrendo o arranjo em busca da sua posição)
// 3.5  
// 3.6 É retornado o destino;

int ListaContabil::adicionaEmOrdem(Lancamento l){

	if(cheia())  {
		printf("%s\n","Lista Cheia.");
		return ERROLISTACHEIA;}
	else{
		int posicao;
		posicao = 0;
		while(posicao <= _ultimo && maior(l,_lista[posicao])){
			posicao += 1;
		}
		return adicionaNaPosicao(l,posicao);

	}
}
int ListaContabil::retiraDaPosicao(int fonte){
	int posicao, valor;
	if(vazia()){
		printf("%s\n", "Lista Vazia.");
		return ERROLISTAVAZIA;
	}
	else{
		if(fonte > _ultimo || fonte < 0)
		return ERROPOSICAO;
		else{
			_ultimo -= _ultimo;
			valor = _lista[fonte].valor;
			posicao = fonte;
			while(posicao <= _ultimo){
				_lista[posicao] = _lista[posicao+1];
			}
			return valor;
		}
	}
}
int ListaContabil::retiraMembro(Lancamento l){
	int posicao;
	if(vazia()){
		return ERROLISTAVAZIA;
	}
	else{
		posicao = posicaoNaLista(l);
		if(posicao < 0)
			return ERROPOSICAO;
		else
			return retiraDaPosicao(posicao);	
		
	}
}
// Destrutor
ListaContabil::~ListaContabil(){}
