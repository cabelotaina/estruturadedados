#ifndef _LISTA_ENCADEADA_
#define _LISTA_ENCADEADA_
#include "elementolista.h"
#include "tipocaixa.h"

//comando para testar se esta compilando:
// g++ lista.cc tipocaixa.cc fila.cc -I .

//podemos passar a usar o exception como esta no exemplo do mateus

#define ERROLISTAVAZIA -1
#define ERROPOSICAO -2
#define ERROLISTACHEIA -3

class Lista{

public:
	ElementoLista *dados;
	int tamanho;


	Lista();
	~Lista();
	int adiciona(TipoCaixa *info);
	bool listaVazia(); 
/*	int adicionaNaPosicao(TipoInfo *info, int posicao); 
	int adicionaEmOrdem(TipoInfo *info); 
	int retira(); 
	int retiraDaPosicao(int posicao); 
	int retiraEspecifico(ElementoLista *info);
	int posicao(ElementoLista *info);
	bool contem(ElementoLista *info);
	void destroiLista();
*/
};
#endif
