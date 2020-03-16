#include <iostream>
#include <string>
#include <vector>
#include "Funcionario.h"
#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"
#include "SistemaGerenciaFolha.h"
#include "FuncionarioNaoExisteException.h"
#include "OrcamentoEstouradoException.h"

using namespace std;

int main()
{
    vector<Funcionario*> vetor;
    Assalariado *secretario = new Assalariado("Jose", 87654321, 3000);
    Horista *programador = new Horista("Joao", 98765432, 100, 60);
    Comissionado *vendedor = new Comissionado("Antonio", 23456789, 100, 55);
    SistemaGerenciaFolha *contraCheque = new SistemaGerenciaFolha(3450975.89);
    vetor.push_back(secretario);
    vetor.push_back(programador);
    vetor.push_back(vendedor);

    contraCheque->setFuncionarios(vetor);

    cout << "O salario pago ao empregado: " << secretario->getNome() << " De matricula: " << secretario->getMatricula() << " eh: R$" << secretario->calculaSalario() << endl;
    cout << "O salario pago ao empregado: " << programador->getNome() << " De matricula: " << programador->getMatricula() << " eh: R$" << programador->calculaSalario() << endl;
    cout << "O salario pago ao empregado: " << vendedor->getNome() << " De matricula: " << vendedor->getMatricula() << " eh: R$" << vendedor->calculaSalario() << endl;
    cout << "O salario de Joao eh: R$" << contraCheque->consultaSalarioFuncionario("Joao", 98765432) << endl;

    try
    {
        cout << contraCheque->consultaSalarioFuncionario("nao existe", 77777777) << endl;
    }catch(FuncionarioNaoExisteException f)
    {
        f.what();
    }
    Assalariado *chefe = new Assalariado("The boss", 80058005, 3450975.89);
    vetor.push_back(chefe);
    contraCheque->setFuncionarios(vetor);
    try
    {
        cout << contraCheque->calculaValorTotalFolha() << endl;
    }catch(OrcamentoEstouradoException o)
    {
        o.what();
    }

    return 0;
}
