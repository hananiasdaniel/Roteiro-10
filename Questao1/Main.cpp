#include "TestaValidaNumero.h"
#include "ValorAbaixoException.h"
#include "ValorAcimaException.h"
#include "ValorMuitoAcimaException.h"
#include <iostream>
#include <exception>
using namespace std;

int main(){
    int numero;
    TestaValidaNumero test;

    cout << "Digite um numero." << endl;
    cin >> numero;
    
    try{
        test.validaNumero(numero);
    }
    catch(runtime_error &e){
        cerr << "Erro! " << e.what() << endl;
    }

    return 0;
}
