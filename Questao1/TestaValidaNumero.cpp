#include "TestaValidaNumero.h"
#include "ValorAbaixoException.h"
#include "ValorAcimaException.h"
#include "ValorMuitoAcimaException.h"
#include <iostream>
#include <exception>
using namespace std;

TestaValidaNumero::TestaValidaNumero(){}

void TestaValidaNumero::set_numero(int num){
    numero = num;
}

int TestaValidaNumero::get_numero(){
    return numero;
}

void TestaValidaNumero::validaNumero(int numero){
    if(numero > 0 && numero <= 100){
        cout << "numero dentro do conjunto possivel" << endl;
    }
    else if(numero <= 0){
        throw ValorAbaixoException();
    	}else if(numero > 100 && numero < 1000){
    		throw ValorAcimaException();
    		}else if(numero >= 1000){
    				throw ValorMuitoAcimaException();
    			}
}


