#include "tipocaixa.h"
#include <iostream>
using namespace std;

int main(){

TipoCaixa *caixa = new TipoCaixa;

for(int i =0; i<11 ; i++ ){
	TipoInfo *cliente = new TipoInfo;
	if(!caixa->adicionaCliente(cliente))
		cout << "nao inseri o elemento " << i+1 << endl;
}

cout << caixa->tamanhoFila()<<endl;
}
