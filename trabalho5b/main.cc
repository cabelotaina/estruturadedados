#include "pilha.h"
#include "tipoinfo.h"
#include <iostream>

using namespace std;

int main(void){


Pilha *a,*b,*c;
int n, i;

a = a->criaPilha();
b = b->criaPilha();
c = c->criaPilha();

cout << "Escreva a quantidade de peças" <<endl;
cin >> n;
a->tamanho=n;
--
parei aqui

funcao adiciona ta adicionando no lugar errado, instanciando dentro da funcao, e nao fora

for(i=0;i<n;i++) {
	TipoInfo t = new TipoInfo();
	ElementoPilha e = new ElementoPilha();
	a->adiciona(a, );
}

--
if (n%2==0){
	while(c->tamanho!=n){
		if(a->topo(a) > b->topo(a))
			b->adiciona(b,a->retira(a));
		else
			a->adiciona(a,b->retira(b));
		if(a->topo(a) < c->topo(c))
			a->adiciona(a,c->retira(c));
		else
			c->adiciona(c,a->retira(c));
		if(b->topo(b) < c->topo(c))
			c->adiciona(c,b->retira(b));
		else
			b->adiciona(b,c->retira(c));
	}
}
else{
	        while(c->tamanho!=n){
                if(a->topo(a) < c->topo(c))
                        a->adiciona(a,c->retira(c));
                else
                        c->adiciona(c,a->retira(a));
                if(a->topo(b) < b->topo(b))
                        b->adiciona(b,a->retira(a));
                else
                        a->adiciona(a,b->retira(b));
                if(b->topo(b) < c->topo(c))
                        c->adiciona(c,b->retira(b));
                else
                        b->adiciona(b,c->retira(c));

		}

	}
}
