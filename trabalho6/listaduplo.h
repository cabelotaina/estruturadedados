#ifndef _LISTA_DUPLO_ENCADEADA_
#define _LISTA_DUPLO_ENCADEADA_
#include "cidade.h"
#include "elementolistaduplo.h"

#define ERROLISTAVAZIA -1
#define ERROPOSICAO -2
#define ERROLISTACHEIA -3

class ListaDuplo{

public: 
	ElementoListaDuplo *dados;
	int tamanho;


ListaDuplo();
~ListaDuplo();
int adicionaDuplo(ListaDuplo *aLista, Cidade *dado);
int adicionaNoInicioDuplo(ListaDuplo *aLista, Cidade *dado);
int adicionaNaPosicaoDuplo(ListaDuplo *aLista, Cidade *dado, int posicao); 
int adicionaEmOrdemDuplo(ListaDuplo *aLista, Cidade *dado); 
int retiraDuplo(ListaDuplo *aLista); 
int retiraDoInicioDuplo(ListaDuplo *aLista); 
int retiraDaPosicaoDuplo(ListaDuplo *aLista,int posicao); 
int retiraEspecificoDuplo(ListaDuplo *aLista, Cidade *dado);
bool listaVaziaDuplo(ListaDuplo *aLista); 
int posicaoDuplo(ListaDuplo *aLista, ElementoListaDuplo *dado);
bool contemDuplo(ListaDuplo *aLista, ElementoListaDuplo *dado);
ListaDuplo* criaListaDuplo(); 
void destroiListaDuplo(ListaDuplo *aLista);
};
#endif
