#include "tlista.h"
#include <stdio.h>
#include <string.h>

//@autor: Maurilio, Fristtram, Lauro

// Construtor inicializa o ultimo elemento da lista com o valor -1

tLista::tLista(){
	_ultimo = -1;
}
tLista::~tLista(){
}

// Metodo: Inicializa
// Funçao: inicialiazar a lista
// torna o valor de _ultimo igual a -1 inicializando a lista

void tLista::inicializa(){
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

int tLista::adiciona(char *palavra){
	if(cheia())
		return ERROLISTACHEIA;
	_ultimo++;
	_lista[_ultimo] = palavra;
	return _ultimo; 
}
// Funçao: retira
// Se a lista esta vazia;
// 	retorna erro de fila vazia;
// Caso contrario
//	atualiza o indice _ultimo
//	retorna o elemento retirado

int tLista::retira(char *palavra_fora){
	if(vazia()){
		return ERROLISTAVAZIA;
	}
	else{
		delete _lista[_ultimo];
		_ultimo--;
		strcpy(palavra_fora, _lista[_ultimo+1]);
		return 0;
	}
}

// Funçao: adicionaNaPosicao 

////////////////////////////////////// CONTINUAR DOCUMENTAÇAO DAQUI

// Se a lista esta vazia;
// 	retorna erro de fila vazia;
// Caso contrario
//	atualiza o indice _ultimo
//	retorna o elemento retirado

int tLista::adicionaEmOrdem(char *palavra){
	int posicao;
	if(cheia())
		return ERROLISTACHEIA;
	else{
		posicao = 0;
		while(posicao <= _ultimo && maior(palavra,_lista[posicao])){
			posicao = posicao +1;
			}
		return adicionaNaPosicao(palavra,posicao);
	}
}


int tLista::adicionaNaPosicao(char *palavra, int destino){
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
		_lista[destino] = palavra;
		return destino;
	
	}

}


int tLista::retiraDaPosicao(int fonte, char *palavra_fora){
	int posicao;
	char palavra[10000];

	if(fonte > _ultimo || fonte < 0)
		return ERROPOSICAO;
	else{
		if(vazia()){
			return ERROLISTAVAZIA;
		}
		else{
			_ultimo -= _ultimo;
			strcpy(palavra, _lista[fonte]);
			posicao = fonte;
			while(posicao <= _ultimo){
				_lista[posicao] = _lista[posicao+1];
			}
			strcpy(palavra_fora, palavra);
			return 0;
		}
	}
}

int tLista::retiraMembro(char *palavra, char *palavra_fora){
	int posicao;
	if(vazia()){
		return ERROLISTAVAZIA;
	}
	else{
		posicao = posicaoNaLista(palavra);
		if(posicao<0)
			return ERROPOSICAO;
		else
			return retiraDaPosicao(posicao, palavra_fora);
		
	}
}

int tLista::posicaoNaLista(char *palavra){
	int posicao;
	posicao = 0;
	while(posicao <=_ultimo && not(igual(palavra, _lista[posicao])))
		posicao +=1;
	if(posicao>_ultimo)
		return ERROPOSICAO;
	return ERROPOSICAO;
}

bool tLista::vazia(){
	return _ultimo==-1;
}

bool tLista::cheia(){
	return _ultimo == MAX+1;
}

bool tLista::maior(char *palavraum, char *palavradois){
	int um, dois;
	um = strlen(palavraum);
	dois = strlen(palavradois);
	return um > dois;
}
bool tLista::igual(char *palavraum, char *palavradois){
	int um, dois;
	um = strlen(palavraum);
	dois = strlen(palavradois);
	return um == dois;
}
bool menor(char *palavraum, char *palavradois){
	int um, dois;
	um = strlen(palavraum);
	dois = strlen(palavradois);
	return um < dois;
}

void tLista::destroi(){
	_ultimo == -1;
}

int  tLista::listar(){
	if (vazia()){ return ERROLISTAVAZIA;}
	else{

		for(int i = 0 ;i<=_ultimo; i++){
			printf("%s\n",_lista[i]);
		}
	return _ultimo;
	}
}
