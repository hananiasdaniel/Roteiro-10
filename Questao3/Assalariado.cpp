#include <iostream>
#include "Funcionario.h"
#include "Assalariado.h"

using namespace std;

Assalariado::Assalariado(string n, int m, double s){
	set_nome(n);
	set_matricula(m);
	set_salario(s);
}

void Assalariado::set_salario(double s){
	salario = s;
}

double Assalariado::get_salario(){
	return salario;
}

double Assalariado::calcularSalario(){

	return get_salario();
}
