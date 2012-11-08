// Neste arquivo esta a divisao do trabalho para Maurilio, Fristram e Lauro

#ifndef _FILA_ENCADEADA_
#define _FILA_ENCADEADA_
#include "tipoinfo.h"
#include "elementofila.h"

#define ERROFIVAZIA -1
#define ERROPOSICAO -2
#define ERROFILACHEIA -3
#define MAXCLIENTES 10;
class Fila{

private:

	ElementoFila *inicio;
	// No documento de requisitos esta que necesitamos apenas o endereço do primeiro cliente da fila, neste caso o final seria desnecessario?
	ElementoFila *fim;
	int numero_de_clientes;
	string nome;
	int id;
	enum tipo {EFICIENTE, MEDIO, RUIN};
	int numero_de_clientes_atentidos;
	int tempo_medio_de_espera;
	int faturamento_total;
	int faturamento_por_cliente;

public:

	Fila();
	~Fila();
	int adiciona(TipoInfo *dado);
	TipoInfo* retira(); 
	bool filaVazia(); 
//	Fila* criaFila(); 
	void destroiFila();
};
#endif
