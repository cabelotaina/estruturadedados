#include <stdlib.h>
#include "tipoinfo.h"

TipoInfo::TipoInfo(){}
void carrinho(){

	//adicionar os produtos e os preços a cada produto;
	int total_compra;
	int total_itens = int(rand() % 100 + 2);
	for (int i = 0; i < total_itens;i++){
		int valor = int(rand() % 90 + 1);
		total_compra += valor;
	}
		

}
TipoInfo::~TipoInfo(){}
