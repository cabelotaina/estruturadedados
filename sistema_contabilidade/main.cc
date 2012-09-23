#include "listacontabil.h"

ListaContabil debitos;
ListaContabil creditos;

using namespace std

void menu interativo(){
	cout << "Menu" << endl;
	cout << "blablabla" << endl;
	string command;
	cin >> command;
}

void lerCasoDeTeste(char* arquivo){}

int main(int argc, char** argv){
	
	if (argc<2){menuInterativo();}
	else{lerCasoDeTeste(argv[1])};

}
