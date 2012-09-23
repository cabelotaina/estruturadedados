#ifndef PILHA_H
#define PILHA_H

#define MAXPILHA 30
#define ERROPILHACHEIA -1
#define ERROPILHAVAZIA -2

class Pilha{

private:

	int topo;
	int pilha[MAXPILHA];

public:
	Pilha();
	~Pilha();
	void inicializa();
	int insere(int dado);
	int remove();
	int topoPilha();
	bool cheia();
	bool vazia();
	int mostra();

};

#endif
