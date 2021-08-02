#ifndef GASTOS_H
#define GASTOS_H
#include <string>
#include <iostream>
#include "data.h"
using namespace std;
class Gastos{
	public :
		Gastos(float valor=0, string descricao="nao inserida",Data d = Data());
		void setDescricao(string desc);
		string getDescricao();
		void setValor(float);
		float getValor();
		void setData(Data d);
		Data getData();
	
	private :
		string descricao;
		float valor;
		Data data;
};

#endif
