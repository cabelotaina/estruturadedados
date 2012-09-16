/*
@author Maurilio Atila;
@date ...
*/

#define MAXPILHA  30
#define	 ERROPILHACHEIA -1
#define	 ERROPILHAVAZIA -2


#include <iostream>

/*
	Descomente a linha abaixo apenas se souber como implementar uma interface em c++.
*/

//#include "pilha.h"
using namespace std;

class Pilha {

private:
	int dados[MAXPILHA];
	int topo;


public:
	Pilha(){inicializa();}
	~Pilha(){};
	
	int empilha(int dado){
		if (pilhaCheia()){
			cout << "ERRO: Pilha cheia ao tentar empilhar!" << endl;
			return ERROPILHACHEIA;
		}
		else{
			topo = topo + 1;
			dados[topo] = dado;
			return topo;
		}
	}
	int desempilha(){
		if (pilhaVazia()){
			cout << "ERRO: Pilha vazia ao tentar desempilhar!" << endl;
			return ERROPILHAVAZIA;
		}
		else{
			topo = topo - 1;
			return topo;
		}
	}
	void inicializa(){
		topo = - 1;
	}
	int valorTopo(){
		if(pilhaVazia()){
			cout << "ERRO: Pilha vazia ao tentar acessar!" << endl;
			return ERROPILHAVAZIA;
		}
		else{
			return dados[topo];
		}
	}

	void mostrar(){
		for(int i = topo; i >= 0; i--){
			cout << "Possiçao: " << i << ", valor:" << dados[i] << endl;
		}
	}

private:

	bool pilhaCheia(){
		if(topo == MAXPILHA - 1){
			return true;}
		return false;
	}
	bool pilhaVazia(){
		if (topo == -1){
			return true;}
		return false;
	}
};


#define EMPILHAR cout<<"Empilhando!"<<endl 
#define DESEMPILHAR cout<<"Desempilhando!"<<endl 
#define LIMPAR cout<<"Limpando!"<<endl
#define MOSTRAR cout<<"Mostrando"<<endl
#define SAIR cout<< "saindo!"<<endl

int main() {
	int operacao = 0;
	
	Pilha pilha;

	while(operacao!=5){
		cout <<"Escreva a operaçao que deseja?\n\t1.EMPILHAR \t2.DESEMPILHAR\t3.LIMPAR\t4.MOSTRAR\t5.SAIR";
		cout<<"\n\n=>";
    		cin >> operacao;
    		cin.ignore ();

    		switch (operacao){
	        case 1:
			cout << "escreva um valor" << endl;
			cout << "=>";
			int valor;
			cin>>valor;
			pilha.empilha(valor);
 			EMPILHAR;           	 
			break;
	        case 2:
			pilha.desempilha();
        	    	DESEMPILHAR;
	           	break;
        	case 3:
			pilha.inicializa();
          		LIMPAR;
	            	break;
        	case 4:
			pilha.mostrar();
            		MOSTRAR;
			break;
        	case 5:
            		SAIR;
			break;
    		}
	}
}



