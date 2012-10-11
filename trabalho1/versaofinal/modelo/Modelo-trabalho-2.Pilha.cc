#define MAXPILHA 100;

classe Pilha {

public:

	Pilha();
	virtual ~Pilha();

	bool estaVazia() const;
	bool estaCheia() const;
	int tamanho() const;

	int inserir(ElementoPilha membro);
        int remover();
        int topo() const;
	void limpar();

private:

	int _fila();
	int _ultimo;

};

#endif
