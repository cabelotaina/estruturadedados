#ifndef _TIPOCAIXA_H
#define _TIPOCAIXA_H

#include <string>
#include "fila.h"
using namespace std;
class TipoCaixa{
public:

	Fila *fila;	

	string nome;
        enum tipo {EFICIENTE, MEDIO, RUIN};

        int numero_de_clientes_atendidos;
        int tempo_medio_de_espera;
        int faturamento_total;
        int faturamento_por_cliente;


	TipoCaixa();
	~TipoCaixa();
	
	//podemos usar uma string já que o comparador é pelo nome;
      	bool maior(TipoCaixa *dado);
	bool menor(TipoCaixa *dado);
	bool igual(TipoCaixa *dado);
	

	string obterNome();
        void inserirNome(string nome);
	/*enum obterTipo();
	void inserirTipo(enum tipo);*/
};
#endif
