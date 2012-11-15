#include "lista.h"
#include "tipocaixa.h"
#include "tipoinfo.h"
//rand e srand
#include <stdlib.h>
//cin e cout
#include <iostream>
using namespace std;

//apenas o inicio da simulaçao



void simulacao(Lista *super, int tempo_medio, int tempo_operacao){

	tempo_operacao = tempo_operacao*60*60;
	srand(time(NULL));
	int media_randomica = int((double(rand())/RAND_MAX)*tempo_medio) + tempo_medio/2;
	int cadencia = 0;
	int relogio = 0;
	while(relogio==tempo_operacao){

		
		//mercado funciona aqui

		//codigo que insere o cliente
		if(cadencia==media_randomica){
			// gerar modo de pagamento e perfil do cliente
				bool cheque = bool(0 == ( rand() % 2 ));
				bool perfil = bool(0 == ( rand() % 2 ));
			//chegou cliente novo
			TipoInfo *cliente = new TipoInfo(perfil,cheque);
			//inserindo dados do cliente
			super->adicionaCliente(cliente,relogio);
			cadencia=0;		
		}
		//visitando cada caixa

		super->atenderClientes(relogio);
		
		relogio++;
		cadencia++;
	}
	char operacao = 'j';
	while(operacao !='s'){
		cout<<"Agora você pode ter acesso as informações de estatística da simulação:"<<endl;
		cout <<"m - para ver o melhor número de caixas para o super mercado de acordo com a frequência de clientes ao seu ponto;"<<endl;
		cout<<"c - para ver o valor do faturamento por caixa e total do supermercado;"<<endl;
		cout<<"d - veja os custos de operação do supermercado;"<<endl;
		cout<<"s - para sair da simulaçao;"<<endl;
		cin>>operacao;
		// guspir os resultados pedidos
		switch (operacao){
  	    	 	case 'm':
  	   	       	//caixa->tipo = TipoCaixa::EFICIENTE;
			break;
	   	       	case 'c':
           	       	//caixa->tipo = TipoCaixa::MEDIO;
			break;
 	 	       	case 'd':
  	               	//caixa->tipo = TipoCaixa::RUIM;
			break;
 	   	}
	}
	cout << "Termino da simulaçao"<<endl;
	//super->resultado();
}


int main(){
	cout << "Insira o numero de caixas do supermercado:" << endl;
	int numero_de_caixas;
	// variavel apenas auxiliar pois o numero total de caixas fica guardado na lista (supermercado)
	cin >> numero_de_caixas;
	TipoCaixa *caixa;
	Lista *super = new Lista;
	for( int i = 0; i < numero_de_caixas; i++){
		cout << "Insira a letra correspondente a avaliação de cada caixa e (eficiente), m (médio) r (ruim):" << endl;
		char operacao;
		cin >> operacao;
		caixa = new TipoCaixa;
		switch (operacao){
  	    	 	case 'e':
  	   	        caixa->tipo = TipoCaixa::EFICIENTE;
			break;
	   	        case 'm':
           	        caixa->tipo = TipoCaixa::MEDIO;
			break;
 	 	        case 'r':
  	                caixa->tipo = TipoCaixa::RUIM;
			break;
 	   }
	super->adicionaCaixa(caixa);
	}
	cout << "Insira o tempo médio de chegada, em segundos, de novos clientes no supermercado:" << endl;
	int tempo_medio;
	cin >> tempo_medio;
	cout << "Insira o tempo de operação, em horas, do supermercado o desta simulação:" << endl;
	int tempo_operacao;
	cin >> tempo_operacao;
	cout << "Espere enquanto o sistema computa a sua simulação, ou aperte c para cancelar... " << endl;

	//cout << super->tamanho<<endl;

	simulacao(super, tempo_medio, tempo_operacao);
}
