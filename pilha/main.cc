#include <fstream>
#include <iostream>
#include <sstream>
#include "pilha.cc"
#include <string.h>

using namespace std;

int main(int argc, char** argv) {
	ifstream file(argv[1]);
	char line[40];
	Pilha p;
	p.inicializa();
	while(!file.eof()) {
		file.getline(line, 40);
		stringstream stream(line);
		string command;
		
		stream >> command;
		if(command == "CRIAR"){
			p.inicializa();
			//cout << "CRIANDO PILHA" << endl;
		}
		if(command == "INSERIR"){
			int n;
			int dado;
			stream >> n;
			for (int i = 0 ; i < n ; i++) {
				file.getline(line,40);
				stringstream stream(line);
				stream >> dado;
				p.insere(dado);
			}
		}		
		if(command == "MOSTRAR"){
			p.mostra();
		}
		 if(command == "REMOVER"){
			//if(p.remove()==-2){printf("Fila Vazia.");}
			p.remove();
                }
	}
}
