#include <string.h>
#include "listacontabil.h"

ListaContabil::ListaContabil{
	_ultimo=-1;
}

int ListaContabil::adiciona(Lancamento dado){
	if(cheia())
		return LISTA_CHEIA;
	_ultimo++;
	_lista[_ultimo] = dado;
	return _ultimo;
};

bool ListaContabil::cheia(){
	return _ultimo == MAXLISTA - 1;
}

int ListaContabil::adicionaNaPosicao(Lancamento dado, int posicao){
	if(cheia())
		return LISTA_CHEIA;
	if(posicao < 0 || posicao > _ultimo + 1)
		return ERRO_POSICAO;
	for (int i = _ultimo ; i > posicao ; i--){
		_lista[i] = _lista[i-1];
	}
	_lista[posicao];
	return posicao;
}
bool ListaContabil::maior(Lancamento dado1, Lancamento dado2){
	return strcmp(dado1.nome, dado2.nome) > 0;
}

ListaContabil::~ListaContabil{

}

}

