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
			


