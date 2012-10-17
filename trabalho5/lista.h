// Neste arquivo esta a divisao do trabalho para Maurilio, Fristram e Lauro

#ifndef _LISTA_ENCADEADA_
#define _LISTA_ENCADEADA_
#include "tipoinfo.h"
#include "elementolista.h"

#define ERROLISTAVAZIA -1
#define ERROPOSICAO -2

class Lista{

private:
	ElementoLista *dados;
	int tamanho;
// colocar as variaveis 

public:

	Lista();
	~Lista();
//1) maurilio
	int adiciona(Lista *aLista, TipoInfo *dado); //implementar
	int adicionaNoInicio(Lista *aLista, TipoInfo *dado);  
	int adicionaNaPosicao(Lista *aLista, TipoInfo *dado, int posicao); 
	int adicionaEmOrdem(Lista *aLista, TipoInfo *dado); 
//2) lauro
	int retira(Lista *aLista); //implementar
	int retiraDoInicio(Lista *aLista); 
	int retiraDaPosicao(Lista *aLista,int posicao); 
	int retiraEspecifico(Lista *aLista, ElementoLista *dado);
//3) fristram
	bool listaVazia(Lista *aLista); 
	int posicao(Lista *aLista, ElementoLista *dado);// implementar
	bool contem(Lista *aLista, ElementoLista *dado); // implementar
	Lista* criaLista(); 
	void destroiLista(Lista *aLista);
//4)  lauro
//cabecalho listaenc.h

//5)  lauro
//main

//no slide tem 

//main tem no slide
};
#endif
