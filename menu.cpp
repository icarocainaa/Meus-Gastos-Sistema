#include "menu.h"
#include <conio.h>

void Menu::setSaldo(float s){
	saldo=s;
}

float Menu::getSaldo(){
	return saldo;
}

void Menu::novoMes(Mes m){
	meses.push_back(m);
	cout << "Mes inserido!\nTecle enter para continuar ...";
	getch();
}

void Menu::setFixos(Gastosf gf){
	fixos.push_back(gf);
	cout << "Gasto fixo inserido!\nTecle enter para continuar ...";
	getch();
}

void Menu::delFixos(string descricao){
	for (int i=0; i<fixos.size(); i++){
		if (descricao==fixos[i].getDescricao()){
			fixos.erase(fixos.begin()+i);
			cout << "\n Removido com sucesso!\nTecle enter para continuar...";
			getch();
			return ;
		}
	}
	cout << "Descricao invalida!\nTecle enter para continuar ..." << endl;
	getch();
}

void Menu::listarFixos(){
	if (fixos.empty()){
		cout << "Nenhum gasto mensal inserido...\nTecle enter para continuar ...";
		getch();
		return ;
	}
	for (int i=0; i<fixos.size(); i++){
		cout << '\n' << fixos[i].getValor() << " ~ " << fixos[i].getDescricao();
	}
	cout << "\nTecle enter para continuar ...";
	getch();
}

void Menu::insReceita(float s){
	saldo+=s;
	cout << "Receita inserida\nTecle enter para continuar ...";
	getch();
}

void Menu::setPessoa(string nome){
	emprestimos.push_back(nome);
	cout << nome << " inserido com sucesso!\nTecle enter para continuar ...";
	getch();
}

void Menu::delPessoa(string nome){
	
	for (int i=0; i<emprestimos.size(); i++){
		if (emprestimos[i].getNome()==nome){
			emprestimos.erase(emprestimos.begin()+i);
			cout <<  nome << " removido com sucesso!\nTecle enter para continuar ..." ;
			getch();
			return ;
		}
	}
	cout << nome << " nao pertence a lista\nTecle enter para continuar ..." ;
	getch();
}

vector<Pessoa> Menu::getEmprestimos(){
	return emprestimos;
}

void Menu::insEmprestimo(string nome,Gastosf gf){
	for (int i=0; i<emprestimos.size(); i++){
		if (nome==emprestimos[i].getNome()){
			emprestimos[i].setPedido(gf);
			cout << "Pedido inserido com sucesso!\n Tecle enter para continuar ...";
			getch();
			return ;
		}
	}
	cout << nome << " nao se encontra na lista!\nTecle enter para continuar ...";
	getch();
}

void Menu::listarPessoas(){
	if (emprestimos.empty()){
		cout << "\nNao ha ninguem na lista de emprestimos :D\nTecle enter para continuar ...";
		getch();
		return ;
	}
	
	for (int i=0; i<emprestimos.size(); i++){
		cout << i+1 << " - " << emprestimos[i].getNome() << endl; 
	}
	cout << "\nTecle enter para continuar ...";
	getch();
}
