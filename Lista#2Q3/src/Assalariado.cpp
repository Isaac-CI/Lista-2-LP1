#include "Assalariado.h"

Assalariado::Assalariado(std::string s, int i, double d) : Funcionario(s,i)
{
    salario = d;
}
double Assalariado::getSalario()
{
    return salario;
}
void Assalariado::setSalario(double d)
{
    salario = d;
}
double Assalariado::calculaSalario()
{
    return salario;
}
