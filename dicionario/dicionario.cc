#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include "dicionario.h"
using namespace std;

Dicionario::Dicionario(){}

void Dicionario::adicionar(char *cep, int tipo, void *logradouro){
	stringstream stream(cep); // aux é do tipo string
	int aux;
	stream >> aux;
	cout << aux <<endl;
}
Dicionario::~Dicionario(){}
