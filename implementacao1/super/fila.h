// Neste arquivo esta a divisao do trabalho para Maurilio, Fristram e Lauro

#ifndef _FILA_ENCADEADA_
#define _FILA_ENCADEADA_
#include "elementofila.h"
#include "tipoinfo.h"


#define ERROFIVAZIA -1
#define ERROPOSICAO -2
#define ERROFILACHEIA -3
#define MAXCLIENTES 10;

#include <iostream>
#include <string>
using namespace std;

class Fila{

public:

	//ElementoFila *inicio;
	// No documento de requisitos esta que necesitamos apenas o endereço do primeiro cliente da fila, neste caso o final seria desnecessario?
	//ElementoFila *fim;
	int numero_de_clientes;



	Fila();
	~Fila();
	int adiciona(TipoInfo *dado);
	TipoInfo* retira(); 
	bool filaVazia(); 
	void destroiFila();
};
#endif
