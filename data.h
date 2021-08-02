#ifndef DATA_H
#define DATA_H
#include <iostream>
using namespace std;
class Data{
	public :
		Data(int d=1, int m=1);
		void setDia(int);
		int getDia();
		void setMes(int);
		int getMes();
		friend ostream& operator << (ostream& out, Data d);
	private :
		int dia, mes;
};

#endif
