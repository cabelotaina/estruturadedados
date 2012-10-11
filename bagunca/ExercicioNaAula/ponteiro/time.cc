struct data{
 	double x[50][50][50][50];
}

void soma(contst data& d){
	 int sum = 0;
	for(int i=0; i<50; i++)
	for(int j=0; i<50; i++)
	for(int k=0; i<50; i++)
		sum += d.x[i][j][k];
}

int main(){
	data d;

	for(int i=0; i<10000; i++)
		soma(d);
}



