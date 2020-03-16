#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H
#include "Funcionario.h"
#include <stdexcept>
#include <vector>
#include <string>
#include "OrcamentoEstouradoException.h"
#include "FuncionarioNaoExisteException.h"

class SistemaGerenciaFolha
{
    public:
        SistemaGerenciaFolha(double);
        void setFuncionarios(std::vector<Funcionario*>);
        double calculaValorTotalFolha();
        double consultaSalarioFuncionario(std::string, int);

    protected:
        std::vector<Funcionario*> funcionarios;
        double maxBudget;

    private:
};

#endif // SISTEMAGERENCIAFOLHA_H
