#include "tipocaixa.h"
#include <iostream>

using namespace std;
int main(){


TipoCaixa *caixa = new TipoCaixa;
caixa->atual = TipoCaixa::EFICIENTE;
cout << caixa->atual<<endl;

}
