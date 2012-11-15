#ifndef _ELEMENTOFILA_H
#define _ELEMENTOFILA_H
#include "tipoinfo.h"

class ElementoFila{
public:
	ElementoFila *proximo;
	TipoInfo *info;
	// somatorio do tempo de espera de cada cliente dividido pelo numero de clientes atendidos pelo caixa
        int tempo_medio_de_espera;
        int faturamento_total;
        int faturamento_por_cliente;
};

#endif
