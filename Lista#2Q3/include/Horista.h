#ifndef HORISTA_H
#define HORISTA_H
#include "Funcionario.h"

class Horista : public Funcionario
{
    public:
        Horista(std::string, int, double, double);
        double calculaSalario()override;
        double getSalarioPorHora();
        double getHorasTrabalhadas();
        void setSalarioPorHora(double);
        void setHorasTrabalhadas(double);

    protected:
        double salarioPorHora;
        double horasTrabalhadas;

    private:
};

#endif // HORISTA_H
