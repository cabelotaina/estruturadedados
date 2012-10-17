
#ifndef _TIPOINFO_
#define _TIPOINFO_
//TipoInfo: 
//nome do solicitante, 
//telefone, 
//data da entrega (inserida automaticamente), 
//modelo do computador e 
//valor do conserto


#include <ctime>
#include <string>

using namespace std;
	
class TipoInfo{
	public:

		string nome;
		int telefone;
		time_t data;
		string computador;
		int valor;

};

#endif
