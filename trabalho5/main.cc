#include "lista.h" //incluido lista encadeada;
#include <iostream>

using namespace std;

        Lista *agenda;
        TipoInfo *dado;
        char opcao;

void escreveMenu(){
	cout << "Bem vindo a sua agenda de contatos" << endl << endl;
	cout << "* Tecle a para adicionar;"<< endl;
	cout << "* Tecle r para remover;" << endl;
	cout << "* Tecle f para sair;" << endl;
}

char opcao(char c){
	cin >> c;
	return c;
}


void menuInterativo(){

	agenda = new Lista;
        agenda.criaLista();
        opcao = '';
        while (opcao != 'f') {
                escreveMenu();
                leia(opcao);
                switch(opcao){
                        case 'a': 
				// codigo para adicionar;
				//break; 
                        case 'r': 
				// codigo para remover; 
				//break;
			default:
				cout << "opcao invalida!"<<endl;
				//break;
        	}
	}
}
//Programa Principal
int main(int argc, char** argv){
	if (argc<2)
		menuInterativo();
	lerCasoDeTeste(argv[1]);
}


