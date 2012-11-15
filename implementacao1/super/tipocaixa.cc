#include "tipocaixa.h"

TipoCaixa::TipoCaixa(){
	fila = new Fila;

}

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

bool TipoCaixa::adicionaCliente(TipoInfo *cliente){
	if (tamanhoFila() == 10){ 
		return false;
	}
	else{	
		fila->adiciona(cliente);
		clientes_atendidos++;
		return true;	
	}
}

void TipoCaixa::removerCliente(){
	fila->retira();
}

int TipoCaixa::tamanhoFila(){
	return fila->numero_de_clientes;

}/*
void TipoCaixa::inserirTipo(string tipo){
	this->tipo = tipo;
}

enum TipoCaixa::obterTipo(){
	return tipo;
}*/

TipoCaixa::~TipoCaixa(){}
