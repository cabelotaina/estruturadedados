#include "fila.h"
#include "tipoinfo.h"

Fila::Fila(){
	
}


Fila* Fila::criaFila(){

	Fila *aFila;
	aFila = new Fila;
	if (aFila != NULL) {
		aFila->tamanho = 0;
		aFila->fila->proximo = NULL;
	}
	return aFila;
}


bool  Fila::filaVazia(Fila *aFila){
	return (aFila->tamanho==0);
}

int Fila::adiciona(Fila *aFila, TipoInfo *dado){
    	ElementoFila *novo = new ElementoFila;
	ElementoFila *aux;

	if (novo == NULL) {
                return ERROFILACHEIA;
	}
    	else {
		if(filaVazia(aFila)) {
			aFila->fila = novo;
			aFila->fila->info = dado;
			aFila->tamanho = 1;
			return aFila->tamanho;
		}
		else {
			aux = aFila->fila;
			while (aux->proximo != NULL) {
				aux = aux->proximo;
			}
			aux->proximo = novo;
	        	novo->proximo = NULL;
			novo->info = dado;
			aFila->tamanho = aFila->tamanho+1;
			return aFila->tamanho;
		}
	}
}

TipoInfo*  Fila::retira(Fila *aFila){
        ElementoFila *saiu = new ElementoFila();
        TipoInfo *volta = new TipoInfo();

        if (filaVazia(aFila)) {
                return(NULL);
        }else{
                saiu = aFila->fila;
                volta = saiu->info;
                aFila->fila = saiu->proximo;
	}
        aFila->tamanho = aFila->tamanho - 1;
        delete saiu;
        return volta;
}
void Fila::destroiFila(Fila *aFila){
	
	if (filaVazia(aFila)) {
	delete  aFila;
	}else{
		ElementoFila *atual = aFila->fila;
		while (atual != NULL){
			ElementoFila *anterior = atual;
			atual = atual->proximo;
			delete anterior->info;
			delete anterior;
		}
		delete  aFila;
	}
}
/*string* Fila::busque(string* origem, string* destino, int horario){
	string problematica;
	while(aFila-proximo!=NULL){
		Fila *auxiliar =  aFila->proximo;
		string str;
		str = auxiliar->itinerario->busque(origem,destino,horario);
		if( str != NULL)
			problematica = problematica + str;
	}


}*/

Fila::~Fila(){}
