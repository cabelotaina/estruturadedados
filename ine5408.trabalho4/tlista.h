#ifndef TLISTA_H
#define TLISTA_H


#define ERROLISTACHEIA -1
#define ERROLISTAVAZIA -2
#define ERROPOSICAO -3

#define MAX 100

class tLista{
private:
	char *_lista[MAX];
	int _ultimo;


public:

tLista();
~tLista();
void inicializa();
void destroi();

bool cheia();
bool vazia();
bool contem(char *palavra);
bool igual(char *palavra1, char *palavra2);
bool maior(char *palavra1, char *palavra2);
bool menor(char *palavra1, char *palavra2);

int listar();
int posicaoNaLista(char *palavra);

int adiciona(char *palavra);
int adicionaNaPosicao(char *palavra, int posicao);
int adicionaEmOrdem(char *palavra); 

int retira(char *palavra_fora);
int retiraDaPosicao(int posicao, char *palavra_fora);
int retiraMembro(char *palavra, char *palavra_fora);
};
#endif
