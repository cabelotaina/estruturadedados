//
// ### Class ElementoFila
// Funciona como uma interface usada por fila.h para abstrair o tipo ElementoFila.
// 
#ifndef ELEMENTO_PILHA_H
#define ELEMENTO_PILHA_H

// cria constante com valor 40
#define MAXC 40

class ElementoFila{

public:
// construtor permitindo passagem de ponteiro para o elemento
	ElementoFila(char *data);
//Desconstrutor
	~ElementoFila*();
private:
// Cria um arranjo de chars com 40 bytes
	char data[MAXC];
};
#endif
