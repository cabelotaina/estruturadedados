// Neste arquivo esta a divisao do trabalho para Maurilio, Fristram e Lauro

#ifndef _FILA_ENCADEADA_
#define _FILA_ENCADEADA_
#include <iostream>
#include "elementofila.h"
#include "tipoinfo.h"

#define ERROFIVAZIA -1
#define ERROPOSICAO -2
#define ERROFILACHEIA -3
#define MAXCLIENTES 10;

//#include <string>
//using namespace std;

class Fila{


private:// No documento de requisitos esta que necesitamos apenas o endereço do primeiro cliente da fila,
	// neste caso o final seria desnecessario?
	ElementoFila *inicio, *fim;
public:	
	int numero_de_clientes;
	
	Fila();
	~Fila();
	int adiciona(TipoInfo *dado);
	TipoInfo* retira(); 
	bool filaVazia(); 
	void destroiFila();
	int totalProdutos();
	int proximoCliente(int relogio);
	int faturamento();
};
#endif
