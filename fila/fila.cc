#define MAXFILA 100
#define ERROFILACHEIA -1
#define ERROFILAVAZIA -2
#define ERROFILACHEIA_S cout << "ERRO: Fila cheia ao tentar enfileirar!" << endl
#define ERROFILAVAZIA_S cout << "ERRO: Fila vazia ao tentar desenfileirar!" << endl

#include <iostream>

using namespace std;

class Fila {

private:

	int fila[MAXFILA];
	int ultimo;

	void inc<lui(int valor){
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
	int enfileira(int valor){
		if(filaCheia()){
			ERROFILACHEIA_S;
			return ERROFILACHEIA;
		}
		else{
			inclui(valor);
		}
	}
	int desenfileira(){
		if(filaVazia()){
			ERROFILAVAZIA_S;
			return ERROFILAVAZIA;
		}
		else{
			return ...;
		}
	}
	void inicializa(){
		ultimo = -1;
	}
	int mostrarFila(){
		for(int i = 0; i<=ultimo; i++){
			cout << fila[i] << endl;
		}
	}
}
