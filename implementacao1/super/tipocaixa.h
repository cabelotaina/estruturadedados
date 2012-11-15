#ifndef _TIPOCAIXA_H
#define _TIPOCAIXA_H

#include <string>
#include "tipoinfo.h"
#include "fila.h"

using namespace std;
class TipoCaixa{

private:

	Fila *fila;	

	string nome;
	int tempoTotal;
       
	
	// vai incrementado enquanto o caixa esta em funcionamento
        int clientes_atendidos;
	

public:
	TipoCaixa();
	~TipoCaixa();
	enum perfil {EFICIENTE=2, MEDIO=1, RUIM=0};
	perfil tipo;
	//podemos usar uma string já que o comparador é pelo nome;
      	bool maior(TipoCaixa *dado);
	bool menor(TipoCaixa *dado);
	bool igual(TipoCaixa *dado);
	

	string obterNome();
        void inserirNome(string nome);
	void removerCliente();
	int tamanhoFila();
	/*enum obterTipo();
	void inserirTipo(enum tipo);*/

	bool adicionaCliente(TipoInfo *cliente);
	int tempo();
	void atualizarTempo(int total);
	int totalProdutos();
	void proximoCliente(int relogio);
	int faturamento();
};
#endif
