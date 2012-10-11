#include <map>
#include <string>
#include <iostream>

using namespace std;

// Definiçao dos diferentes valores possivei para a string de entrada
static enum mapa {      empilhar, 
                          desempilhar, 
                          limpar,
			  mostrar,
			  sair };

// Mapa onde associamos uma string com o valor de um enum
static map<string, mapa> opcoes;

//entrado do usuario
static char entrada[_MAX_PATH];
// Inicializaçao
static void Initialize();

int main(int argc, char* argv[])
{
  // inicializando o mapa de string
  Initialize();
  // Iterando sobre os comandos do usuario
  while(1)
  {
    // Pegando a comando do usuario
    cout << "Entre com uma string, escreva SAIR para deixar o programa";
    cout.flush();
    cin.getline(entrada, _MAX_PATH);
    // obtendo a mudança
    switch(opcoes[entrada])
    {
      case empilhar:
        cout << "Empilhando" << endl;
        break;
      case desempilhar:
        cout << "Desempilhando" << endl;
        break;
      case limpar:
        cout << "Limpando" << endl;
        break;
      case mostrar:
        cout << "Mostrando" << endl;
        break;
      case sair:
        cout << "Saindo! "
             << "O programa esta sendo parado." << endl;
        return(0);
      default:
        cout << "'" << entrada 
  << "' é um valor invalido. opcoes contém "
             << opcoes.size() 
             << " entradas." << endl;
        break;
    }
  }
  return 0;
}
void Initialize()
{
  opcoes["EMPILHAR"] = empilhar;
  opcoes["DESEMPILHAR"] = desempilhar;
  opcoes["LIMPAR"] = limpar;
  opcoes["MOSTRAR"] = mostrar;
  opcoes["SAIR"] = sair;
  cout << "O mapa contem " 
       << opcoes.size() 
       << " opçoes." << endl;
}
