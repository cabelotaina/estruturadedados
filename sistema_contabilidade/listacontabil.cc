#include "listacontabil.h"
#include "lancamento.h"
#include <stdio.h>
//@autor: Maurilio, Fristtram, Lauro

// Construtor inicializa o ultimo elemento da lista com o valor -1

ListaContabil::ListaContabil(){
	_ultimo = -1;
}
ListaContabil::~ListaContabil(){
}

// Metodo: Inicializa
// Funçao: inicialiazar a lista
// torna o valor de _ultimo igual a -1 inicializando a lista

void ListaContabil::inicializa(){
	_ultimo =-1;
}

// Metodo: adiciona
// Funçao: Adiciona um elemento na lista
// Se a lista esta cheia;
// 	retorna erro de fila cheia;
// Caso contrario
//	atualiza o indice _ultimo
//	insere o lancamento na lista por meio do indice _ultimo
//	retorna _ultimo

int ListaContabil::adiciona(Lancamento lancamento){
	if(cheia())
		return ERROLISTACHEIA;
	_ultimo++;
	_lista[_ultimo] = lancamento;
	return _ultimo; 
}

// Funçao: retira
// Se a lista esta vazia;
// 	retorna erro de fila vazia;
// Caso contrario
//	atualiza o indice _ultimo
//	retorna o elemento retirado

int ListaContabil::retira(){
	if(vazia()){
		return ERROLISTAVAZIA;
	}
	else{
		_ultimo--;
		return _lista[_ultimo+1];
	}
}

// Funçao: adicionaNaPosicao 

////////////////////////////////////// CONTINUAR DOCUMENTAÇAO DAQUI

// Se a lista esta vazia;
// 	retorna erro de fila vazia;
// Caso contrario
//	atualiza o indice _ultimo
//	retorna o elemento retirado

int ListaContabil::adicionaNaPosicao( int lancamento, int destino){

	int posicao;
	if(cheia()){
		return ERROLISTACHEIA;
	}
	else{
		if(destino>_ultimo+1 || destino < 0)
			return ERROPOSICAO;
		_ultimo = _ultimo + 1;
		posicao = _ultimo;

		while(posicao>destino){
			_lista[posicao]=_lista[posicao+1];
			posicao = posicao -1;
		}
		_lista[destino]=lancamento;
		return destino;
	
	}

}

int ListaContabil::adicionaEmOrdem(int lancamento){
	int posicao;
	if(cheia())
		return ERROLISTACHEIA;
	else{
		posicao = 0;
		while(posicao <= _ultimo && maior(lancamento,_lista[posicao])){
			posicao = posicao +1;
			}
		return adicionaNaPosicao(lancamento,posicao);

	}
}

int ListaContabil::retiraDaPosicao(int fonte){
	int posicao, valor;
	if(fonte > _ultimo || fonte < 0)
		return ERROPOSICAO;
	else{
		if(vazia()){
			return ERROLISTAVAZIA;
		}
		else{
			_ultimo -= _ultimo;
			valor = _lista[fonte];
			posicao = fonte;
			while(posicao <= _ultimo){
				_lista[posicao] = _lista[posicao+1];
			}
			return valor;
		}
	}
}

int ListaContabil::retiraMembro(int lancamento){
	int posicao;
	if(vazia()){
		return ERROLISTAVAZIA;
	}
	else{
		posicao = posicaoNaLista(lancamento);
		if(posicao<0)
			return ERROPOSICAO;
		else
			return retiraDaPosicao(posicao);	
		
	}
}

int ListaContabil::posicaoNaLista(int lancamento){
	int posicao;
	posicao = 0;
	while(posicao <=_ultimo && not(igual(lancamento, _lista[posicao])))
		posicao +=1;
	if(posicao>posicaoNaLista(_ultimo))
		return ERROPOSICAO;
	return ERROPOSICAO;
}

bool ListaContabil::vazia(){
	return _ultimo==-1;
}

bool ListaContabil::cheia(){
	return _ultimo == MAX+1;
}

bool ListaContabil::maior(int um, int dois){
	return um > dois;
}
bool ListaContabil::igual(int um, int dois){
	return um == dois;
}
bool menor(int um, int dois){
	return um < dois;
}

void ListaContabil::destroi(){
	_ultimo == -1;
}

int  ListaContabil::listar(){
	if (vazia()){ return ERROLISTAVAZIA;}
	else{

		for(int i = 0 ;i<=_ultimo; i++){
			printf("%d\n",_lista[i]);
		}
	return _ultimo;
	}
}