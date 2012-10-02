#include "lista.h"

//@autor: Maurilio, Fristtram, Lauro

// Construtor inicializa o ultimo elemento da lista com o valor -1

Lista::Lista(){
	_ultimo = -1;
}

// Metodo: Inicializa
// Funçao: inicialiazar a lista
// torna o valor de _ultimo igual a -1 inicializando a lista

void Lista::inicializa(){
	_ultimo =-1;
}

// Metodo: adiciona
// Funçao: Adiciona um elemento na lista
// Se a lista esta cheia;
// 	retorna erro de fila cheia;
// Caso contrario
//	atualiza o indice _ultimo
//	insere o dado na lista por meio do indice _ultimo
//	retorna _ultimo

int Lista::adiciona(int dado){
	if(cheia())
		return ERROLISTACHEIA;
	_ultimo++;
	_lista[_ultimo] = dado;
	return _ultimo; 
}

// Funçao: retira
// Se a lista esta vazia;
// 	retorna erro de fila vazia;
// Caso contrario
//	atualiza o indice _ultimo
//	retorna o elemento retirado

int Lista::retira(){
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

int Lista::adicionaNaPosicao( int dado, int destino){

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
		_lista[destino]=dado;
		return destino;
	
	}

}

int Lista::inserirEmOrdem(int dado){
	int posicao;
	if(cheia())
		return ERROLISTACHEIA;
	else{
		posicao = 0;
		while(posicao <= _ultimo && maior(dado,_lista[posicao])){
			posicao = posicao +1;
			}
		return adicionaNaPosicao(dado,posicao);

	}
}

int Lista::retiraDaPosicao(int fonte){
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

int Lista::removerMembro(int dado){
	int posicao;
	if(vazia()){
		return ERROLISTAVAZIA;
	}
	else{
		posicao = posicaoNaLista(dado);
		if(posicao<0)
			return ERROPOSICAO;
		else
			return retiraDaPosicao(posicao);	
		
	}
}

int Lista::posicaoNaLista(int dado){
	int posicao;
	posicao = 0;
	while(posicao <=_ultimo && not(igual(dado, _lista[posicao])))
		posicao +=1;
	if(posicao>posicaoNaLista(_ultimo))
		return ERROPOSICAO;
	return ERROPOSICAO;
}

bool Lista::vazia(){
	return _ultimo==-1;
}

bool Lista::cheia(){
	return _ultimo == MAX+1;
}

bool Lista::maior(int um, int dois){
	return um > dois;
}
bool Lista::igual(int um, int dois){
	return um == dois;
}
bool menor(int um, int dois){
	return um < dois;
}

void Lista::destroi(){
	_ultimo == -1;
}

