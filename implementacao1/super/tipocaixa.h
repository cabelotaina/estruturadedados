#ifndef _TIPO_CAIXA_
#define _TIPO_CAIXA_

#include <string>
#include "../caixa/fila.h"
using namespace std;
class TipoCaixa{
private:

	Fila *caixa;	

public:

	TipoCaixa();
	~TipoCaixa();
	
	//podemos usar uma string já que o comparador é pelo nome;
      	bool maior(TipoCaixa *dado);
	bool menor(TipoCaixa *dado);
	bool igual(TipoCaixa *dado);
	


};
#endif
