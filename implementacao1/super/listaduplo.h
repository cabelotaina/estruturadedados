#ifndef _LISTA_DUPLO_ENCADEADA_
#define _LISTA_DUPLO_ENCADEADA_
#include "elementolistaduplo.h"
#include "tipocaixa.h"
#include <iostream>
//#include <cstdlib> // necessário para atoi
//#include <cstring>

#define ERROLISTAVAZIA -1
#define ERROPOSICAO -2
#define ERROLISTACHEIA -3

using namespace std;
class ListaDuplo{


private:
	ElementoListaDuplo *dados;
	int tamanho;

public:
	ListaDuplo();
	~ListaDuplo();
	int adicionaDuplo(TipoCaixa *dado);
	int adicionaNoInicioDuplo(TipoCaixa *dado);
	int adicionaNaPosicaoDuplo(TipoCaixa *dado, int posicao); 
	int adicionaEmOrdemDuplo(TipoCaixa *dado); 
	int retiraDuplo(); 
	int retiraDoInicioDuplo(); 
	int retiraDaPosicaoDuplo(int posicao); 
	int retiraEspecificoDuplo(TipoCaixa *dado);
	bool listaVaziaDuplo(); 
	int posicaoDuplo(ElementoListaDuplo *dado);
	bool contemDuplo(ElementoListaDuplo *dado);
	void destroiListaDuplo();
};
#endif
