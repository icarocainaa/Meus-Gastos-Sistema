#ifndef GASTOSF_H
#define GASTOSF_H
#include "gastos.h"

class Gastosf:public Gastos{
	public :
		Gastosf(float valor=0, string descricao="nao inserida", Data d = Data(), bool p=false);
		void setPago(bool p);
		bool getPago();
	private :
		bool pago;
};

#endif
