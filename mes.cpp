#include "mes.h"
#include "menu.h"

Mes::Mes(int m){
	if (m < 1 || m > 12){
		cout << "\n Mes da classe Mes invalido, setado para 1...\n";
		mesAtual=1;
	}else{
		mesAtual=m;
	}
}

void Mes::setNaoFixos(Gastos g){
	naoFixos.push_back(g);
}

void Mes::setMesAtual(int m){
	if (m > 0 && m < 13){
		mesAtual=m;
	}else {
		mesAtual=1;
	}
}


vector<Gastos> Mes::getNaoFixos(){
	return naoFixos;
}

int Mes::getMesAtual(){
	return mesAtual;
}

void Mes::listarGastos(){
	int v;
	cout << "Listar Gastos Fixos (1), não fixos (2), os 2 juntos (3): ";
	cin >> v;
	
	switch(v){
		case 1:
			for (int i=0; i<Menu::fixos.size(); i++){
				cout << "\n" << Menu::fixos[i].getValor() << " ~ " << Menu::fixos[i].getDescricao() << " ~ " << Menu::fixos[i].getData();
			}
			break;
		case 2:
			for (int i=0; i<naoFixos.size(); i++){
				cout << "\n" << naoFixos[i].getValor() << " ~ " << naoFixos[i].getDescricao() << " ~ " << naoFixos[i].getData();
			}
			break;
		default:
			for (int i=0; i<Menu::fixos.size(); i++){
				cout << "\n" << Menu::fixos[i].getValor() << " ~ " << Menu::fixos[i].getDescricao() << " ~ " << Menu::fixos[i].getData();
			}
			for (int i=0; i<naoFixos.size(); i++){
				cout << "\n" << naoFixos[i].getValor() << " ~ " << naoFixos[i].getDescricao() << " ~ " << naoFixos[i].getData();
			}break ;			
	}
}
