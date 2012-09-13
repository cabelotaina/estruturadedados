#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	ifstream file(argv[1]);

	char line[256];
	file.getline(line, 256);
	while(!file.eof()) {
		cout << line <<endl;
		file.getline(line, 256);
	}
}
