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



int Pilha::adiciona(Pilha *aPilha, TipoInfo *dado){
	ElementoPilha *novo = new ElementoPilha;
	if (novo == NULL) {
		return ERROLISTACHEIA;
	}
	else{
		novo->proximo = aPilha->dados;
		novo->info = dado;
		aPilha->dados = novo;
		aPilha->tamanho = aPilha->tamanho + 1;
		return 1;
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

	ElementoPilha *auxiliar = aPilha->dados;
	return auxiliar->proximo->info->disco;


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
