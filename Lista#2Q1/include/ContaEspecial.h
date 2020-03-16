#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include <string>
#include "Conta.h"


class ContaEspecial : public Conta
{
    public:
        ContaEspecial(std::string, int, double);
        void definirLimite()override;

    protected:

    private:
};

#endif // CONTAESPECIAL_H
