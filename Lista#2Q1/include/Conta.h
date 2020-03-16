#ifndef CONTA_H
#define CONTA_H
#include "IConta.h"
#include <string>


class Conta : public IConta
{
    public:
        Conta(std::string, int, double);
        void sacar(double)override;
        void depositar(double)override;
        void setNomeCliente(std::string);
        void setSalarioMensal(double);
        void setNumeroConta(int);
        void setSaldo(double);
        void setLimite(double);
        double getSaldo();
        double getLimite();
        int getNumeroConta();
        std::string getNomeCliente();
        double getSalarioMensal();
        virtual void definirLimite();

    protected:
        std::string nomeCliente;
        int numeroConta;
        double saldo, limite, salarioMensal;
    private:
};

#endif // CONTA_H
