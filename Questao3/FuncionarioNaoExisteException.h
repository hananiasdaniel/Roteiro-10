#ifndef FUNCIONARIONAOEXISTEEXCEPTION_H
#define FUNCIONARIONAOEXISTEEXCEPTION_H
#include <exception>
#include <stdexcept>

class FuncionarioNaoExisteException : public std::runtime_error
{
public:
	FuncionarioNaoExisteException();
};

#endif