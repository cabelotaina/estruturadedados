
#include <fstream>
#include <stdio.h>
using namespace std

swap(int& um, int& dois){
	int& t = um;
	um = dois;
	dois = t;
}

escolhe(int& a, int& b, int& c){
	if(b>a){
		swap(a,b);
	}
	if(c>a){
		swap(c,a);
	}
	if(c>b){
		swap(b,c);
	}
}


int main(int argc, char** argv) {
	stringstream stream(argv[1]);
	int a;
	stream >> a
	printf("%d",a);


}
