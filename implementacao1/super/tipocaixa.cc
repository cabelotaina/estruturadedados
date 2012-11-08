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

TipoCaixa::~TipoCaixa(){}
