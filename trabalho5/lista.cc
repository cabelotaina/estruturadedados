#include "lista.h"
#include "tipoinfo.h"

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
	return (aLista->tamanho==0);
}

int Lista::adiciona(Lista *aLista, TipoInfo *dado){
    	ElementoLista *novo = new ElementoLista;
	if (novo == NULL) 
                return ERROLISTACHEIA;
    	else{
        	novo->proximo = aLista->dados;
		aLista->dados = novo;
    		novo->info = dado;
		return 1;
	}
}


int Lista::adicionaNoInicio(Lista *aLista, TipoInfo *dado){
	ElementoLista *novo = new ElementoLista;
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
			ElementoLista *novo = new ElementoLista;
			if (novo = NULL) {
				return ERROLISTACHEIA;
			}else{
				ElementoLista *anterior;
				anterior = aLista->dados;
				for (int i =0; i < posicao - 2; i++) {
					anterior = anterior->proximo;
					novo->proximo = anterior->proximo;
					novo->info = anterior->info;
					anterior->proximo = novo;
					aLista->tamanho = aLista->tamanho + 1;
					return aLista->tamanho;
				}
			}
		}	
	}	
}

int  Lista::retiraDaPosicao(Lista *aLista, int posicao){

	if (posicao > aLista->tamanho) {
		return ERROPOSICAO;
	}else{
		if (posicao = 1) {
			retiraDoInicio(aLista);
			return 1;
		}else{
			ElementoLista* anterior = aLista->dados;
			for (int i = 0; i < posicao - 2; i++) {
				anterior = anterior->proximo;
				ElementoLista* eliminar = anterior->proximo;
				TipoInfo* volta = eliminar->info;
				anterior->proximo = eliminar->proximo;
				aLista->tamanho = aLista->tamanho - 1;
				delete eliminar;
				return 1;
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

ElementoLista *saiu = new ElementoLista();
        TipoInfo *volta = new TipoInfo();

        if (listaVazia(aLista)) {
                return ERROLISTAVAZIA;
        }else{
                saiu = aLista->dados;
                volta = saiu->info;
                aLista->dados = saiu->proximo;
                aLista->tamanho = aLista->tamanho - 1;
                delete saiu;
                return 1;
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
