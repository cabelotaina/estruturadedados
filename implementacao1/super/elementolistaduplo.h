#ifndef ELEMENTOLISTADUPLO_H
#define ELEMENTOLISTADUPLO_H
#include "tipocaixa.h"

class ElementoListaDuplo{

public:
	ElementoListaDuplo *proximo;
	ElementoListaDuplo *anterior;
	TipoCaixa *info;
};

#endif
