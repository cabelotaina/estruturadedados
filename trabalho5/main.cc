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

char leia(char c){
	cin >> c;
	return c;
}


void menuInterativo(){

//        agenda = criaLista();
        //opcao = '';
        while (opcao != 'f') {
                escreveMenu();
                opcao = leia(opcao);
                switch(opcao){
                        case 'a': 
				// codigo para adicionar;
				break; 
                        case 'r': 
				// codigo para remover; 
				break;
			case: 'm':
				
				break;
			default:
				cout << "opcao invalida!"<<endl;
				//break;
        	}
	}
}

void lerCasoDeTeste(char* arquivo ){


}
int main(int argc, char** argv){
	if (argc<2)
		menuInterativo();
	lerCasoDeTeste(argv[1]);
}

