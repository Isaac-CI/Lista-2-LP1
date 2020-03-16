#include <string.h>
#include "Conta.h"
#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(std::string s, int i, double d) : Conta(s, i, d)
{

}
void ContaEspecial::definirLimite()
{
    limite = 3 * salarioMensal;
}
