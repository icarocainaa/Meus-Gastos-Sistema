#include "pessoa.h"

Pessoa::Pessoa(string nome){
	this->nome=nome;
}

void Pessoa::setPedido(Gastosf gf){
	pediu.push_back(gf);
}

void Pessoa::pagou(string descricao){
	for (int i=0; i<pediu.size(); i++){
		if (!descricao.compare(pediu[i].getDescricao())){
			pediu[i].setPago(true);
			return ;
		}
	}
	cout << "\n Descricao invalida...";
}

void Pessoa::listarPedidos(){

	int i;

	for (i=0; i<pediu.size(); i++){
		if (i==0) cout << "\n\t~~~~~~~~~NAO PAGOS~~~~~~~~~ \n\n";
		if (pediu[i].getPago()==false){
			cout << "Valor: " << pediu[i].getValor() << "\tData: " << pediu[i].getData() << "\t" << pediu[i].getDescricao() << endl;
		}
	}	

	for (i=0; i<pediu.size(); i++){
		if (i==0) cout << "\n\t~~~~~~~~~  PAGOS  ~~~~~~~~~ \n\n";
		if (pediu[i].getPago()==true){
			cout << "Valor: " << pediu[i].getValor() << "\tData: " << pediu[i].getData() << "\t" << pediu[i].getDescricao() << endl;
		}
	}	
	
	cout << "\nTotal devedor: " << getTotalDevedor();
}

float Pessoa::getTotalDevedor(){
	int d=0;
	for (int i=0; i < pediu.size(); i++){
		if (pediu[i].getPago()==false ){
			d+=pediu[i].getValor();
		}	
	}
	
	return totalDevedor=d;
}

string Pessoa::getNome(){
	return nome;
}
