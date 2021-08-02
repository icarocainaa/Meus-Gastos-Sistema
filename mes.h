#ifndef MES_H
#define MES_H
#include <vector>
#include <string>
#include "Gastos.h"
#include "Gastosf.h"

class Mes {
	public :
		Mes(int m=1);
		void setNaoFixos(Gastos g);
		void setMesAtual(int m);
		vector<Gastos> getNaoFixos();
		int getMesAtual();
		void listarGastos();
		
	private :
		vector<Gastos> naoFixos;
		int mesAtual;
};

#endif
