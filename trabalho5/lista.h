// Neste arquivo esta a divisao do trabalho para Maurilio, Fristram e Lauro

#ifndef _LISTA_ENCADEADA_
#define _LISTA_ENCADEADA_
#include "tipoinfo.h"

#define ERROLISTAVAZIA -1
#define ERROPOSICAO -2
class Lista{

private:
	Lista *aLista;
	int tamanho;
// colocar as variaveis 

public:

	Lista();
	~Lista();
//1) maurilio
	int adiciona(ElementoLista dado); //nao tem codigo
	int adicionaNoInicio(TipoInfo dado); //slide 
	int adicionaNaPosicao(TipoInfo *dado, int posicao); //slide
	int adicionaEmOrdem(TipoInfo dado); //slide
//2) lauro
	retira() //nao tem coidigo
	retiraDoInicio(); //slide 2 formas
	retiraDaPosicao(int posicao); //slide
	retiraEspecifico(ElementoLista dado); //nao tem no slide
//3) fristram
	listaVazia(); //slide
	posicao(ElementoFila dado);
	contem(ElementoFila dado);
	criaLista(); //slide
	destroiLista();
//4)  lauro
//cabecalho listaenc.h

//5)  lauro
//main

//no slide tem 

//main tem no slide
}
#enfif
