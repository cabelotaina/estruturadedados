#include "lista.h"
//cin e cout
#include <iostream>
using namespace std;
Lista::Lista(){
	tamanho = 0;
	this->dados = NULL;
	int maxclientes=0;
	int totalClientes=0;
}
bool  Lista::listaVazia(){
	return (tamanho == 0);
}

int Lista::adicionaCaixa(TipoCaixa *info){
	//vaiavel que controla quantas pessoas o super comporta atender
	maxclientes+=10;
    	ElementoLista *novo = new ElementoLista;
	if (novo == NULL) {
                return ERROLISTACHEIA;
	}
    	else{
        	novo->proximo = dados;
		dados = novo;
    		novo->info = info;
		tamanho++;
		return 1;
	}
}

void Lista::atenderClientes(int relogio){
	ElementoLista *caixa = dados;
	for(int i =0;i<tamanho;i++){
		caixa->info->proximoCliente(relogio);
		totalClientes += caixa->info->tamanhoFila();
		caixa = caixa->proximo;
		
	}

}
bool Lista::temCliente(){
	return totalClientes!=0;
}

void Lista::destroiLista(){
	
	if (listaVazia()) {
	delete  this;
	}else{
		ElementoLista *atual = dados;
		while (atual != NULL){
			ElementoLista *anterior = atual;
			atual = atual->proximo;
			delete anterior->info;
			delete anterior;
		}
		delete  this;
	}
}
int Lista::custosOperacao(){
	return perda;
}
void Lista::faturameto(){
	ElementoLista *caixa = dados;
	int total =0;
	for(int i=0;i<tamanho;i++){
	int faturamento = caixa->info->faturamento();
	cout<<" Faturamento do caixa "<<i<<endl;
	cout<<faturamento<<endl;
	total += faturamento;
	}
	cout<<" Faturamento total do supermercado"<<endl;
	cout<<total<<endl;
}
void Lista::adicionaCliente(TipoInfo *cliente,int relogio){
	//cliente entra na fila ou vai embora
	cout<<"listacc1"<<endl;
	if(!(maxclientes==totalClientes)){ //como computar isso?
	
	//cliente busca um caixa
		//entra na fila
		//verdadeiro vai na menor fila
		TipoCaixa *escolhido;
		if(cliente->tipo){
			cout<<"menorfila"<<endl;
			escolhido = menorFila();
			escolhido->adicionaCliente(cliente);
		}// falso 
		else{
			cout<<"menosprodutos"<<endl;
			escolhido = menosProdutos();
			escolhido->adicionaCliente(cliente);
			
		}
		
		//tempo de saida do caixa
			int espera = 0;
			if(cliente->cheque){

				switch (escolhido->tipo){
  	    	 			case 0:
  	   	        		espera = 60;
					break;
	   	        		case 1:
           	        		espera = 25;
					break;
 	 	        		case 2:
  	                		espera = 10;
					break;
 	   			}
			}
		//valor em compras do cliente - nao sei como inserir na conta
		cliente->tempo(relogio+escolhido->tempo()+espera);
		escolhido->atualizarTempo(cliente->tempoSaida());
	}	
	else{
		// vao embora e computamos a perda
		perda = perda + 3*cliente->total_compra;
	//ver questao do salario dobrado
		TipoCaixa *caixa = new TipoCaixa;
		caixa->tipo = TipoCaixa::EFICIENTE;
		adicionaCaixa(caixa);
	}
}
TipoCaixa* Lista::menosProdutos(){
	
	int quantidade = 10*100;
	ElementoLista *caixa = dados;
	TipoCaixa *info = new TipoCaixa;
	for(int i = 0;i<tamanho;i++){
		int totalprodutos = caixa->info->totalProdutos();
		if (totalprodutos< quantidade){
			info = caixa->info;
			quantidade = totalprodutos;
		}
		caixa = caixa->proximo;
	}
	return info;
}
TipoCaixa* Lista::menorFila(){
	int t = 10;
	ElementoLista *caixa = dados;
	TipoCaixa *info = new TipoCaixa;
	for(int i = 0;i<tamanho;i++){
		int tamanhofila = caixa->info->tamanhoFila();
		if ( tamanhofila < t){
			info = caixa->info;
			t = tamanhofila;
		}
		caixa = caixa->proximo;
	}
	return info;
}
int Lista::retira(){
	maxclientes -=10;
	ElementoLista *saiu = new ElementoLista();
        TipoCaixa *volta = new TipoCaixa();

        if (listaVazia()) {
                return ERROLISTAVAZIA;
        }else{
                saiu = dados;
                volta = saiu->info;
                dados = saiu->proximo;
                tamanho = tamanho - 1;
                delete saiu;
                return 1;
        }
}

bool Lista::contem(ElementoLista *info){

	        ElementoLista* auxiliar = dados;

        for (int i=1; i > tamanho;i++){
                if(auxiliar == info)
                        return true;
                auxiliar = auxiliar->proximo;
        }
        return false;


}




Lista::~Lista(){}
