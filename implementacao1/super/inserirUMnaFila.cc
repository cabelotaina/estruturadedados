#include "tipoinfo.h"
#include "fila.h"
#include <iostream>
using namespace std;

int main(){

Fila *fila = new Fila;
TipoInfo *cliente = new TipoInfo;
fila->adiciona(cliente);

cout << fila->numero_de_clientes <<endl;





}
