#include "tipocaixa.h"
#include <iostream>

using namespace std;

int main(){

TipoCaixa *caixa = new TipoCaixa;
caixa->inserirNome("Maria");
cout << caixa->obterNome()<<endl;




}
