// Funciona como uma interface para abstrair o tipo ElementoFila
//
#ifndef _ELEMENTOPILHA_H
#define _ELEMENTOPILHA_H
#include "tipoinfo.h"

class ElementoPilha{
public:
	ElementoPilha *proximo;
	TipoInfo *info;
};

#endif
