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

int ListaDuplo::adicionaDuplo(ListaDuplo *aLista, Cidade *dado){ //implementado
    	ElementoListaDuplo *novo = new ElementoListaDuplo;
	if(novo == NULL) 
                return ERROLISTACHEIA;
    	else{
		novo->anterior = aLista->dados;
		novo->proximo = aLista->dados->proximo;
		if(novo->anterior!=NULL)
			novo->proximo->anterior = novo;
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
		if(novo->anterior!=NULL)
			novo->proximo->anterior = novo;
		aLista->tamanho = aLista->tamanho + 1;
		return 1;
	}
}


int  ListaDuplo::retiraDoInicioDuplo(ListaDuplo *aLista){
	ElementoListaDuplo *saiu = new ElementoListaDuplo();
	Cidade *volta = new Cidade;
	
	if(listaVaziaDuplo(aLista)) {
		return ERROLISTAVAZIA;
	}else{
		saiu = aLista->dados;
		volta = saiu->info;
		aLista->dados = saiu->proximo;
		if(aLista->dados!=NULL)
			aLista->dados->anterior = NULL;
		aLista->tamanho = aLista->tamanho - 1;
		delete saiu;
		return 1;
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
			if(novo == NULL) {
				return ERROLISTACHEIA;
			}else{
				ElementoListaDuplo *anterior;
				anterior = aLista->dados;
				for(int i =0; i < posicao - 2; i++) {
					anterior = anterior->proximo;
					novo->proximo = anterior->proximo;
					if(novo->proximo!=NULL)
						novo->proximo->anterior = novo;
					novo->info = anterior->info;
					anterior->proximo = novo;
					novo->anterior=anterior;
					aLista->tamanho = aLista->tamanho + 1;
					return aLista->tamanho;
				}
			}
		}	
	}	
}

int  ListaDuplo::retiraDaPosicaoDuplo(ListaDuplo *aLista, int posicao){

	if (posicao > aLista->tamanho || posicao>1) {
		return ERROPOSICAO;
	}else{
		if(posicao == 1) {
			return retiraDoInicioDuplo(aLista);
		}else{
			ElementoListaDuplo* anterior = aLista->dados;
			for (int i = 0; i < posicao - 2; i++) {
				anterior = anterior->proximo;
				ElementoListaDuplo* eliminar = anterior->proximo;
				Cidade* volta = eliminar->info;
				anterior->proximo = eliminar->proximo;
				if(eliminar->proximo != NULL)
					eliminar->proximo->anterior = anterior;
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
		while (atual->proximo != NULL && dado->maior(atual->info)){
			atual = atual->proximo;
			posicao = posicao + 1;
		}
		if(dado->maior(atual->info))
			return adicionaNaPosicaoDuplo( aLista, dado, posicao + 1);
	}
	return adicionaNaPosicaoDuplo(aLista, dado, posicao);
}


void ListaDuplo::destroiListaDuplo(ListaDuplo *aLista){ //Nao é necessario implementar pois é igual
	
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

int ListaDuplo::retiraDuplo(ListaDuplo *aLista){//implementado

ElementoListaDuplo *saiu = new ElementoListaDuplo();
        Cidade *volta = new Cidade();

        if (listaVaziaDuplo(aLista)) {
                return ERROLISTAVAZIA;
        }else{
                saiu = aLista->dados;
                volta = saiu->info;
                aLista->dados = saiu->proximo;
		aLista->dados->anterior=NULL;
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

int ListaDuplo::retiraEspecificoDuplo(ListaDuplo *aLista, Cidade *dado){//implementado
	ElementoListaDuplo *auxiliar;
	auxiliar->info=dado;	
	if(!contemDuplo(aLista, auxiliar))
		return -1;
	else{
		return retiraDaPosicaoDuplo(aLista,posicaoDuplo(aLista, auxiliar));
	}

}

ListaDuplo::~ListaDuplo(){}
