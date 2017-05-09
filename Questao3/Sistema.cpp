#include "Sistema.h"
#include "FuncionarioNaoExisteException.h"
#include <iostream>

Sistema::Sistema(){}

void Sistema::setFuncionario(Funcionario *func, int i){
	funcionario[i] = func;
	
}

double Sistema::calculaValorTotalDaFolha(){
	double total = 0;
	int i;
	for(i=0; i < 3; i++){
		total += funcionario[i]->calcularSalario();
	}
}

double Sistema::consultaSalarioFuncionario(int i){
	if(i >= 3){ //funcionario[3]
		throw FuncionarioNaoExisteException();
	}else{
	return funcionario[i]->calcularSalario();
	}
}
