#include <stdio.h>
#include "linkedstack.h"
using namespace std;
int main(){
	StackInfo i;
//		strcpy(i.nome,"Maurilio");
		i.telefone = 1932077080;
//		strcpy(i.email,"cabelotaina@gmail.com")
	LinkedStack s;
		s.push(&i);
	printf("%d\n", s.peek()->telefone);
	
}
