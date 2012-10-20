#include "listaduplo.h"
#include "cidade.h"

ListaDuplo::ListaDuplo(){
	
}


ListaDuplo* ListaDuplo::criaListaDuplo(){

	ListaDuplo *aLista;
	aLista = new ListaDuplo;
	if(aLista != NULL) {
		aLista->tamanho = 0;
		aLista->dados = NULL;
	}
	return aLista;
}


bool  ListaDuplo::listaVaziaDuplo(ListaDuplo *aLista){
	return (aLista->tamanho==0);
}

int ListaDuplo::adicionaDuplo(ListaDuplo *aLista, Cidade *dado){
    	ElementoListaDuplo *novo = new ElementoListaDuplo;
	if(novo == NULL) 
                return ERROLISTACHEIA;
    	else{
        	novo->proximo = aLista->dados;
		aLista->dados = novo;
    		novo->info = dado;
		return 1;
	}
}


int ListaDuplo::adicionaNoInicioDuplo(ListaDuplo *aLista, Cidade *dado){
	ElementoListaDuplo *novo = new ElementoListaDuplo;
	if(novo == NULL) {
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


Cidade*  ListaDuplo::retiraDoInicioDuplo(ListaDuplo *aLista){
	ElementoListaDuplo *saiu = new ElementoListaDuplo();
	Cidade *volta = new Cidade();
	
	if(listaVaziaDuplo(aLista)) {
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

int ListaDuplo::adicionaNaPosicaoDuplo(ListaDuplo *aLista, Cidade *dado, int posicao){
	if(posicao > aLista->tamanho + 1) {
		return ERROPOSICAO;
	}else{
		if(posicao = 1) {
			return adicionaNoInicioDuplo(aLista, dado);
		}else{
			ElementoListaDuplo *novo = new ElementoListaDuplo;
			if(novo = NULL) {
				return ERROLISTACHEIA;
			}else{
				ElementoListaDuplo *anterior;
				anterior = aLista->dados;
				for(int i =0; i < posicao - 2; i++) {
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

int  ListaDuplo::retiraDaPosicaoDuplo(ListaDuplo *aLista, int posicao){

	if (posicao > aLista->tamanho) {
		return ERROPOSICAO;
	}else{
		if(posicao = 1) {
			retiraDoInicioDuplo(aLista);
			return 1;
		}else{
			ElementoListaDuplo* anterior = aLista->dados;
			for (int i = 0; i < posicao - 2; i++) {
				anterior = anterior->proximo;
				ElementoListaDuplo* eliminar = anterior->proximo;
				Cidade* volta = eliminar->info;
				anterior->proximo = eliminar->proximo;
				aLista->tamanho = aLista->tamanho - 1;
				delete eliminar;
				return 1;
			}
		}
	}		
}


int  ListaDuplo::adicionaEmOrdemDuplo(ListaDuplo *aLista, Cidade *dado){
	int posicao;
	if (listaVaziaDuplo(aLista)) {
		return adicionaNoInicioDuplo(aLista, dado);
	}else{
		ElementoListaDuplo *atual = aLista->dados;
		posicao = 1;
		while (atual->proximo != NULL && dado->maior(atual->info)){ //maiorDuplo(&dado, &atual->info)
			atual = atual->proximo;
			posicao = posicao + 1;
		}
		return adicionaNaPosicaoDuplo( aLista, dado, posicao + 1);
	}
	return adicionaNaPosicaoDuplo(aLista, dado, posicao);
}


void ListaDuplo::destroiListaDuplo(ListaDuplo *aLista){
	
	if (listaVaziaDuplo(aLista)) {
	delete  aLista;
	}else{
		ElementoListaDuplo *atual = aLista->dados;
		while (atual != NULL){
			ElementoListaDuplo *anterior = atual;
			atual = atual->proximo;
			delete anterior->info;
			delete anterior;
		}
		delete  aLista;
	}
}

int ListaDuplo::retiraDuplo(ListaDuplo *aLista){

ElementoListaDuplo *saiu = new ElementoListaDuplo();
        Cidade *volta = new Cidade();

        if (listaVaziaDuplo(aLista)) {
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
int ListaDuplo::posicaoDuplo(ListaDuplo *aLista, ElementoListaDuplo *dado){

	ElementoListaDuplo* auxiliar = aLista->dados;
	
	for (int i=1; i>aLista->tamanho;i++){ 
		if(auxiliar == dado)
			return i;
		auxiliar = auxiliar->proximo;
	}
	return -1; 

}
bool ListaDuplo::contemDuplo(ListaDuplo *aLista, ElementoListaDuplo *dado){

	        ElementoListaDuplo* auxiliar = aLista->dados;

        for (int i=1; i>aLista->tamanho;i++){
                if(auxiliar == dado)
                        return true;
                auxiliar = auxiliar->proximo;
        }
        return false;


}

ListaDuplo::~ListaDuplo(){}
