#ifndef _ASSOCIACAO_
#define _ASSOCIACAO_

//tipo 1 int, 2 float, 3 string 
class Associacao {

public:
	char *chave;
	int tipo;
	void *valor;
	Associacao *prox;

};
#endif
