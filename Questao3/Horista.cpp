#include <iostream>
#include "Funcionario.h"
#include "Horista.h"

using namespace std;

Horista::Horista(string n, int m, double salH, double hr){
	set_nome(n);
	set_matricula(m);
	set_salarioPorHora(salH);
	set_horasTrabalhadas(hr);
}

void Horista::set_salarioPorHora(double salH){
	if(salH < 0){
		cout << "salario incorreto." << endl;
	}else{
		salarioPorHora = salH;
	}
}

void Horista::set_horasTrabalhadas(double hr){
	if(hr < 0){
		cout << "nenhuma hora trabalhada. errado." << endl;
	}else{
		horasTrabalhadas = hr;
	}
}

double Horista::get_salarioPorHora(){
	return salarioPorHora;
}

double Horista::get_horasTrabalhadas(){
	return horasTrabalhadas;
}

double Horista::calcularSalario(){
	double salario = 0;
	if(horasTrabalhadas > 0 && horasTrabalhadas <= 40){
		salario = (get_salarioPorHora() * 40);	
	}else if(horasTrabalhadas > 40){
		salario = (get_salarioPorHora() * 40) + (((horasTrabalhadas - 40) * 1.5) * get_salarioPorHora());
	}
	return salario;
}
