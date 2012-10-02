// FILE: fila.h
// TITLE: fila
// SUBMITTED BY: Maurilio Atila Carvalho de Santana, Fristtram Helder Fernandes e Lauro Costa Borges.
// Todo o código é meu, excepto quando creditado a outros.
// FOR COURSE: INE5408
// DUE DATE: 25 de Setembro 2012
//
// PURPOSE:
// Funciona como uma interface de fila.cc. 
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

#ifndef FILA_H
#define FILA_H
#define MAXFILA 100
#include "elementofila.h"

#define ERROFILACHEIA -1
#define ERROFILAVAZIA -2

class Fila{

private:
	ElementoFila _fila[MAXFILA];
	int _ultimo;
public:

	Fila();
	~Fila();

	int inclui(ElementoFila dado);
	int retira();
	int ultimo();
	bool cheia();
	bool vazia();
	void inicializa();
	void mostra();
};
#endif
