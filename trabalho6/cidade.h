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

      bool maior(Cidade *dado);
      bool menor(Cidade *dado);
      bool igual(Cidade *dado);
	


};
#endif
