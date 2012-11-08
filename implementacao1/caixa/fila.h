// Neste arquivo esta a divisao do trabalho para Maurilio, Fristram e Lauro

#ifndef _FILA_ENCADEADA_
#define _FILA_ENCADEADA_
#include "tipoinfo.h"
#include "elementofila.h"

#define ERROFIVAZIA -1
#define ERROPOSICAO -2
#define ERROFILACHEIA -3
class Fila{

public:
	ElementoFila *inicio;
	// No documento de requisitos esta que necesitamos apenas o endereço do primeiro cliente da fila, neste caso o final seria desnecessario?
	ElementoFila *fim;
	int numero_de_clientes;
	string nome;
	int id;
	ENUM tipo {EFICIENTE, MEDIO, RUIN};
	int numero_de_clientes_atentidos;
	int tempo_medio_de_espera;
	int faturamento_total;
	int faturamento_por_cliente;
	
	Fila();
	~Fila();
	int adiciona(Fila *aFila, TipoInfo *dado);
	TipoInfo* retira(Fila *aFila); 
	bool filaVazia(Fila *aFila); 
	Fila* criaFila(); 
	void destroiFila(Fila *aFila);
};
#endif
