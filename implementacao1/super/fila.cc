#include "fila.h"
Fila::Fila(){
	
}

bool  Fila::filaVazia(){
	return numero_de_clientes==0;
}

int Fila::adiciona(TipoInfo *dado){
    	ElementoFila *novo = new ElementoFila;
	if (novo == NULL || numero_de_clientes==10) 
                return ERROFILACHEIA;
    	else{
		if(filaVazia())
			inicio = novo;
		else
			fim->proximo = novo;
        	novo->proximo = NULL;
		novo->info = dado;
		fim = novo;
		numero_de_clientes = numero_de_clientes+1;
		return this->numero_de_clientes;
	}
}
int Fila::proximoCliente(int relogio){
	if (relogio == inicio->info->tempoSaida()){
		retira();
		inicio->faturamento_total += inicio->info->total_compra;
	}
}
int Fila::faturamento(){
	return inicio->faturamento_total;
}
int Fila::totalProdutos(){
	ElementoFila *cliente = inicio;
	int total;
	for(int i=0;i< numero_de_clientes;i++){
		total =  total+cliente->info->total_itens;
	}
	return total;
}
TipoInfo*  Fila::retira(){
        ElementoFila *saiu = new ElementoFila();
        TipoInfo *volta = new TipoInfo(true,true);

        if (filaVazia()) {
                return NULL;
        }else{
                saiu = this->inicio;
                volta = saiu->info;
                inicio = saiu->proximo;
		if(this->numero_de_clientes == 1)
			fim = NULL;
	}
        numero_de_clientes = numero_de_clientes - 1;
        delete saiu;
        return volta;
}
void Fila::destroiFila(){
	
	if (filaVazia()) {
	delete  this;
	}else{
		ElementoFila *atual = this->inicio;
		while (atual != NULL){
			ElementoFila *anterior = atual;
			atual = atual->proximo;
			delete anterior->info;
			delete anterior;
		}
		delete  this;
	}
}


Fila::~Fila(){}
