#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

int main(int argc, char** argv) {
	ifstream file(argv[1]);

	char line[256];
	file.getline(line, 256);
	while(!file.eof()) {
		stringstream stream(line);
		string command;
		
		stream >> command;
		if(command == "CRIAR"){
			cout << "CRIANDO PILHA" << endl;
		}
		if(command == "INSERIR"){
			int n;
			stream >> n;
			std::cout << "INSERINDO " << n << " ELEMENTOS" << endl;
			for (int i=0;i<n;i++) {
				file.getline(line,256);
				std::cout << "INSERINDO " << line << endl;
			}
		}		
		if(command == "MOSTRAR"){
			cout << "MOSTRAR TODA A PILHA" << endl;
		}
		file.getline(line, 256);
	}
}
