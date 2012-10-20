#include "cidade.h"

Cidade::Cidade(){}

bool Cidade::igual(Cidade *dado){
	return nome == dado->nome;
}
bool Cidade::menor(Cidade *dado){
	return nome < dado->nome;
}
bool Cidade::maior(Cidade *dado){
	nome > dado->nome;
}

Cidade::~Cidade(){}
