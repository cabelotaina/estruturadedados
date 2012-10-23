#include "pilha.h"
#include "tipoinfo.h"

Pilha::Pilha(){
	
}


Pilha* Pilha::criaPilha(){

	Pilha *aPilha;
	aPilha = new Pilha;
	if (aPilha != NULL) {
		aPilha->tamanho = 0;
		aPilha->dados = NULL;
	}
	return aPilha;
}


bool  Pilha::pilhaVazia(Pilha *aPilha){
	return (aPilha->tamanho==0);
}



int Pilha::adiciona(Pilha *aPilha, ElementoPilha *e, TipoInfo *dado){
	ElementoFila *aux;

	if (aPilha->tamanho == aPilha->topo(aPilha)) {
		return ERROLISTACHEIA;
	}
	else{
		aux = aPilha->dados;
		while(aux->proximo != NULL) {
			aux = aux->proximo;
		}
		aux->proximo = &e;
		e->info = &dado;
		aPilha->tamanho = aPilha->tamanho + 1;		
		return 0;
	}
}


TipoInfo*  Pilha::retira(Pilha *aPilha){
	ElementoPilha *saiu = new ElementoPilha();
	TipoInfo *volta = new TipoInfo();
	
	if (pilhaVazia(aPilha)) {
		return(NULL);
	}else{
		saiu = aPilha->dados;
		volta = saiu->info;
		aPilha->dados = saiu->proximo;
		aPilha->tamanho = aPilha->tamanho - 1;
		delete saiu;
		return volta;
	}
}

int Pilha::topo(Pilha *aPilha){

	if(pilhaVazia(aPilha)) {
		return 0;
	}

	ElementoPilha *auxiliar = aPilha->dados;
	while(auxiliar->proximo != NULL) {
		auxiliar = auxiliar->proximo;
	}
	return auxiliar->info->disco;
}

void Pilha::destroiPilha(Pilha *aPilha){
	
	if (pilhaVazia(aPilha)) {
	delete  aPilha;
	}else{
		ElementoPilha *atual = aPilha->dados;
		while (atual != NULL){
			ElementoPilha *anterior = atual;
			atual = atual->proximo;
			delete anterior->info;
			delete anterior;
		}
		delete  aPilha;
	}
}

Pilha::~Pilha(){}
