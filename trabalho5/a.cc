Lista*  criaLista(){
	Lista *aLista;

	aLista = aloque(Lista);
	if (aLista != NULL) {

		aLista->tamanho = 0;
		aLista->dados = NULL;
	}
	returnaLista;
}


Booleano  listaVazia(Lista *aLista)

	if (aLista->tamanho = 0) {
		return(Verdadeiro)
	}else{
		return false;
}


int  adicionaNoInicio(Lista *aLista,TipoInfo *dado)
{

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

{

	if (listaVaziaaLista) {
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


{

	if (listaVaziaaLista) {
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
{

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
{

if (posição > aLista->tamanho) {
return(NULL);
}else{
if (posição = 1) {
return(retiraDoInícioaLista);
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
{

if (posição > aLista->tamanho) {
return(NULL);
}else{
if (posição = 1) {
return(retiraDoInícioaLista);
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
inteiro posição;

if (listaVaziaaLista) {
return(adicionaNoInicio(aLista, dado));
}else{
atual = aLista->dados;
posição = 1;
ENQUANTO (atual->próximo != NULL E
maior(dado, atual->info)) FAÇA

atual = atual->próximo;
posição = posição + 1;
FIM ENQUANTO
return(adicionaNaPosição(aLista, dado, posição + 1));
}else{
return(adicionaNaPosição(aLista, dado, posição));
}
}
}

 destróiLista(tLista *aLista)
{

if (listaVaziaaLista) {
deleteaLista;
}else{
atual = aLista->dados;
ENQUANTO (atual != NULL) FAÇA
anterior = atual;
atual = atual->próximo;
delete(anterior->info);
delete(anterior);
FIM ENQUANTO
deleteaLista;
}
}
