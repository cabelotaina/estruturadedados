// FILE: main.cc
// TITLE: main
// SUBMITTED BY: Maurilio Atila Carvalho de Santana, Fristtram Helder Fernandes e Lauro Costa Borges
// Todo o código é meu, excepto quando creditado a outros.
// FOR COURSE: INE5408
// DUE DATE: 25 de Setembro 2012
//
// PURPOSE:
// Este programa implementa executavel da fila, que funciona exatamente como
// uma fila no mundo real, onde podemos inserir elementos apenas no topo, 
// e podemos retirar os elementos apenas no inicio. Ou seja esta sobre o modelo
// FIFO - First in First out.
// 
// 
//  OVERALL METHOD:
// A lista geral de tarefas é:
// 
// 1. Entre com valores, ate o maximo de 100 valores.
// 2. Liste os valores.
// 3. Veja o valor que esta no inicio.
// 4. Retirar valores da fila.
//
// CALL TO:
//  insere
//  retira
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
// 5.5.1   Inicializa o objeto com identificador f do tipo fila.
// 5.6     Testa se command é igual a string "INSERIR".
// 5.6.1   Cria uma variavel do tipo inteiro com identificado n.
// 5.6.2   Obtem o numero inteiro de stream e transfere para a variavel n.
// 5.6.3   Cria um identificador como nome ef de um objeto do tipo elemento Fila.
// 5.6.4.1 Loop: Cria a variavel local i do tipo inteiro e atribui 0.
// 5.6.4.2 Obter linha e guarda no arranjo line de 40 bytes.
// 5.6.4.3 XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
// 5.6.4.4 Passa a variavel ef como paramentro para a funçao incluir.     
// 5.7     Testa se command é igual a string "MOSTRAR"
// 5.7.1   Chama a funçao para mostrar, retornando os valores da fila.
// 5.8	   Testa se command é igual a string  "REMOVER"
// 5.8.1   retira o valor do inicio da fila usando.


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
			//if(f.retira()==-2){
			//	printf("Fila Vazia.");
			//}
			f.retira();
                }
	}
}
