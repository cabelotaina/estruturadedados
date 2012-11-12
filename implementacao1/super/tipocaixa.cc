#include "tipocaixa.h"

TipoCaixa::TipoCaixa(){}

bool TipoCaixa::igual(TipoCaixa *dado){
	return obterNome() == dado->obterNome();
}
bool TipoCaixa::menor(TipoCaixa *dado){
	return obterNome() < dado->obterNome();
}
bool TipoCaixa::maior(TipoCaixa *dado){
	return obterNome() > dado->obterNome();
}
void TipoCaixa::inserirNome(string nome){
        this->nome = nome;
}
string TipoCaixa::obterNome(){
        return nome;
}

/*void TipoCaixa::inserirTipo(enum tipo){
	this->tipo = tipo;
}

tipo* TipoCaixa::obterTipo(){
	return tipo;
}*/

TipoCaixa::~TipoCaixa(){}
