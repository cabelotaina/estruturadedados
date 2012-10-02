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
// adiciona
// adicionaNoInicio
// retira
// ultimo
// cheia
// vazia
// inicializa
// mostra
// contem
// igual
// maior
// menor
// adicionaNaPosicao
// adicionaEmOrdem
// posicaoNaLista
// retiraDoInicio
// retiraDaPosicao
// retiraMembro
// posicao

#ifndef LISTA_H
#define LISTA_H
#define MAXLISTA 100
#include "lancamento.h"

#define ERROLISTACHEIA -1
#define ERROLISTAVAZIA -2
#define ERROPOSICAO -3

class ListaContabil{

private:
	Lancamento _lista[MAXLISTA];
	int _ultimo;
public:

	ListaContabil();
	~ListaContabil();

	int adiciona(Lancamento dado);
	int adicionaNoInicio(Lancamento dado);
	int retira();
	int ultimo();

	bool cheia();
	bool vazia();

	void inicializa();

	void mostra();
	
	bool contem(Lancamento dado);
	bool igual(Lancamento dado1,Lancamento dado2);
	bool maior(Lancamento dado1,Lancamento dado2);
	bool menor(Lancamento dado1,Lancamento dado2);


	int adicionaNaPosicao(Lancamento dado, int posicao);
	int adicionaEmOrdem(Lancamento dado);
	
	int posicaoNaLista(Lancamento dado);
	
	int retiraDoInicio();
	int retiraDaPosicao(int posicao);
	int retiraMembro(Lancamento dado); // Esse é o retiraEspecifico dos Slides;
	int posicao(Lancamento dado);
	int obterValor(int indice);

};
#endif
