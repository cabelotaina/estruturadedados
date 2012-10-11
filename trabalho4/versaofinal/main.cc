
// FILE: main.cc
// TITLE: main
// SUBMITTED BY: Maurilio Atila Carvalho de Santana, Fristtram Helder Fernandes e Lauro Costa Borges
// Todo o código é meu, excepto quando creditado a outros.
// FOR COURSE: INE5408
// DUE DATE: 9 de Outubro 2012
//
// PURPOSE:
// Este programa implementa executavel da lista, contendo um vetor de ponteiros para strings.
// 
// 
//  OVERALL METHOD:
// A lista geral de tarefas é:
// 
// 1. Entre com valores, ate o maximo de 100 strings, cada uma com 10000 posicoes no maximo.
// 2. Liste os valores.
// 3. Veja o valor que esta no topo.
// 4. Remova valores da fila.
//
// CALL TO:
// 
//
// INCLUDED FILES:
// fstream
// iostream
// sstream
// tlista.h
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
#include <stdio.h>
#include <string.h>
#include "tlista.h"
using namespace std;

void lerCasoDeTeste(char* arquivo){
	
	ifstream file(arquivo);
	char line[10000];
	tLista l;
	l.inicializa();
	while(!file.eof()) {
		file.getline(line, 10000);
		string command;
		stringstream s(line);	
		s >> command;
		if(command == "CRIAR"){
			l.inicializa();
		}
		if(command == "INSERIR"){
			int n;
			s >> n;
			for (int i = 0 ; i < n ; i++) {
                	        char *aux = new char[10000]; 
				file.getline(line,10000);
				strcpy(aux, line);
				l.adiciona(aux);
			}
		}
		if(command == "INSERIR_EM_ORDEM"){
			int n;
			s >> n;
			for (int i = 0 ; i < n ; i++) {
                	        char *aux = new char[10000]; 
				file.getline(line,10000);
				strcpy(aux, line);
				l.adicionaEmOrdem(aux);
			}
		}
		if(command == "MOSTRAR"){
			l.listar();
		}
/*		 if(command == "REMOVER"){
			l.retira();
                }*/
	}

}

int main(int argc, char** argv) {
		lerCasoDeTeste(argv[1]);
}
