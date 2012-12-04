#include <iostream>
//#include <fstream>
//#include <sstream>
#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "dicionario.h"
using namespace std;

Dicionario::Dicionario(){
	//dados = new Associacao; 
}

void Dicionario::adicionar(char* cep ,int tipo , void* logradouro){
	//fazer o mod(k,17)
	int local = mod(atoi(cep), NLINHAS);
	Associacao *aux = dados+local-1;
	//inserir na Associação correta 0...16
	Associacao *novo;
	novo = new Associacao;
	if(novo==NULL){
		cout << "ERRO: memoria cheia!"<<endl;
	}
	else{
		novo->prox = aux;
		novo->chave = cep;
		novo->valor = logradouro;
		novo->tipo = tipo;
		aux = novo;
	}
	cout << (char*)novo->valor << " - " <<novo->chave <<endl;
}
void Dicionario::imprimir(){


	/*for (int i = 0; i<18;i++){
		Associacao *aux = dados+i;
		while(aux!=NULL){

			switch (operacao){
				case 1:
				  cout << (int*)aux->valor << endl;
				break;
				case 2:
				   cout << (float*)aux->valor << endl;
				break;
				case 3:
				 	 cout << (char*)aux->valor << endl;
				break;
			}
			
		}
	}*/
	//fazer um for que percorre as 17 associações e lista cada cep (chave) e logradouro 
	//cout << cep <<endl;
	//char *aux = (char*)logradouro;
	//cout << aux  <<endl;

	//cout << (char*)aux->valor << " - " <<aux->chave <<endl;
}

int Dicionario::mod(int chave, int nlinhas){
	return chave % nlinhas;
	
}



Dicionario::~Dicionario(){}
