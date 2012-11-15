#include "tipocaixa.h"
#include <iostream>
using namespace std;

int main(){

TipoCaixa *caixa = new TipoCaixa;

for(int i =0; i<11 ; i++ ){
	TipoInfo *cliente = new TipoInfo;
	caixa->adicionaCliente(cliente);
}

cout << caixa->tamanhoFila()<<endl;
}
