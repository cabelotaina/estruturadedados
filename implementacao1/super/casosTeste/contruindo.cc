#include "lista.h"
#include "tipocaixa.h"
//cin e cout
#include <iostream>
using namespace std;

//apenas o inicio da simulaçao

int main(){
	cout << "Insira o numero de caixas do supermercado:" << endl;
	int numero_de_caixas;
	// variavel apenas auxiliar pois o numero total de caixas fica guardado na lista (supermercado)
	cin >> numero_de_caixas;
	TipoCaixa *caixa;
	Lista super* = new Lista;
	for( int i = 0; i < numero_de_caixas; i++){
		cout << "Insira a letra correspondente a avaliação de cada caixa e (eficiente), m (médio) r (ruim):" << endl;
		char operacao;
		cin >> operacao;
		caixa = new TipoCaixa;
		switch (operacao){
  	    	 	case "e":
  	   	        caixa->tipo = TipoCaixa::EFICIENTE;
			break;
	   	        case "m":
           	        caixa->tipo = TipoCaixa::MEDIO;
			break;
 	 	        case "r":
  	                caixa->tipo = TipoCaixa::RUIM;
			break;
 	   }
	super->adiciona(caixa);
	}
	cout << "Insira o tempo médio de chegada, em segundos, de novos clientes no supermercado:" << endl;
	int tempo_medio;
	cin >> tempo_medio;
	cout << "Insira o tempo de operação, em horas, do supermercado o desta simulação:" << endl;
	int tempo_operacao;
	cin >> tempo_operacao;
	cout << "Espere enquanto o sistema computa a sua simulação, ou aperte c para cancelar... " << endl;

	//simulacao();
}
