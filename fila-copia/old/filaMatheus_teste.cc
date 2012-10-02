#ifndef ELEMENTO_FILA_H_
#define ELEMENTO_FILA_H_

#define  ELEMENTO_FILA_SIZE 40;
/*
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
*/
#include <iostream>
using namespace std;


struct ElementoFila {
	//ElementoFila(char* data);
	//ElementoFila*();
	char data[ELEMENTO_FILA_SIZE];
	};
	
	#endif

int main(){
	//Fila f;
	struct ElementoFila ef;
	 ef.data= char teste[40];
	cout << ef.data;	
	//f.enfileirar(&ef)
	//f.desenfileirar();

}

/*#define MAXFILA 100
	
class Fila{

private:

ElementoFila fila[MAXFILA];
int final;
public:
	Fila(){final = -1;}
	~Fila(){}
	void enfileirar(struct ElementoFila *ef){
		final+=1;
		fila[final] = ef;
	}
	void desenfileirar(){
		printf("O valor de fila zero é \n"+fila[0]);
	}

}

	//.cc
	
	ElementoLista::ElementoLista(){
	
	}
	
//Lista.cc

*/

