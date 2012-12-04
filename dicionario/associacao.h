#ifndef _ASSOCIACAO_
#define _ASSOCIACAO_


class Associacao {

public:
	char *chave; //cep neste caso
	int tipo;//tipo 1 int, 2 float, 3 string 
	void *valor; // logradouro neste caso
	Associacao *prox;

};
#endif
