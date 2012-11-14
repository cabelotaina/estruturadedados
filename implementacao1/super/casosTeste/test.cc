#include "lista.h"
#include "fila.h"
#include "tipoinfo.h"
#include "tipocaixa.h"
#include <iostream>

using namespace std;

int main(){

//Lista *super = new Lista;


TipoCaixa *caixa = new TipoCaixa;
caixa->inserirNome("Maria");
cout << caixa->obterNome()<<endl;
//super->adiciona(caixa);




}
