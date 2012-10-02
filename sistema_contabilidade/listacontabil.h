#ifndef LISTA_CONTABIL_H
#define LISTAI_CONTABIL_H

#define ERROLISTACHEIA -1
#define ERROLISTAVAZIA -2
#define ERROPOSICAO -3

#define MAX 100
#include "lancamento.h"
 


class ListaContabil{
private:
	int _ultimo;
	Lancamento _lista[MAX];


public:

ListaContabil();
~ListaContabil();
void inicializa();
void destroi();

bool cheia();
bool vazia();
bool contem(int lancamento);
bool igual(int lancamento1,int lancamento2);
bool maior(int lancamento1,int lancamento2);
bool menor(int lancamento1,int lancamento2);

int listar();
int posicaoNaLista(int lancamento);

int adiciona(int lancamento);
int adicionaNaPosicao(int lancamento, int posicao);
int adicinaEmOrdem(int lancamento); 

int retira();
int retiraDaPosicao(int);
int retiraMembro(int);
};

#endif

