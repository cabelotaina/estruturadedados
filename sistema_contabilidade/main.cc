#include <iostream>
#include <cstdlib>
#include "listacontabil.cc" // mudei de .h para .cc - MAU

using namespace std;
ListaContabil debitos;
ListaContabil creditos;
ListaContabil* atual;


//(*atual) = NULL; 


void menuInterativo(){
	char command;

	
	cout << "Sistema de Contabilidade 3CD" << endl << endl << endl;
	cout << "Menu:" << endl << endl;
	cout << " (c) Selecionar Lista de Creditos" << endl;
	cout << " (d) Selecionar Lista de Debitos" << endl;
	if ((*atual) != NULL) {
		cout << " (n) Nova Transacao" << endl;
		cout << " (r) Remover Transacao" << endl;
		cout << " (l) Listar Transacoes" << endl;
	} else {
		cout << " (_) Nova Transacao (desabilitado - selecionar lista)" << endl;
		cout << " (_) Remover Transacao (desabilitado - selecionar lista)" << endl;
		cout << " (_) Listar Transacoes (desabilitado - selecionar lista)" << endl;
	}
	cout << " (s) Saldo" << endl;
/*	cin >> command;
	switch(command) {
	case 'c':
		(*atual) = creditos;
		break;
	case 'd':
		(*atual) = debitos;
		break;
	case 'n':
		int n;
		char string[40]
                Lancamento l;
		cout << "escreva o valor";
                cin >> n;
		cout << "escreva o nome";
		// nao estamos tratando os erros.
		cin >> string;
                strcpy(l.nome, string);
		l.valor = n;
		(*atual).adiciona(valor);
		break;
	case 'r':
		(*atual).retira();
		break;
	case 'l':
		(*atual).listar();
		break;
	case 's':
		int c, d;
		for(int i = 0; i < creditos.tamanho(); i++){
			c += creditos.obterValor(i);
		}
		for(int i = 0; i < debitos.tamanho(); i++){
			d += debitos.obterValor(i);
		}
		cout << c-d << endl;
		break;
	}*/
}

void lerCasoDeTeste(char* arquivo){}

int main(int argc, char** argv){
	if (argc<2){menuInterativo();}
	else{lerCasoDeTeste(argv[1]);}

}
