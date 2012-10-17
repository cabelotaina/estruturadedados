# include <iostream> 
# include "tipoinfo.h"
using namespace std;
 
int main(){

	TipoInfo entrada;

	entrada.nome = "maria";
	entrada.telefone = 32294070;
	entrada.data = time(0);
	char* data = ctime(&entrada.data);
  
	entrada.computador = "HAL";
	entrada.valor = 100;
	

   cout << entrada.nome << endl;
   cout << entrada.telefone << endl;
   cout << data;
   cout << entrada.computador << endl;
   cout << entrada.valor << endl;
}
