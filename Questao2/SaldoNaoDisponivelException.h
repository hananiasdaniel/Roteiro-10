#ifndef SALDONAODISPONIVELEXCEPTION_H
#define SALDONAODISPONIVELEXCEPTION_H

#include <exception>
#include <stdexcept>
using namespace std;

class SaldoNaoDisponivelException : public runtime_error {
public:
	SaldoNaoDisponivelException();
};

#endif