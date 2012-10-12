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
		return true
	}else{
		return false;
}


int  adicionaNoInicio(Lista *aLista,TipoInfo *dado){
	
	novo = aloque(tElemento);
	if (novo = NULL) {
		return ERROLISTACHEIA;
	}
	else{
		novo->proximo = aLista->dados;
		novo->info = dado;
		aLista->dados = novo;
		aLista->tamanho = aLista->tamanho + 1;
		return 1;
	}
}


TipoInfo*  retiraDoInicio(Lista *aLista)

{

	if (listaVaziaaLista) {
		return(NULL);
	}else{
		saiu = aLista->dados;
		volta = saiu->info;
		aLista->dados = saiu->proximo;
		aLista->tamanho = aLista->tamanho - 1;
		delete (saiu);
		return(volta);
	}
}

inteiro  eliminaDoInicio(Lista *aLista)


{

	if (listaVaziaaLista) {
		return ERROLISTAVAZIA;
	}else{
		saiu = aLista->dados;
		aLista->dados = saiu->proximo;
		aLista->tamanho = aLista->tamanho - 1;
		delete (saiu->info);
		delete (saiu);
		return(aLista->tamanho + 1);
	}
}

int  adicionaNaPosicao(TipoInfo *dado, int posicao){
	if (posicao > aLista->tamanho + 1) {
		return ERROPOSICAO;
	}else{
		if (posicao = 1) {
			return(adicionaNoInicio(&dado));
		}else{
			novo = new TipoInfo;
			if (novo = NULL) {
				return ERROLISTACHEIA;
			}else{
				anterior = aLista->dados;
				for (posicao - 2) {
					anterior = anterior->proximo;
					novo->proximo = anterior->proximo;
					novo->info = info;
					anterior->proximo = novo;
					aLista->tamanho = aLista->tamanho + 1;
					return aLista->tamanho;
			}
		}
	}
}

TipoInfo*  retiraDaPosicao(tLista *aLista, inteiro posicao)
{

if (posicao > aLista->tamanho) {
return(NULL);
}else{
if (posicao = 1) {
return retiraDoInicioaLista();
}else{
anterior = aLista->dados;
for (posicao - 2) {
anterior = anterior->proximo;
eliminar = anterior->proximo;
volta = eliminar->info;
anterior->proximo = eliminar->proximo;
aLista->tamanho = aLista->tamanho - 1;
delete (eliminar);
return(volta);
}
}
}


TipoInfo*  retiraDaPosicao(tLista *aLista, inteiro posicao)
{

if (posicao > aLista->tamanho) {
return(NULL);
}else{
if (posicao = 1) {
return retiraDoInicioaLista();
}else{
anterior = aLista->dados;
for (posicao - 2) {
anterior = anterior->proximo;
eliminar = anterior->proximo;
volta = eliminar->info;
anterior->proximo = eliminar->proximo;
aLista->tamanho = aLista->tamanho - 1;
delete (eliminar);
return(volta);
}
}
}

int  adicionaEmOrdem(TipoInfo *dado){
int posicao;

	if (listaVazia()) {
		return adicionaNoInicio(&dado);
	}
	else{
		atual = aLista->dados;
		posicao = 1;
		while (atual->proximo != NULL && maior(&dado, &atual->info)){
			atual = atual->proximo;
			posicao = posicao + 1;
		}
	return adicionaNaPosicao( &dado, posicao + 1);
	}
return adicionaNaPosicao(&dado, posicao);
}


 destroiLista(tLista *aLista)
{

if (listaVaziaaLista) {
delete  aLista;
}else{
atual = aLista->dados;
while (atual != NULL) FACA
anterior = atual;
atual = atual->proximo;
delete (anterior->info);
delete (anterior);
}
delete  aLista;
}
}
