

class InfoLista{
public:
	~InfoLista();
	char* nome;
	char* telefone;

};

class ElementoLista{

public:
	ElementoLista();
	~ElementoLista();
	ElementoLista* proximo;
	InfoLista* info;
};

class Lista{
public:
	Lista();
	~Lista();
private:
	int tamanho;
	ElementoLista* _primeiro;

};

InfoLista::~InfoLista(){
	delete nome;
	delete telefone;
}

ElementoLista:: ~ElementoLista(){
	//delete info;
	//delete proximo;	
}

Lista:: ~Lista(){
	//delete _primeiro;
	ElementoLista* i = _primeiro;
	ElementoLista* paraDeletar;
	while(i){
		delete i->info;
		paraDeletar = i;
		i = i-> proximo;
		delete paraDeletar;
	}	
}
