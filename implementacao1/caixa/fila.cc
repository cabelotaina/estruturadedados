#include "fila.h"
#include "tipoinfo.h"

Fila::Fila(){
	
}


Fila* Fila::criaFila(){

	Fila *aFila;
	aFila = new Fila;
	if (aFila != NULL) {
		aFila->tamanho = 0;
		aFila->inicio = NULL;
		aFila->fim = NULL;
	}
	return aFila;
}


bool  Fila::filaVazia(Fila *aFila){
	return (aFila->tamanho==0);
}

int Fila::adiciona(Fila *aFila, TipoInfo *dado){
    	ElementoFila *novo = new ElementoFila;
	if (novo == NULL || numero_de_clientes==10) 
                return ERROFILACHEIA;
    	else{
		if(filaVazia(aFila))
			aFila->inicio = novo;
		else
			aFila->fim->proximo = novo;
        	novo->proximo = NULL;
		novo->info = dado;
		aFila->fim = novo;
		aFila->tamanho = aFila->tamanho+1;
		return aFila->tamanho;
	}
}

TipoInfo*  Fila::retira(Fila *aFila){
        ElementoFila *saiu = new ElementoFila();
        TipoInfo *volta = new TipoInfo();

        if (filaVazia(aFila)) {
                return(NULL);
        }else{
                saiu = aFila->inicio;
                volta = saiu->info;
                aFila->inicio = saiu->proximo;
		if(aFila->tamanho == 1)
			aFila->fim = NULL;
	}
        aFila->tamanho = aFila->tamanho - 1;
        delete saiu;
        return volta;
}
void Fila::destroiFila(Fila *aFila){
	
	if (filaVazia(aFila)) {
	delete  aFila;
	}else{
		ElementoFila *atual = aFila->inicio;
		while (atual != NULL){
			ElementoFila *anterior = atual;
			atual = atual->proximo;
			delete anterior->info;
			delete anterior;
		}
		delete  aFila;
	}
}


Fila::~Fila(){}
