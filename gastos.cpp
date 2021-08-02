#include "gastos.h"



Gastos::Gastos(float valor, string descricao,Data d){
	setValor(valor);
	setDescricao(descricao);
	setData(d);
}

void Gastos::setDescricao(string descricao){
	this->descricao=descricao;
}

void Gastos::setValor(float valor){
	this->valor=valor;
}

void Gastos::setData(Data d){
	data=d;
}

string Gastos::getDescricao(){
	return descricao;
}

float Gastos::getValor(){
	return valor;
}

Data Gastos::getData(){
	return data;
}
