#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream>
#include <string.h>
#include <sstream>
#include <stdio.h>
#include <string.h>
#include "dicionario.h"

using namespace std;

#define TIPO 3 //string

int main () {


  Dicionario *h = new Dicionario;
  string line;
  ifstream myfile ("ceps.lista");
  if (myfile.is_open())
  {
    while ( myfile.eof() )
    {
      	getline (myfile,line);
	
	string aux = line.substr(line.size()-8,line.size());
	  //char *cep;
	  //strcpy(cep, aux.c_str());
	 

	//cout << aux  << endl; //obtem o cep da linha
	
	string logradouro = line.substr(0,line.find("|"));
	//cout << "logradouro" <<  logradouro <<endl;
	//cout<<line.size()<<endl;'
	h->adicionar((char*)aux.c_str(), TIPO, (void*)logradouro.c_str());
    }
    myfile.close();
  }

  else cout << "Unable to open file"; 

  return 0;
}
