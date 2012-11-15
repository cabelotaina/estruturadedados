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
	int perda;
	int maxclientes;
	int totalClientes;
	Lista();
	~Lista();
	int adicionaCaixa(TipoCaixa *info);
	bool listaVazia(); 
	int retira(); 
	 
	int retiraEspecifico(ElementoLista *info);
	void adicionaCliente(TipoInfo *cliente,int relogio);
	bool contem(ElementoLista *info);
	void destroiLista();
	TipoCaixa* menorFila();
	TipoCaixa* menosProdutos();
	void atenderClientes(int relogio);
	int custosOperacao();
	void faturameto();
	bool temCliente();

};
#endif
