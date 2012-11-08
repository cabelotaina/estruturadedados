#include <stdio.h>
#include <string.h>


#include "super/listaduplo.h"
#include "super/tipocaixa.h"

#include "caixa/tipoinfo.h"
#include "caixa/fila.h"

using namespace std;

int tempo_de_simulacao;


void simulacao(ListaDuplo super){
	while(tempo_de_simulacao=!0){
		

		// inserir clientes de maneira aleatoria;
		TipoInfo *cliente = new TipoInfo;
		// definir de maneira aleatorio o tipo do cliente;
			 int tipo = rand() %  1;

		if(tipo == 1)
			cliente->tipo = FILAMENOR;
		else
			cliente->tipo = FILAMENORNUMERODEPRODUTOS;
		//definir de maneira aleatoria a forma de pagamento;
		tipo = rand() %  1;

                if(tipo == 1)
			cliente->forma_pagamento = DINHEIRO;
		else
			cliente->forma_pagamento = CHEQUE;	
		// definir de maneira aleatoria quantidade e preço dos produtos ;
		cliente->carrinho();
		




		simulacao--;
	}
}

void menuIterativo(){

int numero_caixas;
	cout << "bem vindo ao simulador de super mercado" <<endl;
	cout << "Para iniciar a simulação digite o numero de caixas:" << endl;
	cin > numero_caixas;
	ListaDuplo *super = new ListaDuplo;
	for (int i = 0; i > numero_caixas; i++){
		//adicionar caixa
		Fila *fila = new Fila;
		TipoCaixa *caixa = new TipoCaixa;
			cout << "Qual o nome do funcionario "<<i<<endl;
				cin >> nome;
			cout << "Escolha o tipo do funcionario"<<endl;
			cout << "eficiente(2), medio(1),ruin(0): ";
				int tipo_funcionario;
				cin > tipo_funcionario;
				switch(tipo_funcionario){

					case 0:
						caixa->inserirTipo(RUIN);
						break;
					case 1:
						caixa->inserirTipo(MEDIO);
						break;
					case 2:
						caixa->inserirTipo();
						break;
				}
			caixa->inserirNome(nome);
		caixa->fila = fila;
		super->adicionaDuplo(caixa);
	}
	cout << "Qual o tempo que você deseja para esta simulação em segundos?" << endl;
	cin >> tempo_de_simulacao;
			
	simulacao(super);
}


int main(int argc, char** argv) {
	menuIterativo();
}
