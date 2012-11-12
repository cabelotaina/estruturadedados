#include "lista.h"

Lista::Lista(){
	tamanho = 0;
	this->dados = NULL;
}
bool  Lista::listaVazia(){
	return (tamanho == 0);
}

int Lista::adiciona(TipoCaixa *info){
    	ElementoLista *novo = new ElementoLista;
	if (novo == NULL) {
                return ERROLISTACHEIA;
	}
    	else{
        	novo->proximo = dados;
		dados = novo;
    		novo->info = info;
		return 1;
	}
}

/*
// não possui adiciona/retira no inicio

int Lista::adicionaNaPosicao(TipoCaixa *info, int posicao){
	if (posicao > tamanho + 1) {
		return ERROPOSICAO;
	}else{
		if (posicao = 1) {
			return adiciona(info);
		}else{
			ElementoLista *novo = new ElementoLista;
			if (novo = NULL) {
				return ERROLISTACHEIA;
			}
			else{
				ElementoLista *anterior;
				anterior = dados;
				for (int i =0; i < posicao - 2; i++) {
					anterior = anterior->proximo;
					novo->proximo = anterior->proximo;
					novo->info = anterior->info;
					anterior->proximo = novo;
					tamanho = tamanho + 1;
					return tamanho;
				}
			}
		}	
	}	
}

int  Lista::retiraDaPosicao(int posicao){

	if (posicao > tamanho) {
		return ERROPOSICAO;
	}else{
		if (posicao = 1) {
			retiraDoInicio();
			return 1;
		}else{
			ElementoLista* anterior = dados;
			for (int i = 0; i < posicao - 2; i++) {
				anterior = anterior->proximo;
				ElementoLista* eliminar = anterior->proximo;
				TipoCaixa* volta = eliminar->info;
				anterior->proximo = eliminar->proximo;
				tamanho = tamanho - 1;
				delete eliminar;
				return 1;
			}
		}
	}		
}


int  Lista::adicionaEmOrdem(TipoCaixa *info){
	int posicao;
	if (listaVazia()) {
		return adiciona(info);
	}else{
		ElementoLista *atual = dados;
		posicao = 1;
		while (atual->proximo != NULL && info->maior(atual->info)){ //maior(&info, &atual->info)
			atual = atual->proximo;
			posicao = posicao + 1;
		}
		return adicionaNaPosicao(info, posicao + 1);
	}
	return adicionaNaPosicao(info, posicao);
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

int Lista::retira(){

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
int Lista::posicao(ElementoLista *info){

	ElementoLista* auxiliar = dados;
	
	for (int i = 1; i > tamanho;i++){ 
		if(auxiliar == info)
			return i;
		auxiliar = auxiliar->proximo;
	}
	return -1;

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
*/
Lista::~Lista(){}
