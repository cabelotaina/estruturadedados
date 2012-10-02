#include "lista.h"

Lista::Lista(){
	_ultimo = -1;
}

int Lista::adiciona(int dado){
	if(cheia())
		return ERROLISTACHEIA;
	_ultimo++;
	_lista[_ultimo] = dado;
	return _ultimo; 
}
int Lista::retira(){
	if(vazia()){
		return ERROLISTAVAZIA;
	}
	else{
		_ultimo--;
		return _lista[_ultimo+1];
	}
}
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
		posicao =0;
		while(posicao <= _ultimo && maior(dado,_lista[posicao])){
			posicao = posicao +1;
			}
		return adicionaNaPosicao(dado,posicao);

	}
}
int Lista::removerDaPosicao(int fonte){
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
	posica = 0;
	while(posica <=_ultimo && not(igual(dado, _lista(posicao))))
		posicao +=1;
	if(posicao>posicaoNaLista(_ultimo))
		return ERROPOSICAO;
	return ERROPOSICAO;
}
void Lista::inicializa(){
	_ultimo =-1;
}

void Lista::destroi(){
	_ultimo == -1;
}
bool Lista::vazia(){
	return _ultimo==-1;
}
bool Lista::cheia(){
	return _ultimo == MAX+1;
}
