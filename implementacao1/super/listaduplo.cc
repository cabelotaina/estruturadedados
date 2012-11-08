#include "listaduplo.h"
#include "tipocaixa.h"
//#include "elementolistaduplo.h"
ListaDuplo::ListaDuplo(){
	
}


bool  ListaDuplo::listaVaziaDuplo(){
	return (tamanho==0);
}

int ListaDuplo::adicionaDuplo(TipoCaixa *dado){ 
    	ElementoListaDuplo *novo = new ElementoListaDuplo;
	if(novo == NULL){ 
                return ERROLISTACHEIA;
	}
    	else{
		novo->anterior = this->dados;
		novo->proximo = this->dados->proximo;
		if(novo->anterior!=NULL)
			novo->proximo->anterior = novo;
    		novo->info = dado;
		return 1;
	}
}


int ListaDuplo::adicionaNoInicioDuplo(TipoCaixa *dado){
	ElementoListaDuplo *novo = new ElementoListaDuplo;
	if(novo == NULL) {
		return ERROLISTACHEIA;
	}
	else{
		novo->proximo = this->dados;
		novo->info = dado;
		this->dados = novo;
		if(novo->anterior!=NULL)
			novo->proximo->anterior = novo;
		this->tamanho = this->tamanho + 1;
		return 1;
	}
}



int  ListaDuplo::retiraDoInicioDuplo(){
	ElementoListaDuplo *saiu = new ElementoListaDuplo();
	TipoCaixa *volta = new TipoCaixa;
	
	if(listaVaziaDuplo()) {
		return ERROLISTAVAZIA;
	}else{
		saiu = this->dados;
		volta = saiu->info;
		this->dados = saiu->proximo;
		if(this->dados!=NULL)
			this->dados->anterior = NULL;
		this->tamanho = this->tamanho - 1;
		delete saiu;
		return 1;
	}
}


int ListaDuplo::adicionaNaPosicaoDuplo(TipoCaixa *dado, int posicao){
	if(posicao > this->tamanho + 1) {
		return ERROPOSICAO;
	}else{
		if(posicao = 1) {
			return adicionaNoInicioDuplo(dado);
		}else{
			ElementoListaDuplo *novo = new ElementoListaDuplo;
			if(novo == NULL) {
				return ERROLISTACHEIA;
			}else{
				ElementoListaDuplo *anterior;
				anterior = this->dados;
				for(int i =0; i < posicao - 2; i++) {
					anterior = anterior->proximo;
					novo->proximo = anterior->proximo;
					if(novo->proximo!=NULL)
						novo->proximo->anterior = novo;
					novo->info = anterior->info;
					anterior->proximo = novo;
					novo->anterior=anterior;
					this->tamanho = this->tamanho + 1;
					return this->tamanho;
				}
			}
		}	
	}	
}


int  ListaDuplo::retiraDaPosicaoDuplo(int posicao){

	if (posicao > this->tamanho || posicao>1) {
		return ERROPOSICAO;
	}else{
		if(posicao == 1) {
			return retiraDoInicioDuplo();
		}else{
			ElementoListaDuplo* anterior = this->dados;
			for (int i = 0; i < posicao - 2; i++) {
				anterior = anterior->proximo;
				ElementoListaDuplo* eliminar = anterior->proximo;
				TipoCaixa* volta = eliminar->info;
				anterior->proximo = eliminar->proximo;
				if(eliminar->proximo != NULL)
					eliminar->proximo->anterior = anterior;
				this->tamanho = this->tamanho - 1;
				delete eliminar;
				return 1;
			}
		}
	}		
}



int  ListaDuplo::adicionaEmOrdemDuplo(TipoCaixa *dado){
	int posicao;
	if (listaVaziaDuplo()) {
		return adicionaNoInicioDuplo(dado);
	}else{
		ElementoListaDuplo *atual = this->dados;
		posicao = 1;
		while (atual->proximo != NULL && dado->maior(atual->info)){
			atual = atual->proximo;
			posicao = posicao + 1;
		}
		if(dado->maior(atual->info))
			return adicionaNaPosicaoDuplo(dado, posicao + 1);
	}
	return adicionaNaPosicaoDuplo(dado, posicao);
}


void ListaDuplo::destroiListaDuplo(){ 
	
	if (listaVaziaDuplo()) {
		delete  this;
	}else{
		ElementoListaDuplo *atual = this->dados;
		while (atual != NULL){
			ElementoListaDuplo *anterior = atual;
			atual = atual->proximo;
			delete anterior->info;
			delete anterior;
		}
		delete  this;
	}
}

int ListaDuplo::retiraDuplo(){

ElementoListaDuplo *saiu = new ElementoListaDuplo();
        TipoCaixa *volta = new TipoCaixa();

        if (listaVaziaDuplo()) {
                return ERROLISTAVAZIA;
        }else{
                saiu = this->dados;
                volta = saiu->info;
                this->dados = saiu->proximo;
		this->dados->anterior=NULL;
                this->tamanho = this->tamanho - 1;
                delete saiu;
                return 1;
        }


}

int ListaDuplo::posicaoDuplo(ElementoListaDuplo *dado){

	ElementoListaDuplo* auxiliar = this->dados;
	
	for (int i=1; i>this->tamanho;i++){ 
		if(auxiliar == dado)
			return i;
		auxiliar = auxiliar->proximo;
	}
	return -1; 

}
bool ListaDuplo::contemDuplo(ElementoListaDuplo *dado){

	        ElementoListaDuplo* auxiliar = this->dados;

        for (int i=1; i>this->tamanho;i++){
                if(auxiliar == dado)
                        return true;
                auxiliar = auxiliar->proximo;
        }
        return false;


}

int ListaDuplo::retiraEspecificoDuplo(TipoCaixa *dado){
	ElementoListaDuplo *auxiliar;
	auxiliar->info=dado;	
	if(!contemDuplo(auxiliar))
		return -1;
	else{
		return retiraDaPosicaoDuplo(posicaoDuplo(auxiliar));
	}

}

ListaDuplo::~ListaDuplo(){}
