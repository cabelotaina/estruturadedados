#ifndef _TIPO_INFO_
#define _TIPO_INFO_
#include <iostream>
#include <ctime>
#include <string>
using namespace std;

class TipoInfo{
public:
	string nome;
	int telefone;
	time_t data;// = time(0);
	//char* data = ctime(aux);
	string computador;
	double valor;


};
#endif
