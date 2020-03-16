#ifndef ASSALARIADO_H
#define ASSALARIADO_H
#include "Funcionario.h"


class Assalariado : public Funcionario
{
    public:
        Assalariado(std::string, int, double);
        double getSalario();
        void setSalario(double);
        double calculaSalario()override;

    protected:
        double salario;

    private:
};

#endif // ASSALARIADO_H
