// Neste arquivo esta a divisao do trabalho para Maurilio, Fristram e Lauro

#ifndef _LISTA_ENCADEADA_
#define _LISTA_ENCADEADA_
#include "tipoinfo.h"
#include "elementopilha.h"

#define ERROLISTAVAZIA -1
#define ERROPOSICAO -2
#define ERROLISTACHEIA -3
class Pilha{

public:
	ElementoPilha *dados;
	int tamanho;


Pilha();
~Pilha();
int adiciona(Pilha *aPilha, TipoInfo *dado);
TipoInfo* retira(Pilha *aPilha); 
Pilha* criaPilha(); 
void destroiPilha(Pilha *aPilha);
bool pilhaVazia(Pilha *aPilha);
int topo(Pilha *aPilha);
};
#endif
