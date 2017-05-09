#include "FuncionarioNaoExisteException.h"

FuncionarioNaoExisteException::FuncionarioNaoExisteException() : std::runtime_error("O funcionario nao existe."){

}