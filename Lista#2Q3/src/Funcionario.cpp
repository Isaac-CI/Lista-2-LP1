#include "Funcionario.h"

Funcionario::Funcionario(std::string s, int i)
{
    nome = s;
    matricula = i;
}
std::string Funcionario::getNome()
{
    return nome;
}
int Funcionario::getMatricula()
{
    return matricula;
}
void Funcionario::setMatricula(int i)
{
    matricula = i;
}
void Funcionario::setNome(std::string s)
{
    nome = s;
}
