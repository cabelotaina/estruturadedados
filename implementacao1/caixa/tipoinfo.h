#ifndef _TIPO_INFO_
#define _TIPO_INFO_
#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>
#define MAXPRODUTOS
using namespace std;

class TipoInfo{
public:
	TipoInfo();
	~TipoInfo();
	enum  tipo {FILAMENOR, FILAMENORNUMERODEPRODUTOS};
	enum forma_pagamento {CHEQUE,DINHEIRO};
	int total_compra;	

	void carrinho();

};
#endif
