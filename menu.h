#ifndef MENU_H
#define MENU_H
#include "mes.h"
#include "pessoa.h"

class Menu{
	public :
		void setSaldo(float);
		void insReceita(float s);
		float getSaldo();
		void novoMes(Mes m);
		void setPessoa(string nome);
		void delPessoa(string nome);
		static void setFixos(Gastosf gf);
		static void delFixos(string descricao);
		vector<Pessoa> getEmprestimos();
		static vector<Gastosf> fixos;
		static void listarFixos();
		void insEmprestimo(string nome, Gastosf gf);
		void listarPessoas();
		
	private :
		vector<Pessoa> emprestimos;
		vector<Mes> meses;
		float saldo;
		
};

#endif
