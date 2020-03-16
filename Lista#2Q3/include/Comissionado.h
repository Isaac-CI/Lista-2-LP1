#ifndef COMISSIONADO_H
#define COMISSIONADO_H
#include "Funcionario.h"

class Comissionado : public Funcionario
{
    public:
        Comissionado(std::string, int, double, double);
        double calculaSalario()override;
        double getVendasSemanais();
        double getPercentualComissao();
        void setVendasSemanais(double);
        void setPercentualComissao(double);

    protected:
        double vendasSemanais;
        double percentualComissao;

    private:
};

#endif // COMISSIONADO_H
