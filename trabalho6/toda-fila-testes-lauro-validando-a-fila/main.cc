#include "fila.h"
#include "elementofila.h"
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

Fila *teste;
TipoInfo *dado1 = new TipoInfo();
TipoInfo *dado2 = new TipoInfo();
TipoInfo *dado3 = new TipoInfo();
TipoInfo *volta1 = new TipoInfo();
TipoInfo *volta2 = new TipoInfo();
TipoInfo *volta3 = new TipoInfo();

int main(){

int vazia, i;

dado1->rota = 100;
dado2->rota = 200;
dado3->rota = 300;

dado1->empresa = "Transol";
dado2->empresa = "Estrela";
dado3->empresa = "Canasvieiras";


teste = teste->criaFila();

vazia = teste->filaVazia(teste);

teste->adiciona(teste, dado1);
teste->adiciona(teste, dado2);
teste->adiciona(teste, dado3);

vazia = teste->filaVazia(teste);

volta1 = teste->retira(teste);
volta2 = teste->retira(teste);
volta3 = teste->retira(teste);

vazia = teste->filaVazia(teste);

teste->destroiFila(teste);
}

