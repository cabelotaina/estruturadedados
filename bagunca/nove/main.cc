#include <iostream>
using namespace std;


int  main(){ 
int n;
cin >> n;

int* v = new int[n];

for (int i = 0; i<n; i++)
	cin >> v[i];

int max = 0;
for(int i = 0; i < v+n; i++)
	max = (*i > max ? *i : max);

cout << max << endl;

delete[] v;
return 0;
	

}

max();

}

