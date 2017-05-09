#ifndef VALORMUITOACIMAEXCEPTION_H
#define VALORMUITOACIMAEXCEPTION_H

#include <exception>
#include <stdexcept>
using namespace std;

class ValorMuitoAcimaException : public runtime_error
{

public:
	ValorMuitoAcimaException();
};

#endif