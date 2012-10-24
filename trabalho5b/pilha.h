// Neste arquivo esta a divisao do trabalho para Maurilio, Fristram e Lauro

#ifndef _PILHA_H
#define _PILHA_H
#include "tipoinfo.h"
#include "elementopilha.h"

class Pilha{

public:
	ElementoPilha *dados;
	int tamanho;


Pilha();
~Pilha();
int adiciona(Pilha *aPilha, ElementoPilha *e, TipoInfo *dado);
TipoInfo* retira(Pilha *aPilha); 
Pilha* criaPilha(); 
void destroiPilha(Pilha *aPilha);
bool pilhaVazia(Pilha *aPilha);
int topo(Pilha *aPilha);
};
#endif
