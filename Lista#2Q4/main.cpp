#include <iostream>
#include "TestaValidaNumero.h"
#include "ValorAbaixoException.h"
#include "ValorAcimaException.h"
#include "ValorMuitoAcimaException.h"

using namespace std;

int main()
{
    TestaValidaNumero *numero = new TestaValidaNumero();
    try{
        numero->validaNumero(0);
        cout << "validado" << endl;
    }catch(ValorAbaixoException b)
    {
        cout << b.what() << endl;
    }
    try{
        numero->validaNumero(100);
        cout << "validado" << endl;
    }catch(ValorAbaixoException b)
    {
        cout << b.what() << endl;
    }
    try{
        numero->validaNumero(101);
        cout << "validado" << endl;
    }catch(ValorAcimaException a)
    {
        cout << a.what() << endl;
    }
    try{
        numero->validaNumero(1000);
        cout << "validado" << endl;
    }catch(ValorMuitoAcimaException g)
    {
        cout << g.what() << endl;
    }
    return 0;
}
