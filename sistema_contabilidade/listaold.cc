#include "lista.h"

Lista::Lista(){
	ultimo = -1;
}

int Lista::adiciona(int dado){
	if(cheia()){
		return ERROLISTACHEIA;
	_ultimo++;
	_lista[_ultimo] = dado;
	return _ultimo; 
}
int Lista::retira(){
	if(vazia())
		return ERROLISTAVAZIA;
	else{
		ultimo--;
		return _lista[_ultimo+1];
	}
}
int Lista::aidicionaNaPosicao( int dado, int destino){

		int posicao;
	if(cheia())
		return ERROLISTACHEIA;
	else{
		if(destino>_ultimo+1 || destino < 0)
			return ERROPOSICAO;
		_ultimo = _ultimo + 1;
		posicao = _ultimo;

		while(posicao>destino){
			_lista[posicao]=lista[posicao+1];
			posicao = posicao -1;
		}
		_lista[destino]=dado;
		return destino;
	
	}

}

int Lista::retirarDaPosicao(int fonte){
	int posicao, valor;

	if(fonte > _lista._ultimo || fonte <0)
		return ERROPOSICAO;
	else{
		if(vazia())
		return ERROLISTAVAZIA;
		
		else{
			_ultimo = _utlimo - 1;
			valor = _lista[fonte];
			posicao = fonte;
			while(posicao <= _utlimo){
				_lista[posicao] = _lista[posicao + 1];
			posicao = posicao + 1;
			}
			return valor;
		}
	}
}

int Lista::retiraDoInicio(int dado, int posicao, valor){
	if(cheia()){
		return ERROLISTACHEIA;
	
	_ultimo = _ultimo -1;
	valor = dados[0];
	posicao = 0;
	while(posicao = _ultimo){
		_lista[posicao]=lista[posicao-1];
		posicao = posicao + 1;
		}	
	return valor; 
}
        inserirEmOrdem(int valor);
        remover();
        removerDaPosicao(int p);
        removerMembro(int valor);
        int remover();
int Lista::inserirOrdem(){
	

}
void Lista::inicializa(){
	ultimo =-1;
}

void Lista::destroi{
	ultimo == -1;
}
bool Lista::listaVazia(){
	if(ultimo==-1)
		return true;
	return false;
}
bool Lista::cheia(){
	if(ultimo == MAX+1){
		return true;
	}
	return false;
}


