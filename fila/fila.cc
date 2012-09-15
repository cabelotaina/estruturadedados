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

#define MAXFILA 100
#define ERROFILACHEIA -1
#define ERROFILAVAZIA -2
#define ERROFILACHEIA_S cout << "ERRO: Fila cheia ao tentar enfileirar!" << endl
#define ERROFILAVAZIA_S cout << "ERRO: Fila vazia ao tentar desenfileirar!" << endl

#include <iostream>

using namespace std;

class Fila {

private:

	ElementoFila fila[MAXFILA];
	int ultimo;

	void inclui(int valor){
		ultimo = ultimo + 1;
		fila[ultimo] = valor;
	}
	void retira(){
		for(int i = 0; i <= ultimo; i++){
			fila[i] = fila[++i];
		}
		ultimo = ultimo - 1;
	}
	bool filaCheia(){
		if (ultimo == MAXFILA-1)
			return true;
		return false;
	}
	bool filaVazia(){
		if (ultimo == -1)
			return true;
		return false;
	}

public:

	Fila(){inicializa();}
	~Fila(){}
	int enfileira(ElementoFila valor){
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
	int desenfileira(){
		if(filaVazia()){
			ERROFILAVAZIA_S;
			return ERROFILAVAZIA;
		}
		else{
			retira();
			ultimo -= 1;
			return ultimo;;
		}
	}
	void inicializa(){
		ultimo = -1;
	}
	int mostrar(){
		for(int i = 0; i<=ultimo; i++){
			cout << fila[i] << endl;
		}
	}
};

#include <iostream>

using namespace std;

#define EMFILEIRAR cout<<"Emfileirando!"<<endl 
#define DESEMFILEIRAR cout<<"Desemfileirando! <<endl 
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
			fila.enfileira()
 			EMFILEIRAR;           	 
			break;
	        case 2:
        	    	DESEMFILEIRAR;
	           	break;
        	case 3:
          		LIMPAR;
	            	break;
        	case 4:
            		MOSTRAR;
			break;
        	case 5:
            		SAIR;
			break;
    		}
	}
}
