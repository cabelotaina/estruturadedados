//============================================================================
// Name        : TabelaHash.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
using namespace std;

class CEP {
private:
	char *logradouro;
	int cep;
public:
	CEP(char *chave, int valor) {
		logradouro = chave;
		cep = valor;
	}
	CEP() {
		}
	char* getChave() {
		return logradouro;
	}
	int getValor() {
		return cep;
	}
};
//n = 16.857 - 20.000
//b =50
//s = 20000/50 = 400

const int b = 50;
const int s = 400;
class HashMap {

private:
	CEP *table[50*400];
public:
	HashMap() {
		for (int i = 0; i < b; i++){
			for (int j = 0; j < s; j++){
				table[i][j] = NULL;
			}
		}
	}

	int get(char* key) {

		int hash = funcaoHash(key)*400;

		while (table[hash] != NULL && table[hash]->getChave() != key)

			hash = (hash + 1) % b;

		if (table[hash] == NULL)

			return -1;

		else

			return table[hash]->getValor();

	}

	void put(char* key, int value) {

		int hash = funcaoHash(key);

		while (table[hash] != NULL && table[hash]->getChave() != key)

			hash = (hash + 1) % b;

		if (table[hash] != NULL)

			delete table[hash];

		table[hash][0] = new CEP(key, value);

	}

	int funcaoHash(char *chave){//by andré

	}

	~HashMap() {

		for (int i = 0; i < b; i++)

			if (table[i] != NULL)

				delete table[i];

		delete[] table;

	}

};

int main() {
	char a = 'b';
	cout << int(a) << endl; // prints !!!Hello World!!!
	return 0;
}
