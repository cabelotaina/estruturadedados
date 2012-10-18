// Neste arquivo esta a divisao do trabalho para Maurilio, Fristram e Lauro

#ifndef _LISTA_ENCADEADA_
#define _LISTA_ENCADEADA_
#include "tipoinfo.h"
#include "elementolista.h"

#define ERROLISTAVAZIA -1
#define ERROPOSICAO -2
#define ERROLISTACHEIA -3
class Lista{

public:
	ElementoLista *dados;
	int tamanho;


Lista();
~Lista();
int adiciona(Lista *aLista, TipoInfo *dado);
int adicionaNoInicio(Lista *aLista, TipoInfo *dado);
int adicionaNaPosicao(Lista *aLista, TipoInfo *dado, int posicao); 
int adicionaEmOrdem(Lista *aLista, TipoInfo *dado); 
int retira(Lista *aLista); 
TipoInfo* retiraDoInicio(Lista *aLista); 
int retiraDaPosicao(Lista *aLista,int posicao); 
int retiraEspecifico(Lista *aLista, ElementoLista *dado);
bool listaVazia(Lista *aLista); 
int posicao(Lista *aLista, ElementoLista *dado);
bool contem(Lista *aLista, ElementoLista *dado);
Lista* criaLista(); 
void destroiLista(Lista *aLista);
};
#endif
