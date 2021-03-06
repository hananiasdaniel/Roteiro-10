#include <iostream>
#include "Funcionario.h"
#include "Assalariado.h"
#include "Horista.h"
#include "Sistema.h"
#include "Comissionados.h"
#include <string>
using namespace std;

int main (){
	string nomeA, nomeC, nomeH;
	double salarioH, salarioBase, salario, percentual, vendas, horas;
	int matriculaA=0, matriculaC=0, matriculaH=0, op;

	while(true){
		Assalariado A1(nomeA, matriculaA, salario);
		Comissionados C1(nomeC, matriculaC, salarioBase, percentual, vendas);
		Horista H1(nomeH, matriculaH, salarioH, horas);
		Sistema testSist;
		testSist.setFuncionario(new Assalariado(nomeA, matriculaA, salario), 0);
		testSist.setFuncionario(new Comissionados(nomeC, matriculaC, salarioBase, percentual, vendas), 1);
		testSist.setFuncionario(new Horista(nomeH, matriculaH, salarioH, horas), 2);

		cout << endl;
		cout << "Este programa serve para calcular o salario dos funcionarios." << endl;
		cout << "Adicionar no minimo um funcionario de cada tipo." << endl;  
		cout << "Qual tipo de funcionario voce quer adicionar:" << endl;
		cout << "(1) Assalariado" << endl;
		cout << "(2) Comissionado" << endl;
		cout << "(3) Horista" << endl;
		cout << "(4) Exibir dados armazenados" << endl;
		cout << "(5) Valor total da folha de pagamento" << endl;
		cout << "(6) Consultar salario funcionario" << endl;
		cout << "(7) Sair do programa" << endl;
		cin >> op;

		if(op == 1){
			cout << "Qual o nome do funcionario?" << endl;
			cin >> nomeA;
			cout << "Qual o numero de matricula?" << endl;
			cin >> matriculaA;
			cout << "Qual salario?" << endl;
			cin >> salario;
			
		}

		if(op == 2){
			cout << "Qual o nome do funcionario?" << endl;
			cin >> nomeC;
			cout << "Qual o numero de matricula?" << endl;
			cin >> matriculaC;
			cout << "Qual salario base?" << endl;
			cin >> salarioBase;
			cout << "Qual percentual de comissao?" << endl;
			cin >> percentual;
			cout << "Qual a quantidade de vendas da semana (em reais)" << endl;
			cin >> vendas;
		}

		if(op == 3){
			cout << "Qual o nome do funcionario?" << endl;
			cin >> nomeH;
			cout << "Qual o numero de matricula?" << endl;
			cin >> matriculaH;
			cout << "Qual salario por hora?" << endl;
			cin >> salarioH;
			cout << "Quantidade de horas trabalhadas:" << endl;
			cin >> horas;
		}

		if(op == 4){
			cout << endl;
			cout << "Assalariado" << endl;
			cout << "Nome: " << A1.get_nome() << endl;
			cout << "Matricula: " << A1.get_matricula() << endl;
			cout << "Salario: " << A1.get_salario() << endl;
			cout << "Salario mensal: " << A1.calcularSalario() << endl;
			cout << endl;
			cout << "Comissionado" << endl;
			cout << "Nome: " << C1.get_nome() << endl;
			cout << "Matricula: " << C1.get_matricula() << endl;
			cout << "Salario base: " << C1.get_salarioBase() << endl;
			cout << "Percentual de comissao: " << C1.get_percentualComissao() << endl;
			cout << "Vendas semanais: " << C1.get_vendasSemanais() << endl;
			cout << "Salario mensal: " << C1.calcularSalario() << endl;
			cout << endl;
			cout << "Horista" << endl;
			cout << "Nome: " << H1.get_nome() << endl;
			cout << "Matricula: " << H1.get_matricula() << endl;
			cout << "Salario por hora: " << H1.get_salarioPorHora() << endl;
			cout << "Horas trabalhadas: " << H1.get_horasTrabalhadas() << endl;
			cout << "Salario mensal: " << H1.calcularSalario() << endl;
		}

		if(op == 5){
			cout << "Valor total da folha de pagamento e de: " << testSist.calculaValorTotalDaFolha() << " reais" << endl;
		}

		try{
			if(op == 6){
				cout << "Pagamento do assalariado: R$ " << testSist.consultaSalarioFuncionario(0) << endl;
				cout << "Pagamento do comissionado: R$ " << testSist.consultaSalarioFuncionario(1) << endl;
				cout << "Pagamento do horista: R$ " << testSist.consultaSalarioFuncionario(2) << endl;
				cout << testSist.consultaSalarioFuncionario(3);
			}
		}catch(runtime_error &e){
			cerr << e.what() << endl;
		}

		if(op == 7){
			cout << "Obrigado por usar o sistema." << endl;
			return 1;
		}
	}
	

	return 0;
}
