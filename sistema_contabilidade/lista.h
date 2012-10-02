#ifndef LISTA_H
#define LISTA_H

#define ERROLISTACHEIA -1
#define ERROLISTAVAZIA -2
#define ERROPOSICAO -3

#define MAX 100


class Lista{
private:
	int _ultimo;
	int _lista[MAX];


public:

Lista();
~Lista();
int posicaoNaLista(int dado);
bool contem(int dado);
int igual(int dado1,int dado2);
int maior(int dado1,int dado2);
int menor(int dado1,int dado2);
void inicializa();

// é o mesmo que o destrutor
void destroi();

int adiciona(int dado);
int retira();
int adicionaNaPosicao(int dado, int posicao);
int removerDaPosicao(int);
int inserirEmOrdem(int dado); 
bool cheia();
bool vazia();
int removerMembro(int);
};

#endif

