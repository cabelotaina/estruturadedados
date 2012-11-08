#include "tipocaixa.h"

TipoCaixa::TipoCaixa(){}

bool TipoCaixa::igual(TipoCaixa *dado){
	return caixa->obterNome() == dado->caixa->obterNome();
}
bool TipoCaixa::menor(TipoCaixa *dado){
	return caixa->obterNome() < dado->caixa->obterNome();
}
bool TipoCaixa::maior(TipoCaixa *dado){
	return caixa->obterNome() > dado->caixa->obterNome();
}
void TipoCaixa::inserirNome(string nome){
        this->nome = nome;
}
string TipoCaixa::obterNome(){
        return nome;
}

void TipoCaixa::inserirTipo(enum tipo){
	this->tipo = tipo;
}

tipo* TipoCaixa::obterTipo(){
	return tipo;
}

TipoCaixa::~TipoCaixa(){}
