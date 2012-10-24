#ifndef ELEMENTOLISTADUPLO_H
#define ELEMENTOLISTADUPLO_H
#include "cidade.h"

class ElementoListaDuplo{
public:
	ElementoListaDuplo *proximo;
	ElementoListaDuplo *anterior;
	Cidade *parada;
};

#endif
