#include "fila.h"

#include <iostream>
// biblioteca padrão I/O de C++
using namespace std;

int main(){

	Fila *f = new Fila;
	for(int i = 0; i < 10; i++){
		TipoInfo *info = new TipoInfo;
		f->adiciona(info);
	}
	TipoInfo *info = new TipoInfo;
	int var = f->adiciona(info);
	cout << var;

}
