#include <iostream>
using namespace std;
#include "data.h"
#include <iomanip>
ostream& operator << (ostream& out, Data d){
	out << d.getDia() << '/' << d.getMes();
	return out;
}

Data::Data(int d, int m){
	setDia(d);
	setMes(m);
}

void Data::setDia(int d){
	
	if (d > 0 && d <=31){
		dia=d;
	}else {
		cout << "Dia invalido, setado para 1...\n";
		dia=1;
	}
}

void Data::setMes(int m){
	if (m > 0 && m < 13){
		this->mes=m;
	}else {
		cout << "Mes invalido, setado para 1...\n";
		mes=1;
	}
}

int Data::getDia(){
	return dia;
}

int Data::getMes(){
	return mes;
}
