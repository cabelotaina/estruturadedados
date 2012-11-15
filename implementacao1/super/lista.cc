#include "lista.h"

Lista::Lista(){
	tamanho = 0;
	this->dados = NULL;
}
bool  Lista::listaVazia(){
	return (tamanho == 0);
}

int Lista::adicionaCaixa(TipoCaixa *info){
    	ElementoLista *novo = new ElementoLista;
	if (novo == NULL) {
                return ERROLISTACHEIA;
	}
    	else{
        	novo->proximo = dados;
		dados = novo;
    		novo->info = info;
		tamanho++;
		return 1;
	}
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
void Lista::adicionaCliente(TipoInfo *cliente){
	//cliente busca um caixa
	
	//cliente entra na fila ou vai embora
		//entra na fila
		
		// computamos tudo do cliente
		
		// vao enbora e computamos a perda
		
	//ver se tem mais coisas
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

bool Lista::contem(ElementoLista *info){

	        ElementoLista* auxiliar = dados;

        for (int i=1; i > tamanho;i++){
                if(auxiliar == info)
                        return true;
                auxiliar = auxiliar->proximo;
        }
        return false;


}




Lista::~Lista(){}
