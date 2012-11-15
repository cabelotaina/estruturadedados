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

	tempo_operacao = 3; //tempo_operacao*60*60;
	srand(time(NULL));
	int media_randomica = int((double(rand())/RAND_MAX)*tempo_medio) + tempo_medio/2;
	int cadencia = 0;
	while(tempo_operacao!=0){


		//mercado funciona aqui
		if(cadencia==media_randomica){


			// gerar modo de pagamento e perfil do cliente
				bool cheque = bool(0 == ( rand() % 2 ));
				bool perfil = bool(0 == ( rand() % 2 ));
			//chegou cliente novo
			TipoInfo *cliente = new TipoInfo(perfil,cheque);
			//inserindo dados do cliente
			super->adicionaCliente(cliente);
			cadencia=0;			
		}

		tempo_operacao--;
		cadencia++;
	}
	cout << "Termino da simulaçao"<<endl;

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
