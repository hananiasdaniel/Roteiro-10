#ifndef VALORACIMAEXCEPTION_H
#define VALORACIMAEXCEPTION_H

#include <exception>
#include <stdexcept>
using namespace std;

class ValorAcimaException : public runtime_error
{
public:
	ValorAcimaException();

};
#endif