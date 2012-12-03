#include <stdio.h>
#include <string.h>

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

#include "dicionario.h"

using namespace std;

#define TIPO 3 //string

int main () {
  string line;
  ifstream myfile ("ceps.lista");
  if (myfile.is_open())
  {
    while ( myfile.good() )
    {
      	getline (myfile,line);
	
	string aux = line.substr(line.size()-8,line.size());
	char * cep;

	  cep = new char [aux.size()+1];
	  strcpy (cep, aux.c_str());
	 

	//cout << cep  << endl; //obtem o cep da linha
	
	string logradouro = line.substr(0,line.find("|"));
	//cout << "logradouro" <<  logradouro <<endl;

	adicionar(cep, TIPO, logradouro);
    }
    myfile.close();
  }

  else cout << "Unable to open file"; 

  return 0;
}
