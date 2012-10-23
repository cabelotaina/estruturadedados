// Neste arquivo esta a divisao do trabalho para Maurilio, Fristram e Lauro

#ifndef _FILA_ENCADEADA_
#define _FILA_ENCADEADA_
#include "tipoinfo.h"
#include "elementofila.h"

#define ERROFIVAZIA -1
#define ERROPOSICAO -2
#define ERROFILACHEIA -3
class Fila{

public:
	ElementoFila *inicio;
	ElementoFila *fim;
	int tamanho;
Fila();
~Fila();
int adiciona(Fila *aFila, TipoInfo *dado);
TipoInfo* retira(Fila *aFila); 
bool filaVazia(Fila *aFila); 
Fila* criaFila(); 
void destroiFila(Fila *aFila);
};
#endif
