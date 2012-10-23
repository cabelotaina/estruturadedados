#include "fila.h" //incluido lista encadeada;
#include <fstream>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <string.h>

using namespace std;
//variaveis globais
// sistema - ponteiro para cabeça de lista
// dado - ponteiro para dado construido pelo usuario
// opcao - escolha de comando pelo usuario no menu iterativo
        Fila *sistema;
        TipoInfo *dado;
        char opcao;
	int x = 0;
	time_t base=time(0);
//escreva na tela as opçoes do menu principal
void escreveMenu(){
	cout << "Bem vindo a sua sistema de contatos" << endl << endl;
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
	if(sistema!=NULL){
     		ElementoFila* temp = sistema->inicio;
	        while (temp) {
               		cout << "Nome: "<<temp->info->nome << endl;
	                cout << "Telefone: "<<temp->info->telefone << endl;
	                cout << "Computador: "<<temp->info->computador << endl;
	                cout << "Valor: "<<temp->info->valor << endl;
			char* data = ctime(&temp->info->data);
	                cout << "Data de entrada: "<< data << endl;
               		temp = temp->proximo;
      		}
	}
	else{
		cout<<"Nao há elementos na Fila"<<endl;
	}
}

//menu que interage com o usuario para adicionar, remover e listar os elementos de lista;

void menuInterativo(){
	// cria uma nova lista
	 sistema = sistema->criaFila();
        //opcao = '';
        while (opcao != 'f') {
                escreveMenu();
		cin >> opcao;
                switch(opcao){
                        case 'a': 
				// chamada de lista para adicionar um novo elemento;
				dado = new TipoInfo;
				x = x + 1;
				cout << "Escreva o nome: ";
				cin >> dado->nome;
				cout << endl;
				cout << "Escreva o telefone: ";
				cin >> dado->telefone;
				cout << "Escreva o modelo do computador: ";
				cin >> dado->computador;
				cout << "Escreva o valor da assistencia: ";
				cin >> dado->valor;
				
				cout << endl;
				if (x == 1)
					base = time(0);
				dado->data = time(0);					
				sistema->adiciona(sistema,dado);
				cout<< "Seu computador será entregue num periodo em torno de 2 semanas"<<endl;
				break; 
                        case 'r':
				// chamada para remover um elemento;
				sistema->retira(sistema);
				base = base + (14*24);
				break;
			case 'l':
				// imprime todos os elementos do sistema;
				if(!sistema->filaVazia(sistema))
					imprime();
				else
					cout << "Fila Vazia!"<<endl;
                                break;
			case 'f':
				cout << "Saindo"<<endl;
				break;
			case'd':
				cout << "Data Atual: "<< ctime(&base) << endl;
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
			sistema = sistema->criaFila();
		}
		if(command == "INSERIR"){
			int n,valor,telefone;
			s >> n;
			for (int i = 0 ; i < n ; i++) {
				dado = new TipoInfo;
				file.getline(line,40);
				dado->nome = line; 
				//strcpy(dado->nome,line);
				file.getline(line,40);
				stringstream stream(line);	
				stream >> telefone;
				//delete stream;
				dado->telefone = telefone;
				file.getline(line,40);
				dado->computador = line; 
				file.getline(line,40);
				stream << line;
				stream >> valor;
				dado->valor=valor;
				dado->data=base;
								
				sistema->adiciona(sistema,dado);
			}
		}		
		if(command == "MOSTRAR"){
			imprime();
		}
		 if(command == "REMOVER"){
			
		 	sistema->retira(sistema);
			 base = base + (14*24);
                }
	}

}
int main(int argc, char** argv){
	if (argc<2){
		menuInterativo();}
	else{
	lerCasoDeTeste(argv[1]);}
}

