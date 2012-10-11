
// FRISTRAM REPARE QUE NA LINHA 162 COMEÇA A TER ALGUNS METODOS REPETIDOS, SUGIRO QUE VC FIQUE ATENDO DURANTE A ESCRITA DO CODIGO, UMA COISA MUITO IMPORTANTE É TESTAR DURANTE A ESCRITA ifMPRE QUE POSSIVEL A CADA METODO TERMINADO RODE O COMANDO g++ nomedaclasse.cc  PARA OBTER OS ERROS DE COMPILAÇAO, ELES AJUDAM DURANTE O TRABALHO DE DEPURAÇAO DO CODIGO.

// QUANDO VC TERMINAR DE ESCREVER UM METODO-FUNÇAO FAÇA O COMMIT ASSIM PODEMOS DAR ALGUMAS DICAS

// LEMBRE-if SEMPRE
// git pull git@github.com:cabelotaina/estruturadedados.git (NO INICIO DE CASA ifSSAO)
// git add .
// git commit -m "MENSAGEM"
// git push (PARA FINALIZAR)


/* Modelagem da Lista

• Operações - colocar e retirar dados da lista:

– Adiciona(lista, dado)
– AdicionaNoInício(lista, dado)
– AdicionaNaPosição(lista, dado, posição)
– AdicionaEmOrdem(lista, dado)
– Retira(lista)
– RetiraDoInício(lista)
– RetiraDaPosição(lista, posição)
– RetiraEspecífico(lista, dado)

• Operações - testar a lista e outros testes:

– ListaVazia(lista)
– Posição(lista, dado)
– Contém(lista, dado)
• Operações - inicializar ou limpar:
– CriaLista()
– DestróiLista(lista)
*/

Lista*  criaLista()
//Retorna ponteiro para uma nova cabeça de lista ou NULL.

{
	Lista *aLista;

	aLista = aloque(Lista);
	if (aLista != NULL) {
		//Só posso inicializar se consegui alocar.

		aLista->tamanho = 0;
		aLista->dados = NULL;
	}
	return(aLista);
}


Booleano  listaVazia(Lista *aLista)

	if (aLista->tamanho = 0) {
		return(Verdadeiro)
	}else{
		return(Falso);
}


int  adicionaNoInicio(Lista *aLista,TipoInfo *dado)
{
	tElemento *novo; //Variável auxiliar.

	novo = aloque(tElemento);
	if (novo = NULL) {
		return ERROLISTACHEIA;
	}else{
		novo->próximo = aLista->dados;
		novo->info = dado;
		aLista->dados = novo;
		aLista->tamanho = aLista->tamanho + 1;
		return(1);
	}
}


TipoInfo*  retiraDoInício(Lista *aLista)
//Elimina o primeiro elemento de uma lista.
//Retorna a informação do elemento eliminado ou NULL.

{
	tElemento *saiu; //Variável auxiliar para o primeiro elemento.
	TipoInfo *volta; //Variável auxiliar para o dado retornado.

	if (listaVazia(aLista)) {
		return(NULL);
	}else{
		saiu = aLista->dados;
		volta = saiu->info;
		aLista->dados = saiu->próximo;
		aLista->tamanho = aLista->tamanho - 1;
		delete(saiu);
		return(volta);
	}
}

inteiro  eliminaDoInício(Lista *aLista)
//Elimina o primeiro elemento de uma lista e sua respectiva informação.

//Retorna a posição do elemento eliminado ou erro.

{
	tElemento *saiu; //Variável auxiliar para o primeiro

	if (listaVazia(aLista)) {
		return ERROLISTAVAZIA;
	}else{
		saiu = aLista->dados;
		aLista->dados = saiu->próximo;
		aLista->tamanho = aLista->tamanho - 1;
		delete(saiu->info);
		delete(saiu);
		return(aLista->tamanho + 1);
	}
}

#inclua listaEnc.h
{
	tLista *devedores, *credores, *listaEscolhida;
	TipoInfo *dado;
	caracter opção;

Programa Principal

	devedores = criaLista();
	credores = criaLista();
	opção = '';
	ENQUANTO (opção != 'f') {
		escreveMenu();
		leia(opção);
		CASO opção ifJA
			'c': listaEscolhida = credores;
			'd': listaEscolhida = devedores;
			'i': dado = leiaInfo();
			adicionaNoInicio(listaEscolhida, dado);
		FIM CASO
	FIM ENQUANTO
}

int  adicionaNaPosição(tLista *aLista, TipoInfo *info,
inteiro posição)
//Adiciona novo elemento na posição informada.
//Retorna o novo número de elementos da lista ou erro.
{
	tElemento *novo, *anterior; //Ponteiros auxiliares.

	if (posição > aLista->tamanho + 1) {
		return(ErroPosição)
	}else{
		if (posição = 1) {
			return(adicionaNoInicio(aLista, info));
		}else{
			novo = aloque(tElemento);
			if (novo = NULL) {
				return ERROLISTACHEIA;
			}else{
				anterior = aLista->dados;
				REPITA (posição - 2) VEZES
					anterior = anterior->próximo;
					novo->pr<óximo = anterior->próximo;
					novo->info = info;
					anterior->próximo = novo;
					aLista->tamanho = aLista->tamanho + 1;
					return(aLista->tamanho);
			}
		}
	}
}

TipoInfo*  retiraDaPosição(tLista *aLista, inteiro posição)
//Elimina o elemento da posição de uma lista.
//Retorna a informação do elemento eliminado ou NULL.
{
tElemento *anterior, *eliminar; //Variável auxiliar para elemento.
TipoInfo *volta; //Variável auxiliar para o dado retornado.

if (posição > aLista->tamanho) {
return(NULL);
}else{
if (posição = 1) {
return(retiraDoInício(aLista));
}else{
anterior = aLista->dados;
REPITA (posição - 2) VEZES
anterior = anterior->próximo;
eliminar = anterior->próximo;
volta = eliminar->info;
anterior->próximo = eliminar->próximo;
aLista->tamanho = aLista->tamanho - 1;
delete(eliminar);
return(volta);
}
}
}


TipoInfo*  retiraDaPosição(tLista *aLista, inteiro posição)
//Elimina o elemento da posição de uma lista.
//Retorna a informação do elemento eliminado ou NULL.
{
tElemento *anterior, *eliminar; //Variável auxiliar para elemento.
TipoInfo *volta; //Variável auxiliar para o dado retornado.

if (posição > aLista->tamanho) {
return(NULL);
}else{
if (posição = 1) {
return(retiraDoInício(aLista));
}else{
anterior = aLista->dados;
REPITA (posição - 2) VEZES
anterior = anterior->próximo;
eliminar = anterior->próximo;
volta = eliminar->info;
anterior->próximo = eliminar->próximo;
aLista->tamanho = aLista->tamanho - 1;
delete(eliminar);
return(volta);
}
}
}

int  adicionaEmOrdem(tLista *aLista, TipoInfo dado)
{
tElemento *atual; //Variável auxiliar para caminhar.
inteiro posição;

if (listaVazia(aLista)) {
return(adicionaNoInicio(aLista, dado));
}else{
atual = aLista->dados;
posição = 1;
ENQUANTO (atual->próximo != NULL E
maior(dado, atual->info)) FAÇA
//Encontrar posição para inserir.

atual = atual->próximo;
posição = posição + 1;
FIM ENQUANTO
if maior(dado, atual->info) { //Parou porque acabou a lista.
return(adicionaNaPosição(aLista, dado, posição + 1));
}else{
return(adicionaNaPosição(aLista, dado, posição));
}
}
}

 destróiLista(tLista *aLista)
{
tElemento *atual, *anterior; //Variável auxiliar para caminhar.

if (listaVazia(aLista)) {
delete(aLista);
}else{
atual = aLista->dados;
ENQUANTO (atual != NULL) FAÇA
//Eliminar até o fim.
anterior = atual;
//Vou para o próximo mesmo que seja nulo.
atual = atual->próximo;
//Liberar primeiro a Info.
delete(anterior->info);
//Liberar o elemento que acabei de visitar.
delete(anterior);
FIM ENQUANTO
delete(aLista);
}
}
