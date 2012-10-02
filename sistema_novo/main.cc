// ATENÇAO ESTA SEM CORRIGIR, VER O QUE CADA LINHA DO CODIGO FAZ E COMPARAR COM PSEUDOCODIGO

// FILE: main.cc
// TITLE: main
// SUBMITTED BY: Maurilio Atila Carvalho de Santana, Fristtram Helder Fernandes e Lauro Costa Borges
// Todo o código é meu, excepto quando creditado a outros.
// FOR COURSE: INE5408
// DUE DATE: 25 de Setembro 2012
//
// PURPOSE:
// Este programa implementa executavel da fila, que funciona exatamente como
// uma fila do mundo real, onde podemos inserir elementos apenas no topo, 
// e podemos retirar os elementos apenas do topo. Ou seja esta sobre o modelo
// LIFO - Last in First out.
// 
// 
//  OVERALL METHOD:
// A lista geral de tarefas é:
// 
// 1. Entre com valores, ate o maximo de 30 valores.
// 2. Liste os valores.
// 3. Veja o valor que esta no topo.
// 4. Remova valores da fila.
//
// CALL TO:
//  insere
//  remove
//  mostra
//  inicializa
//  file - é isso?
//  stream - é isso?
//
// INCLUDED FILES:
// fstream
// iostream
// sstream
// fila.cc
// string.h
//
// METHOD: O seguinte é um pseudocodigo explicando como o contrutor funciona.
// 1.      ? imagino que esta guardando o arquivo na funçao file... 
// 2.      Cria um arranjo com identificador line de 40 bytes.
// 3.      Cria um identificador como nome f de um objeto do tipo fila.
// 4.      Inicializa o objeto do tipo fila (podemos retirar, já que ele usa CRIAR?)
// 5.      Loop: Iterar enquanto nao encontrar o final do arquivo (EOF).
// 5.1     Obtem linha e guarda no arranjo line de 40 bytes.
// 5.2     ? converte o arranjo line de 40 bytes e aloca em stream.
// 5.3     Cria um identificador command do tipo string.
// 5.4     Transfere o valor de stream para command.
// 5.5 	   Testa se command é igual a string "CRIAR".
// 5.5.1   Inicializa o objeto com identificador f do tipo Pilha.
// 5.6     Testa se command é igual a string "INSERIR".
// 5.6.1   Cria uma variavel do tipo inteiro com identificado n.
// 5.6.2   Cria uma variavel do tipo inteiro com identificador dado.
// 5.6.3   Obtem o numero inteiro de stream e transfere para a variavel n.
// 5.6.4.1 Loop: Cria a variavel local i do tipo inteiro e atribui 0.
// 5.6.4.2 Itera n-1 vezes. 
// 5.6.4.3 Obter linha e guarda no arranjo line de 40 bytes.
// 5.6.4.4 Copia a string em line para ef.dados
// 5.6.4.5 Tranfere o valor de stream para dado.
// 5.6.4.6 Passa a variavel dado como paramentro para a funçao insere.
// 5.7     Testa se command é igual a string "MOSTRAR"
// 5.7.1   Chama a funçao para mostrar, retornando os valores da fila.
// 5.8	   Testa se command é igual a string  "REMOVER"
// 5.8.1   remove o valor do topo da fila usando retira.

#include <fstream>
#include <iostream>
#include <sstream>
#include "listacontabil.cc"
#include <string.h>

using namespace std;
ListaContabil *atual = NULL, debitos, creditos;



void menuInterativo(){

char command = 'x';
while(command != 'q'){


	
	cout << "Sistema de Contabilidade 3CD" << endl << endl << endl;
	cout << "Menu:" << endl << endl;
	cout << " (c) Selecionar Lista de Creditos" << endl;
	cout << " (d) Selecionar Lista de Debitos" << endl;
	if (atual != NULL) {
		cout << " (n) Nova Transacao" << endl;
		cout << " (r) Remover Transacao" << endl;
		cout << " (l) Listar Transacoes" << endl;
	} else {
		cout << " (_) Nova Transacao (desabilitado - selecionar lista)" << endl;
		cout << " (_) Remover Transacao (desabilitado - selecionar lista)" << endl;
		cout << " (_) Listar Transacoes (desabilitado - selecionar lista)" << endl;
	}

	cout << " (s) Saldo" << endl;
	cout << " (q) Sair/QUIT" << endl;
	cin >> command;
	switch(command) {
	case 'c':
		atual = &creditos;
		break;
	case 'd':
		atual = &debitos;
		break;
	case 'n':
		  if(atual == NULL){
                        cout << "Você nao escolheu uma lista";
                        break;
                }
// cria contexto
		int n;
                Lancamento l;
// obtem valor
		cout << "Escreva o valor: ";
                cin >> n;
// obtem nome
		cout << "Escreva o nome: ";
		char nome[40];
		cin >> nome;
// copia dos dados
                strcpy(l.nome, nome );
		l.valor = n;
// adiciona lancamento na lista selecionada pelo usuario
		(*atual).adiciona(l);
		break;
	case 'r':

		if(atual == NULL){
			cout << "Você nao escolheu uma lista";
			break;
		}
		(*atual).retira();
		break;
	case 'l':
		  if(atual == NULL){
                        cout << "Você nao escolheu uma lista";
                        break;
                }
		(*atual).mostra();
		break;
	case 's':
		  if(atual == NULL){
                        cout << "Você nao escolheu uma lista";
                        break;
		}
		int c, d;
		for(int i = 0; i < creditos.ultimo(); i++){
			c += creditos.obterValor(i);
		}
		for(int i = 0; i < debitos.ultimo(); i++){
			d += debitos.obterValor(i);
		}
		cout << c-d << endl;
		break;
	case 'q':
		break;
	}
}
}

void lerCasoDeTeste(char* arquivo){
	
	ifstream file(arquivo);
	char line[40];
	ListaContabil l;
	l.inicializa();
	while(!file.eof()) {
		file.getline(line, 40);
		string command;
		stringstream s(line);	
		s >> command;
		if(command == "CRIAR"){
			l.inicializa();
		}
		if(command == "INSERIR"){
			int n,valor;
			s >> n;
			Lancamento lc;
			for (int i = 0 ; i < n ; i++) {
				file.getline(line,40);
				strcpy(lc.nome, line);
				file.getline(line,40);
				stringstream stream(line);	
				stream >> valor;
				lc.valor = valor;				
				l.adiciona(lc);
			}
		}		
		if(command == "MOSTRAR"){
			l.mostra();
		}
		 if(command == "REMOVER"){
			l.retira();
                }
	}

}

int main(int argc, char** argv) {
	if (argc<2){
		menuInterativo();
	}
	else{
		lerCasoDeTeste(argv[1]);
	}
}



