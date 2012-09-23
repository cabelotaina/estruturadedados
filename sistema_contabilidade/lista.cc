#include "lista.h"
#define MAX 100
class ListaContabil{

private:

        Lista lancamentos[MAX];
        int ultimo;
public:

        ListaContabil(){
        ultimo = -1;
        };
        ~ListaContabil(){
	};
        int inserir(int valor){
	if()
		ultimo++;
		lancamentos[ultimo] = valor;
	};
        int inserirNaPosicao(int p);
        inserirEmOrdem(int valor);
        remover();
        removerDaPosicao(int p);
        removerMembro(int valor);
        int remover();
        int inserirOrdem();
	bool listaVazia();
	bool listaCheia(){
		if(ultimo == MAX+1){
			return true;
		}
		return false;
	};
}

