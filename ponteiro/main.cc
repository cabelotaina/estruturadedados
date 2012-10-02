#include <Lista.h>

Lista lista;

int main(){

	//.........
	if(command == "INSERIR"){
	char line[10000];
	file.getline(line, 10000);
	int size = strlen(line);
	char* myString = new char[size];
	lista.inserir(myString);
	}

}
