#include "fila.h"
#include "tipoinfo.h"

Fila::Fila(){
	
}


/*Fila* Fila::crithis(){

	Fila *this;
	this = new Fila;
	if (this != NULL) {
		this->numero_de_clientes = 0;
		this->inicio = NULL;
		this->fim = NULL;
	}
	return this;
}
*/

bool  Fila::filaVazia(){
	return this->numero_de_clientes==0;
}

int Fila::adiciona(TipoInfo *dado){
    	ElementoFila *novo = new ElementoFila;
	if (novo == NULL || numero_de_clientes==10) 
                return ERROFILACHEIA;
    	else{
		if(filaVazia())
			this->inicio = novo;
		else
			this->fim->proximo = novo;
        	novo->proximo = NULL;
		novo->info = dado;
		this->fim = novo;
		this->numero_de_clientes = this->numero_de_clientes+1;
		return this->numero_de_clientes;
	}
}

TipoInfo*  Fila::retira(){
        ElementoFila *saiu = new ElementoFila();
        TipoInfo *volta = new TipoInfo();

        if (filaVazia()) {
                return NULL;
        }else{
                saiu = this->inicio;
                volta = saiu->info;
                this->inicio = saiu->proximo;
		if(this->numero_de_clientes == 1)
			this->fim = NULL;
	}
        this->numero_de_clientes = this->numero_de_clientes - 1;
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
