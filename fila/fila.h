#ifndef FILA_H
#define FILA_H
#define MAXFILA 100
#include "elementofila.h"

#define ERROFILACHEIA -1
#define ERROFILAVAZIA -2

class Fila{

private:
	ElementoFila _fila[MAXFILA];
	int _ultimo;
public:

	Fila();
	~Fila();

	int inclui(ElementoFila dado);
	int retira();
	int ultimo();
	bool cheia();
	bool vazia();
	void inicializa();
	void mostra();
};
#endif
