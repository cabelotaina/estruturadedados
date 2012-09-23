#ifndef LISTA_CONTABIL_H
#define LISTA_CONTABIL_H
#include "lancamento.h"

#define MAXLISTA 100
#define LISTA_CHEIA -1
#define LISTA_VAZIA -2
#define ERRO_POSICAO -3

class ListaContabil{

private:

	Lancamento _lista[MAXLISTA];
	int _ultimo;

public:

	ListaContabil();
	~ListaContabil();

	int adiciona(Lancamento dado);
	int adicionaNoInicio(Lancamento dado);
	int adicionaNaPosicao(Lancamento dado, int posicao);
	int adicionaEmOrdem(Lancamento dado);
	int retira();
	int retiraDoInicio();
	int retiraDaPosicao(int posicao);
	int retiraEspecifico(Lancamento dado);

	int cheia();
	int vazia();
	int posicao(Lancamento dado);
	int contem(Lancamento dado);
	bool igual(Lancamento dado1, Lancamento dado2);
	bool maior(Lancamento dado1, Lancamento dado2);
	bool menor(Lancamento dado1, Lancamento dado2);

/*
	int inserir(int valor);
	int inserirNaPosicao(int p);
	inserirEmOrdem(int valor);
	remover();
	removerDaPosicao(int p);
	removerMembro(int valor);
	int remover();
	int inserirOrdem();
	bool listaVazia();
	bool listaCheia();

*/
}
#endif
