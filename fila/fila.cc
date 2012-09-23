#include "fila.h"
#include <stdio.h>
//using namespace std;

Fila::Fila(){
	_ultimo = -1;
	printf("%s\n","CRIANDO FILA");
}

int Fila::inclui(ElementoFila dado){
	if(cheia()){
		printf("%s\n","Fila Cheia.");
		return ERROFILACHEIA;
	}
	_ultimo++;
	_fila[_ultimo] = dado;
	return _ultimo;
}

bool Fila::cheia(){
	return _ultimo == MAXFILA - 1;
}

int Fila::retira(){
	
	if(vazia()){
		printf("%s\n","Fila Vazia.");
		return ERROFILAVAZIA;
	}	
	else{ 
		_ultimo--;
		for (int i = 0; i <= _ultimo; i++){
			_fila[i] = _fila[i+1];
		}
	return _ultimo;
	}
}

int Fila::ultimo(){
	return _ultimo+1;
}

bool Fila::vazia(){
	return _ultimo == -1;
}

void Fila::inicializa(){
	_ultimo = -1;
}
void Fila::mostra(){
	
	ElementoFila ef;
	if(vazia()){
		printf("%s\n","Fila Vazia.");
	}
	if(cheia()){
		for(int i = 0 ;i<=_ultimo; i++){
                        printf("%s\n",_fila[i].data);
         	}
	}
	else{
		for(int i = 0 ;i<=_ultimo; i++){
			printf("%s\n",_fila[i].data);
		} 
	}
}
Fila::~Fila(){}

