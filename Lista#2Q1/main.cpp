#include <iostream>
#include <string>
#include "IConta.h"
#include "Conta.h"
#include "ContaEspecial.h"

using namespace std;

int main()
{
    string s = "Derzu Omaia";
    int numero = 12345678, numeroEspecial = 87654321;
    double salario = 10000.59;
    Conta *Derzu = new Conta(s, numero, salario);
    ContaEspecial *Omaia = new ContaEspecial(s, numeroEspecial, salario);

    cout << "Saldo antes do deposito na conta normal: " << Derzu->getSaldo() << endl;
    Derzu->depositar(2300.10);
    cout << "Saldo apos o deposito na conta normal: " << Derzu->getSaldo() << endl;
    cout << "Saldo antes do deposito na conta especial: " << Omaia->getSaldo() << endl;
    Omaia->depositar(20545.55);
    cout << "Saldo apos do deposito na conta especial: " << Omaia->getSaldo() << endl;
    Derzu->sacar(2000);
    cout << "Saldo apos o deposito e o saque na conta normal: " << Derzu->getSaldo() << endl;
    Omaia->sacar(20000);
    cout << "Saldo apos o deposito e o saque na conta especial: " << Omaia->getSaldo() << endl;

    Derzu->definirLimite();
    Omaia->definirLimite();

    cout << "Limite da conta normal: " << Derzu->getLimite() << endl;
    cout << "Limite da conta especial " << Omaia->getLimite() << endl;

    return 0;
}
