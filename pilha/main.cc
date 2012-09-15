#include <iostream>
#include <cstdlib>
using namespace std;

int main (void){
    int a, b, c, operacao;
    cout <<"Digite o 1o valor: ";
    cin >> a;
    cin.ignore ();
    cout <<"Digite o 2o valor: ";
    cin >> b;
    cin.ignore ();

    cout <<"Que operacao deseja realizar?\n\t1. Empilhar \t2.Desenpilhar\t3.Limpar\t4.Mostrar Pilha\t5.Sair do Programa\n\n=>";
    cin >> operacao;
    cin.ignore ();
    system ("cls");
    switch (operacao){
        case 1:
            c=a+b;
            cout <<a<<" + "<<b<<" = "<<c<<"\n\n";
            break;
        case 2:
            c=a-b;
            cout <<a<<" - "<<b<<" = "<<c<<"\n\n";
            break;
        case 3:
            c=a*b;
            cout <<a<<" * "<<b<<" = "<<c<<"\n\n";
            break;
        case 4:
            c=a/b;
            cout <<a<<" / "<<b<<" = "<<c<<"\n\n";
            break;
    }
    system ("pause");
    return EXIT_SUCCESS;
}
