#ifndef _TIPO_INFO_
#define _TIPO_INFO_
#define MAXPRODUTOS
using namespace std;

class TipoInfo{
public:
	TipoInfo(bool tipo, bool cheque);
	//TipoInfo();
	~TipoInfo();

	// false - para menor fila;
	// true - para fila com o menor numero de produtos; 
	bool tipo;

	// false - pagar em dinheiro;
	// true - pagar com cheque;
	bool cheque;
	int saida;

	int total_compra;
	int total_itens;	
	void carrinho();
	void tempo(int saida);
	int tempoSaida();

};
#endif
