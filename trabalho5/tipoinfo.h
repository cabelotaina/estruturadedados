#ifndef _TIPO_INFO_
#define _TIPO_INFO_

#include <string>
using namespace std;
class TipoInfo{

public:
	TipoInfo();
	~TipoInfo();
	
        int telefone;
        string nome;

      bool maior(TipoInfo *dado);
      bool menor(TipoInfo *dado);
      bool igual(TipoInfo *dado);
	


};
#endif
