#include "gastosf.h"

Gastosf::Gastosf(float valor, string descricao,Data d,bool p){
	setValor(valor);
	setDescricao(descricao);
	setData(d);
	setPago(p);
}

void Gastosf::setPago(bool p){
	pago=p;
}

bool Gastosf::getPago(){
	return pago;
}
