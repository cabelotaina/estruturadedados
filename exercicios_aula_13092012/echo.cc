#include <fstream>
#include <iostream>

using namespace std;

int main() {
	ifstream file("caso");

	char line[256];
	file.getline(line, 256);	
}
