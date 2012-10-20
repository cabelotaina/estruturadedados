#include "pilha.h"
#include "iostream"

using namespace std;

int main(void){


Pilha* a,b,c;
int n;

a = a->criaPilha(a);
b = b->criaPilha(b);
c = c->criaPilha(c);

cout << "Escreva a quantidade de peças" <<endl;
cin >> n;
a->tamanho=n;
if (n%2==0){
	while(c->tamanho!=n){
		if(a->topo < b->topo)
			b->adiciona(b,a->retira);
		else
			a->adiciona(a,b->retira);
		if(a->topo < c->topo)
			a->adiciona(a,c->retira);
		else
			c->adiciona(c,a->retira);
		if(b->topo < c->topo)
			c->adiciona(c,b->retira);
		else
			->adiciona(b,c->retira);
	}
else{
	        while(c->tamanho!=n){
                if(a->topo < c->topo)
                        a->adiciona(a,c->retira);
                else
                        c->adiciona(c,a->retira);
                if(a->topo < b->topo)
                        b->adiciona(b,a->retira);
                else
                        a->adiciona(a,b->retira);
                if(b->topo < c->topo)
                        c->adiciona(c,b->retira);
                else
                        b->adiciona(b,c->retira);

	}

}
