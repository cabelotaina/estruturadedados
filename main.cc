#include <fstream>
#include <iostream>
#include <sstream>
#include "fila.cc"
#include <string.h>

using namespace std;

int main(int argc, char** argv) {
	ifstream file(argv[1]);
	char line[40];
	Fila f;
	f.inicializa();
	while(!file.eof()) {
		file.getline(line, 40);
		stringstream stream(line);
		string command;
		
		stream >> command;
		if(command == "CRIAR"){
			f.inicializa();
			cout << "CRIANDO PILHA" << endl;
		}
		if(command == "INSERIR"){
			int n;
			stream >> n;
			ElementoFila ef;
			for (int i = 0 ; i < n ; i++) {
				file.getline(line,40);
				strcpy(ef.data, line);
				f.inclui(ef);
			}
		}		
		if(command == "MOSTRAR"){
			f.mostra();
		}
		 if(command == "REMOVER"){
			if(f.retira()==-2){printf("Fila Vazia.");}
                }
	}
}
