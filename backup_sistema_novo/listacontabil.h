// FILE: listacontabil.h
// TITLE: listacontabil
// SUBMITTED BY: Maurilio Atila Carvalho de Santana, Fristtram Helder Fernandes e Lauro Costa Borges.
// Todo o código é meu, excepto quando creditado a outros.
// FOR COURSE: INE5408
// DUE DATE: 25 de Setembro 2012
//
// PURPOSE:
// Funciona como uma interface de listacontabil.cc. 
//
// METODOS:
// 
// inclui
// retira
// topofila
// inicializa
// mostra
// cheia
// vazia
//

#ifndef LISTA_H
#define LISTA_H
#define MAXLISTA 100
#include "lancamento.h"

#define ERROLISTACHEIA -1
#define ERROLISTAVAZIA -2

class ListaContabil{

private:
	Lancamento _lista[MAXLISTA];
	int _ultimo;
public:

	ListaContabil();
	~ListaContabil();

	int adiciona(Lancamento dado);
	int retira();
	int ultimo();

	bool cheia();
	bool vazia();

	void inicializa();

	void mostra();
};
#endif
