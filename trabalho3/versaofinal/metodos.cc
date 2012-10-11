// Funçao: adicionaNaPosicao 

////////////////////////////////////// CONTINUAR DOCUMENTAÇAO DAQUI

// Se a lista esta vazia;
// 	retorna erro de fila vazia;
// Caso contrario
//	atualiza o indice _ultimo
//	retorna o elemento retirado

int ListaContabil::adicionaNaPosicao( Lancamento l, int destino){

	int posicao;
	if(cheia()){
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

int ListaContabil::adicionaEmOrdem(Lancamento l){
	int posicao;
	if(cheia())
		return ERROLISTACHEIA;
	else{
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
			return ERROLISTAVAZIA;
	}
	else{
		if(fonte > _ultimo || fonte < 0)
		return ERROPOSICAO;
		
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

int ListaContabil::retiraMembro(Lancamento l){
	int posicao;
	if(vazia()){
		return ERROLISTAVAZIA;
	}
	else{
		posicao = posicao(l);
		if(posicao < 0)
			return ERROPOSICAO;
		else
			return retiraDaPosicao(posicao);	
		
	}
}


