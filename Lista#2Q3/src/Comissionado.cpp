#include "Comissionado.h"

Comissionado::Comissionado(std::string s, int i, double d1, double d2) : Funcionario(s,i)
{
    vendasSemanais = d1;
    percentualComissao = d2;
}
void Comissionado::setVendasSemanais(double d)
{
    vendasSemanais = d;
}
void Comissionado::setPercentualComissao(double d)
{
    percentualComissao = d;
}
double Comissionado::getPercentualComissao()
{
    return percentualComissao;
}
double Comissionado::getVendasSemanais()
{
    return vendasSemanais;
}
double Comissionado::calculaSalario()
{
    return ((vendasSemanais * percentualComissao) + 2500);
}
