#include "lista.h" //incluido lista encadeada;
#include "listaduplo.h" //incluido lista encadeada;
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;
//variaveis globais
// linhas - ponteiro para cabeça de lista
// dado - ponteiro para dado construido pelo usuario
// opcao - escolha de comando pelo usuario no menu iterativo
        Fila *linhas;
	ListaDuplo itinerario;
        TipoInfo *dado;
/*        ListaDuplo *itinerario;
        char opcao;
//escreva na tela as opçoes do menu principal
void escreveMenu(){
	cout << "Bem vindo a ao sistema de transporte" << endl << endl;
	cout << "Para onde vc deseja ir?" << endl << endl;
	// agora viria uma lista de cidades.
	// em seguida o usuario pode navegar pelas cidades.
	cout << "* Tecle o numero da cidade;"<< endl;
	cout << "* Tecle r para remover;" << endl;
	cout << "* Tecle l para listar;" << endl;
	cout << "* Tecle f para sair;" << endl;
}

// lê o caracter escolhido pelo usuario 

char leia(char c){
	cin >> c;
	return c;
}

//menu que interage com o usuario para adicionar, remover e listar os elementos de lista;

void menuInterativo(){
	// cria uma nova lista
	 linhas = linhas->criaLista();
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
				
				linhas->adicionaNoInicio(linhas,dado);
				break; 
                        case 'r':
				// chamada de lista para remover um novo elemento;
				linhas->retira(linhas);
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
*/


string* buscar(string origem,string destino, int horario){

	linhas->dados->itinerario
	


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
			linhas = linhas->criaFila();
		}
		if(command == "ROTA"){
			itinerario = itinerario->criaListaDuplo();
			dado = new TipoInfo;
			int id,n;
			string empresa;
			s >> rota;
			s >> empresa;
			s >>n;
			dado->empresa = empresa;
			dado->rota = rota;
			dado->parada=itinerario;
			for (int i = 0 ; i < n ; i++) {
				Cidade *parada = new Cidade;
				// obtendo nome da cidade
				file.getline(line,40);
				stringstream stream(line);	
				stream >> parada->nome;
				// obtendo horario 1
				file.getline(line,40);
				stringstream stream(line);	
				stream >> parada->h1;
				// obtendo horario 2
				file.getline(line,40);
				stringstream stream(line);	
				stream >> parada->h2;
				// nao existem caracteristicas da cidade nos casos de teste
				parada->adicionaNoInicioDuplo(parada,cidade);
				linhas->adicionaNoInicio(linhas,dado);
			}
		}		
		if(command == "BUSCAR_ROTA"){
			//aqui ele pode navegar pelas cidades da rota selecionada?
			string* origen,destino;
			int horario;
			file.getline(line,40);
			stringstream stream(line);	
			stream>> origen;
			file.getline(line,40);
			stringstream stream(line);	
			stream>> destino;
			file.getline(line,40);
			stringstream stream(line);	
			stream>> horario;
			cout<<linhas->busque(cidade1,cidade2,horario)<<endl;
				
		}
		// if(command == "REMOVER"){
		// 	linhas->retira(linhas);	
                //}
	}

}
int main(int argc, char** argv){
lerCasoDeTeste(argv[1]);
	
/*	if (argc<2){
		menuInterativo();}
	else{
	lerCasoDeTeste(argv[1]);}*/
}

