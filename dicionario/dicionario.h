#ifndef _DICIONARIO_H_
#define _DICIONARIO_H_
#include "associacao.h"
#define NLINHAS 17
class Dicionario{

public:
	int i;
	Dicionario();
	Associacao *dados;

	void adicionar(char* cep ,int tipo , void* logradouro); // Adicionar um novo objeto, lendo a chave, o tipo e o objeto e adicionando-o.
	void imprimir(); 	//Imprimir todas as chaves. Esta impressão deverá ser da forma mais simples possível, sem se preocupar com a ordem.
			//Lembre-se de fazer um typecasting ao imprimir, depois que descobrir qual é o tipo do objeto apontado pelo ponteiro valor.
	void busca(char *chave);//Recuperar e imprimir um objeto a partir da chave. Lembre-se que em C++ para isto é necessário que, ao imprimir, primeiro seja verificado qual o tipo para que seja chamada a impressão correta.
	~Dicionario();
	int mod(int chave, int nlinhas);
};
#endif
