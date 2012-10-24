// Neste arquivo esta a divisao do trabalho para Maurilio, Fristram e Lauro

#ifndef FILA_H
#define FILA_H
#include "tipoinfo.h"
#include "elementofila.h"

#define ERROFIVAZIA -1
#define ERROPOSICAO -2
#define ERROFILACHEIA -3
class Fila{

public:
	ElementoFila *proximo;
	int tamanho;
Fila();
~Fila();
int adiciona(Fila *aFila, TipoInfo *dado);
TipoInfo* retira(Fila *aFila); 
bool filaVazia(Fila *aFila); 
Fila* criaFila(); 
void destroiFila(Fila *aFila);

//string* busque(string *origen,string *destino, int horario);
};
#endif
