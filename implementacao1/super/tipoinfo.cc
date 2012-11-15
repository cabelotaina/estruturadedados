#include <stdlib.h>
#include "tipoinfo.h"
#include <iostream>

using namespace std;

TipoInfo::TipoInfo(bool tipo, bool cheque){
	this->tipo = tipo;
	this->cheque = cheque;
	carrinho();

}
void TipoInfo::carrinho(){
	//gerando semente aleatoria
	srand(time(NULL));
	//adicionar os produtos e os preços a cada produtos
	total_itens = int(rand() % 100 + 2);
	for (int i = 0; i < total_itens;i++){
		int valor = int(rand() % 90 + 1);
		total_compra += valor;
	}
}
void TipoInfo::tempo(int saida){
	this->saida=saida;
}
int TipoInfo::tempoSaida(){
	return saida;
}
TipoInfo::~TipoInfo(){}
