#include "SaldoNaoDisponivelException.h"
#include <iostream>

SaldoNaoDisponivelException::SaldoNaoDisponivelException() : std::runtime_error("Saque nao disponivel.")
{}