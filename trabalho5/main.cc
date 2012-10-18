#include "lista.h" //incluido lista encadeada;
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;
//variaveis globais
// agenda - ponteiro para cabeça de lista
// dado - ponteiro para dado construido pelo usuario
// opcao - escolha de comando pelo usuario no menu iterativo
        Lista *agenda;
        TipoInfo *dado;
        char opcao;
//escreva na tela as opçoes do menu principal
void escreveMenu(){
	cout << "Bem vindo a sua agenda de contatos" << endl << endl;
	cout << "* Tecle a para adicionar;"<< endl;
	cout << "* Tecle r para remover;" << endl;
	cout << "* Tecle l para listar;" << endl;
	cout << "* Tecle f para sair;" << endl;
}

// lê o caracter escolhido pelo usuario 

char leia(char c){
	cin >> c;
	return c;
}

// Método para imprimir, na saída padrão, todos os elementos na tela

void imprime(){
	if(agenda!=NULL){
     		ElementoLista* temp = agenda->dados;
	        while (temp) {
               		cout << "Nome: "<<temp->info->nome << endl;
	                cout << "Telefone: "<<temp->info->telefone << endl;
               		temp = temp->proximo;
      		}
	}
	else{
		cout<<"Nao há elementos na Lista"<<endl;
	}
}

//menu que interage com o usuario para adicionar, remover e listar os elementos de lista;

void menuInterativo(){
	// cria uma nova lista
	 agenda = agenda->criaLista();
        //opcao = '';
        while (opcao != 'f') {
                escreveMenu();
		cin >> opcao;
                switch(opcao){
                        case 'a': 
				// chamada de lista para adicionar um novo elemento;
				dado = new TipoInfo;
				cout << "Escreva o nome: ";
				cin >> dado->nome;
				cout << endl;
				cout << "Escreva o telefone: ";
				cin >> dado->telefone;
				
				cout << endl;
				
				agenda->adicionaNoInicio(agenda,dado);
				break; 
                        case 'r':
				// chamada de lista para remover um novo elemento;
				agenda->retira(agenda);
				break;
			case 'l':
				// imprime todos os elementos na lista;
				imprime(); 
                                break;
			case 'f':
				cout << "Saindo"<<endl;
				break;
        	}
	}
}

void lerCasoDeTeste(char* arquivo ){

	ifstream file(arquivo);
	char line[40];
	while(!file.eof()) {
		file.getline(line, 40);
		string command;
		stringstream s(line);	
		s >> command;
		if(command == "CRIAR"){
			agenda = agenda->criaLista();
		}
		if(command == "INSERIR"){
			int n,valor;
			s >> n;
			for (int i = 0 ; i < n ; i++) {
				dado = new TipoInfo;
				file.getline(line,40);
				dado->nome = line; 
				file.getline(line,40);
				stringstream stream(line);	
				stream >> valor;
				dado->telefone = valor;				
				agenda->adicionaNoInicio(agenda,dado);
			}
		}		
		if(command == "MOSTRAR"){
			imprime();
		}
		 if(command == "REMOVER"){
		 	agenda->retira(agenda);	
                }
	}

}
int main(int argc, char** argv){
	if (argc<2){
		menuInterativo();}
	else{
	lerCasoDeTeste(argv[1]);}
}

