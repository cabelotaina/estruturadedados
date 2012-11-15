#include "tipocaixa.h"
#include <iostream>

using namespace std;
int main(){


TipoCaixa *caixa = new TipoCaixa;
caixa->tipo = TipoCaixa::EFICIENTE;
cout << caixa->tipo<<endl;

}
