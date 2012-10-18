#include "tipoinfo.h"

TipoInfo::TipoInfo(){}

bool TipoInfo::igual(TipoInfo *dado){
	return nome == dado->nome;
}
bool TipoInfo::menor(TipoInfo *dado){
	return nome < dado->nome;
}
bool TipoInfo::maior(TipoInfo *dado){
	nome > dado->nome;
}

TipoInfo::~TipoInfo(){}
