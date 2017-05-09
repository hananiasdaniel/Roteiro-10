#ifndef VALORABAIXOEXCEPTION_H
#define VALORABAIXOEXCEPTION_H

#include <exception>
#include <stdexcept> // biblioteca do runtime_error
using namespace std;
class ValorAbaixoException : public runtime_error 
{
public:
    ValorAbaixoException();
};

#endif
