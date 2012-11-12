TipoInfo::TipoInfo(){}
void carrinho(){

	//adicionar os produtos e os preços a cada produto;
	int total_itens = rand() % 100 + 2;
	for (int i = 0; i < total_itens;i++){
		int valor = rand() % 90 + 1;
		total_compra += valor;
	}
		

}
TipoInfo::~TipoInfo(){}
