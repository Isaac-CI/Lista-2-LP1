#include <iostream>
#include "TestaValidaNumero.h"

TestaValidaNumero::TestaValidaNumero()
{
    //ctor
}
void TestaValidaNumero::validaNumero(int i)
{
    ValorAcimaException *a = new ValorAcimaException("Valor acima do esperaado");
    ValorAbaixoException *b = new ValorAbaixoException("Valor abaixo do esperado");
    ValorMuitoAcimaException *g = new ValorMuitoAcimaException("Valor muito acima do esperado");
    if(i > 0)
    {
        if(i > 100)
        {
            if(i >= 1000)
            {
                throw *g;
            }else{
                throw *a;
            }
        }
    }else{
        throw *b;
    }
}
