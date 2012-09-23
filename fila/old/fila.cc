/*

@autor Maurilio Atila , Lauro, Fristtram

* Nao sei como implementar a struct abaixo para ter um objeto elemento fila com um campo char[40] como pede o professor esse link explica como fazer uma struct http://pt.wikibooks.org/wiki/Programar_em_C/Tipos_de_dados_definidos_pelo_usu%C3%A1rio parece muito com um objeto.
* Nao faço a menor ideia de como podemos ter uma interface separada fila.h, nem mesmo sei se essa é a ideia, bom como o matheus havia mostrado algumas coisas na sala e entre elas o codigo abaixo coloquei ele aqui...

#ifndef ELEMENTO_FILA_H_
#define ELEMENTO_FILA_H_

#define  ELEMENTO_FILA_SIZE 40;

#include <cstring>

struct ElementoFila {
	ElementoFila(char* data);
	ElementoFila*();
	char data[ELEMENTO_FILA_SIZE];
	};
#endif

*/


/* Essas sao as principais constantes:

	MAXFILA é o tamanho maximo da fila.
	ERROFILACHEIA é o codigo de erro retornado quando a fila esta cheia.
	ERROFILAVAZIA é o codigo de erro retornado quando a fila esta vazia.
	ERROFILACHEIA_S é o texto de erro enviado ao ecra quando a fila esta cheia.
	ERROFILAVAZIA_S é o texto de enviado ao ecra quando a fila esta vazia.
	
*/

#define MAXFILA 100
#define ERROFILACHEIA -1
#define ERROFILAVAZIA -2
#define ERROFILACHEIA_S cout << "ERRO: Fila cheia ao tentar enfileirar!" << endl
#define ERROFILAVAZIA_S cout << "ERRO: Fila vazia ao tentar desenfileirar!" << endl


/*
	CUIDADO!!! - Descomentar a linha abaixo apenas se você sabe o que esta fazendo!
*/
//#include "fila.h"
#include <iostream>
using namespace std;

/*

	ELEMENTO_FILA_SIZE quantidade maxima de caracteres e um ElementoFila 

*/

#define  ELEMENTO_FILA_SIZE 40;

#include <cstring>

/*

	ElementoFila é o tipo dos elementos que serao colocados no arranjo de 100 posiçoes. Na classe Fila.

*/

struct ElementoFila {
	char data[ELEMENTO_FILA_SIZE];
};

/*

Classe Fila - classe responsavel por implementar uma fila no tradicional modelo FIFO - first in first out. 

*/

class Fila {

private:

	struct ElementoFila fila[MAXFILA];
	int ultimo;

/*
	inclui() inclui um elemento na ultima posiçao da fila;
*/ 

	void inclui(struct ElementoFila *valor){
		ultimo = ultimo + 1;
		fila[ultimo] = valor;
	}
/*
	retira() retira o primeiro elemento da fila elemento da Fila
*/

	void retira(){
		for(int i = 0; i <= ultimo; i++){
			fila[i] = fila[++i]*;
		}
		ultimo = ultimo - 1;
	}
/*
	filaCheia() retorna um true se o a fila esta cheia e false caso contrario;
*/
	bool filaCheia(){
		if (ultimo == MAXFILA-1)
			return true;
		return false;
	}
/*
	filaVazia() retorna true se a fila esta vazia e false caso contrario;
*/
	bool filaVazia(){
		if (ultimo == -1)
			return true;
		return false;
	}

public:

/* 
	construtor e destrutor da classe Fila
*/
	Fila(){inicializa();}
	~Fila(){}

/*
	enfileira(struc ElementoFila valor) insere um ElementoFila na ultima posiçao de 	fila e retorna sua posiçao, caso a fila esteja cheia retorna um erro para o 		processador uma mensagem ao usuario;
*/

	int enfileira(struct ElementoFila valor){
		if(filaCheia()){
			ERROFILACHEIA_S;
			return ERROFILACHEIA;
		}
		else{
			inclui(valor);
			ultimo += 1;
			return ultimo;
		}
	}
/*
	desenfileira() remove o primeiro elemento da fila e retorna ele, caso contrario 	se a fila esta vazia retorna um numero de erro ao processador e retorna uma 		mensagem de erro para o usuario. 
*/

	int desenfileira(){
		if(filaVazia()){
			ERROFILAVAZIA_S;
			return ERROFILAVAZIA;
		}
		else{
			struct ElementoFila valor = fila[0];
			retira();
			ultimo -= 1;
			return valor;
		}
	}

/*
	inicializa() modifica o valor de ultimo para -1 reinicializando a fila;
*/

	void inicializa(){
		ultimo = -1;
	}
/*
	mostra() apresenta todos os campos na saida ao usuario;
*/

	void mostra(){
		for(int i = 0; i<=ultimo; i++){
			cout << fila[i] << endl;
		}
	}
};


// Abaixo esta o programa principal, ele tem que estar em um arquivo separado?

/*
	Usei constantes para apresentar mensagens;
*/

#define EMFILEIRAR cout<<"Emfileirando!"<<endl 
#define DESEMFILEIRAR cout<<"Desemfileirando!" <<endl 
#define LIMPAR cout<<"Limpando!"<<endl
#define MOSTRAR cout<<"Mostrando!"<<endl
#define SAIR cout<< "Saindo!"<<endl
 

int main (void){
	int operacao = 0;
	cout <<"Escreva a operaçao que deseja?\n\t1.EMPILHAR \t2.DESEMPILHAR\t3.LIMPAR\t4.MOSTRAR\t5.SAIR";
	Fila fila;
	while(operacao!=5){
		cout<<"\n\n=>";
    		cin >> operacao;
    		cin.ignore();	
    		switch (operacao){
	        case 1:
			cout << "Escreva uma palavra de ate 40 caracteres para guardar na fila." << endl;
			int palavra;
			cin >> palavra;
			fila.enfileira(palavra);
 			EMFILEIRAR;        	 
			break;
	        case 2:
			fila.desemfileira();
        	    	DESEMFILEIRAR;
	           	break;
        	case 3:
			fila.inicializa();
          		LIMPAR;
	            	break;
        	case 4:
			fila.mostra();
            		MOSTRAR;
			break;
        	case 5:
            		SAIR;
			break;
    		}
	}
}
