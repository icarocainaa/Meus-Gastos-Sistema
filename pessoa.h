#ifndef PESSOA_H
#define PESSOA_H
#include <string>
#include <iostream>
#include <vector>
#include "gastosf.h"
using namespace std;

class Pessoa{
	public :
		Pessoa(string nome="não inserido");
		void pagou(string descricao);
		void listarPedidos();
		void setPedido(Gastosf gf);
		float getTotalDevedor();
		string getNome();
	private :
		string nome;
		vector<Gastosf> pediu;
		float totalDevedor;
		
	
};

#endif
