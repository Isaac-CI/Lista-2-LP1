#include "Horista.h"

Horista::Horista(std::string s, int i, double d1, double d2) : Funcionario(s,i)
{
    salarioPorHora = d1;
    horasTrabalhadas = d2;
}
double Horista::calculaSalario()
{
    return (horasTrabalhadas > 40)? (40 * salarioPorHora) + (60 * (horasTrabalhadas - 40)) : (horasTrabalhadas * salarioPorHora);
}
double Horista::getHorasTrabalhadas()
{
    return horasTrabalhadas;
}
double Horista::getSalarioPorHora()
{
    return salarioPorHora;
}
void Horista::setHorasTrabalhadas(double d)
{
    horasTrabalhadas = d;
}
void Horista::setSalarioPorHora(double d)
{
    salarioPorHora = d;
}
