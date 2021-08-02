#include <iostream>
#include "menu.h"
#include <conio.h>
using namespace std;

void ff();
vector<Gastosf> Menu::fixos;

int main(int argc, char** argv) {
	int caso;
	Menu menu1;
do {
	system("cls");
	cout << "\t\t\t\t\t\t\t\t\t\t Meus Gastos - Dev. by Icaro Cainaa" << endl;
	
	cout << "~ ~ ~ ~ ~ ~ MENU ~ ~ ~ ~ ~ ~"<<endl;
	
	cout << "(1) Manipular contas de um mes\n";
	cout << "(2) Manipular emprestimos\n";
	cout << "(3) Inserir um novo mes\n";
	cout << "(4) Inserir receita\n";
	cout << "(5) Consultar saldo\n";
	cout << "(6) Manipular gastos fixos\n";
	cout << "(0) Encerrar programa\n";
	cout << "Escolha uma opcao: ";
	cin >> caso;
	system("cls");
	switch (caso){
		case 2:{
			cout << "Manipular emprestimos" << endl;
			cout << "(1) Inserir um pedido \n(2) Inserir uma pessoa na lista de emprestimos \n(3) Remover uma pessoa da lista de emprestimos \n"
			"(4) Pessoas na lista de emprestimos \n(0) Retornar ao menu" << endl;
			cout << "Escolha uma opcao: ";
			int caso1;
			cin >> caso1;
			system("cls");
			switch (caso1){
				case 1:{
					cout << "Inserir um pedido\n";
					cout << "Nome da pessoa que pediu: "; string nome;ff(); getline(cin,nome);
					cout << "Valor: "; float valor; cin >> valor;
					cout << "Descricao: "; string descricao ;ff(); getline(cin,descricao);
					cout << "Dia: "; int dia; cin >> dia;
					cout << "Mes: "; int mes; cin >> mes;
					
					Data d(dia,mes);
					Gastosf gf(valor,descricao,d);
					menu1.insEmprestimo(nome,gf);

					break;
				}
				case 2:{
					cout << "Inserir uma pessoa \n";
					cout << "Nome: "; string nome; ff(); getline(cin,nome);
					menu1.setPessoa(nome);
										
					break;
				}
				case 3:{
					cout << "Remover uma pessoa \n";
					cout << "Nome da pessoa a ser removida: "; ff(); string nome; getline(cin,nome);
					menu1.delPessoa(nome);
					break;
				}
				case 4:{
					cout << "Pessoas na lista de emprestimo \n";
					menu1.listarPessoas();
					break;
				}
				default: 
					break;
			}
		break;
		} 

		case 6:{
			cout << "Manipular gastos fixos\n" << endl;
			cout << "(1) Inserir um gasto fixo\n";
			cout << "(2) Remover um gasto fixo\n";
			cout << "(3) Listar gastos fixos \n";
			cout << "(0) Retornar ao Menu\n";
			cout << "Escolha uma opcao: ";
			int caso1;
			cin >> caso1;
			system("cls");
			switch (caso1){
				case 1:{
					cout << "INSERIR GASTO FIXO\n" << endl;
					cout << "Valor: "; float v1;ff(); cin >> v1;
					cout << "Descricao: "; string descricao; ff(); getline(cin,descricao);
					Gastosf g(v1,descricao);
					menu1.setFixos(g);
					break;
				}
				case 2:{
					cout << "REMOVER GASTO FIXO\n";
					cout << "Descricao: "; string descricao; ff(); getline(cin,descricao);
					menu1.delFixos(descricao);
					break;
				}
				case 3:{
					cout << "GASTOS FIXOS\n"<< endl;
					menu1.listarFixos();
					break;
				}
				default :
					break;
					
					 
			}
			break ;
		}
	
		case 3:{
			int m;
			cout << "Inserir um novo mes" << endl;
			cout << "Correspondente numerico do mes: ";
			ff();
			cin >> m;
			menu1.novoMes(m);

			break;
		}
		case 4:{
			cout <<"Inserir Receita" << endl;
			cout << "Valor da receita: " ;
			float receita;
			menu1.insReceita(receita);
			break;
		}
		case 5:{
			cout <<"Saldo atual: " << menu1.getSaldo()<< endl;
			cout <<"Tecle enter para continuar ...";
			getch();
			break;
		}
		case 1:{
			cout <<"Manipular contas de um mes\n";
			break;
		}
	
	}

}while(caso!=0);

	return 0;
}

void ff(){
	char a;
	while ( (a = fgetc(stdin)) !='\n' && a != EOF);
}
