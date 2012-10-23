#ifndef _CIDADE_
#define _CIDADE_

#include <string>
using namespace std;
class Cidade{

public:
	Cidade();
	~Cidade();
	
        string nome;
        string caracteristica;
	int h1;
	int h2;

      bool maior(Cidade *dado);
      bool menor(Cidade *dado);
      bool igual(Cidade *dado);
	


};
#endif
