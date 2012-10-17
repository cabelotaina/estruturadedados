#include "lista.h"

Lista::Lista(){
	
}


Lista* Lista::criaLista(){

	Lista *aLista;
	aLista = new Lista;
	if (aLista != NULL) {
		aLista->tamanho = 0;
		aLista->dados = NULL;
	}
	return aLista;
}


bool  Lista::listaVazia(Lista *aLista){
	return (aLista->tamanho>0);
}

/*int Lista::adiciona(Lista *aLista, InfoLista *dado){
    	ElementoLista *novo = new ElementoLista();
	if (novo == NULL) 
                return ERROLISTACHEIA;
    	else{
		for (int i = 0; i < aLista->tamanho; i++)
        	novo = novo -> aLista->proximo;
		novo -> proximo = novo;
    		novo -> info = dado;
		return 1;
	}
}*/


int Lista::adicionaNoInicio(Lista *aLista, TipoInfo *dado){
	ElementoLista *novo = new ElementoLista();
	if (novo == NULL) {
		return ERROLISTACHEIA;
	}
	else{
		novo->proximo = aLista->dados;
		novo->info = dado;
		aLista->dados = novo;
		aLista->tamanho = aLista->tamanho + 1;
		return 1;
	}
}


TipoInfo*  Lista::retiraDoInicio(Lista *aLista){
	ElementoLista *saiu = new ElementoLista();
	TipoInfo *volta = new TipoInfo();
	
	if (listaVazia(aLista)) {
		return(NULL);
	}else{
		saiu = aLista->dados;
		volta = saiu->info;
		aLista->dados = saiu->proximo;
		aLista->tamanho = aLista->tamanho - 1;
		delete saiu;
		return volta;
	}
}

int Lista::adicionaNaPosicao(Lista *aLista, TipoInfo *dado, int posicao){
	if (posicao > aLista->tamanho + 1) {
		return ERROPOSICAO;
	}else{
		if (posicao = 1) {
			return adicionaNoInicio(aLista, dado);
		}else{
			ElementoLista *novo;
			if (novo = NULL) {
				return ERROLISTACHEIA;
			}else{
				ElementoLista *anterior;
				anterior = aLista->dados;
				for (posicao - 2) {
					anterior = anterior->proximo;
					novo->proximo = anterior->proximo;
					novo->info = info;
					anterior->proximo = novo;
					aLista->tamanho = aLista->tamanho + 1;
					return aLista->tamanho;
				}
			}
		}	
	}	
}

TipoInfo*  Lista::retiraDaPosicao(Lista *aLista, int posicao){

	if (posicao > aLista->tamanho) {
		return NULL;
	}else{
		if (posicao = 1) {
			return retiraDoInicioaLista();
		}else{
			anterior = aLista->dados;
			for (posicao - 2) {
				anterior = anterior->proximo;
				eliminar = anterior->proximo;
				volta = eliminar->info;
				anterior->proximo = eliminar->proximo;
				aLista->tamanho = aLista->tamanho - 1;
				delete eliminar;
				return volta;
			}
		}
	}		
}


int  Lista::adicionaEmOrdem(Lista *aLista, TipoInfo *dado){
	int posicao;
	if (listaVazia(aLista)) {
		return adicionaNoInicio(aLista, dado);
	}else{
		ElementoLista *atual = aLista->dados;
		posicao = 1;
		while (atual->proximo != NULL && dado->maior(atual->info)){ //maior(&dado, &atual->info)
			atual = atual->proximo;
			posicao = posicao + 1;
		}
		return adicionaNaPosicao( aLista, dado, posicao + 1);
	}
	return adicionaNaPosicao(aLista, dado, posicao);
}


void Lista::destroiLista(Lista *aLista){
	
	if (listaVazia(aLista)) {
	delete  aLista;
	}else{
		ElementoLista *atual = aLista->dados;
		while (atual != NULL){
			ElementoLista *anterior = atual;
			atual = atual->proximo;
			delete anterior->info;
			delete anterior;
		}
		delete  aLista;
	}
}

int Lista::retira(Lista *aLista){

	if (listaVazia(aLista)) {
                return ERROLISTAVAZIA;
        }else{
		ElementoLista *dado = aLista->dados;
		// continuar
	}


}
int Lista::posicao(Lista *aLista, ElementoLista *dado){

	ElementoLista* auxiliar = aLista->dados;
	
	for (int i=1; i>aLista->tamanho;i++){ 
		if(auxiliar == dado)
			return i;
		auxiliar = auxiliar->proximo;
	}
	return -1; //colocar dado

}
bool Lista::contem(Lista *aLista, ElementoLista *dado){

	        ElementoLista* auxiliar = aLista->dados;

        for (int i=1; i>aLista->tamanho;i++){
                if(auxiliar == dado)
                        return true;
                auxiliar = auxiliar->proximo;
        }
        return false;


}

Lista::~Lista(){}
