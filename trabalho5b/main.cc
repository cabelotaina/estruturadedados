// FILE: main.cc
// TITLE: main
// SUBMITTED BY: Maurilio Atila Carvalho de Santana, Fristtram Helder Fernandes e Lauro Costa Borges
// Todo o código é meu, excepto quando creditado a outros.
// FOR COURSE: INE5408
// DUE DATE: 23 de Outubro de 2012
//
// PURPOSE:
// Implementa torres de Hanoi com 3 torres, utilizando pilha com memoria
// alocada dinamicamente como estrutura de dado
// 
#include "tipoinfo.h"
#include "elementopilha.h"
#include "pilha.h"
#include <iostream>
#include <cstring>

using namespace std;


int main(void){


Pilha *a,*b,*c, *copiaa, *copiab, *copiac;
int n, i;

a = a->criaPilha();
b = b->criaPilha();
c = c->criaPilha();
copiaa = copiaa->criaPilha();
copiab = copiab->criaPilha();
copiac = copiac->criaPilha();

cout << "Escreva a quantidade de pecas: ";
cin >> n;
for(i=0;i<n;i++) {
	TipoInfo *dado = new TipoInfo();
	ElementoPilha *e = new ElementoPilha();
	dado->disco = i+1;
	cout << "Adicionando disco numero " << i+1 << ".. " <<endl;
	a->adiciona(a, e, dado);
}
	cout << n << " discos adicionados." <<endl;
if (n%2==0){
	while(c->tamanho!=n){
		if(a->topo(a) > b->topo(b)) {
			ElementoPilha *e1 = new ElementoPilha();
			TipoInfo *d1 = new TipoInfo();
			a->retira(a,d1);
			b->adiciona(b,e1,d1);
		}
		else {
			ElementoPilha *e2 = new ElementoPilha();
			TipoInfo *d2 = new TipoInfo();
			b->retira(b, d2);
			a->adiciona(a,e2,d2);
		}
		if(a->topo(a) < c->topo(c)) {
			ElementoPilha *e3 = new ElementoPilha();
			TipoInfo *d3 = new TipoInfo();
			c->retira(c, d3);
			a->adiciona(a,e3,d3);
		}
		else {
			ElementoPilha *e4 = new ElementoPilha();
			TipoInfo *d4 = new TipoInfo();
			a->retira(a, d4);
			c->adiciona(c,e4,d4);
		}
		if(b->topo(b) < c->topo(c)) {
			ElementoPilha *e5 = new ElementoPilha();
			TipoInfo *d5 = new TipoInfo();
			b->retira(b, d5);
			c->adiciona(c,e5,d5);
		}
		else {
			ElementoPilha *e6 = new ElementoPilha();
			TipoInfo *d6 = new TipoInfo();
			c->retira(c, d6);
			b->adiciona(b,e6,d6);
		}
	}
}
else{
	        while(c->tamanho!=n){
                if(a->topo(a) < c->topo(c)) {
			ElementoPilha *e7 = new ElementoPilha();
			TipoInfo *d7 = new TipoInfo();
			c->retira(c, d7);
                        a->adiciona(a,e7,d7);
		}
                else {
			ElementoPilha *e8 = new ElementoPilha();
			TipoInfo *d8 = new TipoInfo();
			a->retira(a, d8);
                        c->adiciona(c,e8,d8);
		}
                if(a->topo(a) < b->topo(b)) {
			ElementoPilha *e9 = new ElementoPilha();
			TipoInfo *d9 = new TipoInfo();
			a->retira(a, d9);
                        b->adiciona(b,e9,d9);
		}
                else {
			ElementoPilha *e10 = new ElementoPilha();
			TipoInfo *d10 = new TipoInfo();
			b->retira(b, d10);
                        a->adiciona(a,e10,d10);
		}
                if(b->topo(b) < c->topo(c)) {
			ElementoPilha *e11 = new ElementoPilha();
			TipoInfo *d11 = new TipoInfo();
			b->retira(b, d11);
                        c->adiciona(c,e11,d11);
		}
                else {
			ElementoPilha *e12 = new ElementoPilha();
			TipoInfo *d12 = new TipoInfo();
			c->retira(c, d12);
                        b->adiciona(b,e12,d12);
		}

		}

	}
}
