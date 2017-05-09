#ifndef SISTEMA_H
#define SISTEMA_H
#include <string>
#include "Assalariado.h"
#include "Funcionario.h"
#include "Horista.h"
#include "Comissionados.h"


class Sistema{
private:
	Funcionario * funcionario[3];
	
public:
	Sistema();
	void setFuncionario(Funcionario *func, int i);
	double calculaValorTotalDaFolha();
	double consultaSalarioFuncionario(int);
	
};

#endif