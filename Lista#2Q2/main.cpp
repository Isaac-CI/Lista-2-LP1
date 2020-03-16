#include <iostream>
#include <string>
#include "IConta.h"
#include "Conta.h"
#include "ContaEspecial.h"

using namespace std;

int main()
{
    string s = "Jose Jeremias";
    int numero = 12345678, numeroEspecial = 87654321;
    double salario = 10000.59;
    Conta *Jose = new Conta(s, numero, salario);
    ContaEspecial *Jeremias = new ContaEspecial(s, numeroEspecial, salario);

    cout << "Saldo antes do deposito na conta normal: " << Jose->getSaldo() << endl;
    Jose->depositar(2300.10);
    cout << "Saldo apos o deposito na conta normal: " << Jose->getSaldo() << endl;
    cout << "Saldo antes do deposito na conta especial: " << Jeremias->getSaldo() << endl;
    Jeremias->depositar(20545.55);
    cout << "Saldo apos do deposito na conta especial: " << Jeremias->getSaldo() << endl;
    try
    {
        Jose->sacar(2000);
        cout << "Saldo apos o deposito e o saque na conta normal: " << Jose->getSaldo() << endl;
    }catch(SaldoNaoDisponivelException s)
    {
        cout << s.what() << endl;
    }
    try{
        Jeremias->sacar(20000);
        cout << "Saldo apos o deposito e o saque na conta especial: " << Jeremias->getSaldo() << endl;
    }catch(SaldoNaoDisponivelException s)
    {
        cout << s.what() << endl;
    }

    Jose->definirLimite();
    Jeremias->definirLimite();

    cout << "Limite da conta normal: " << Jose->getLimite() << endl;
    cout << "Limite da conta especial " << Jeremias->getLimite() << endl;

    try{
        Jeremias->sacar(100000);
        cout << "Saldo apos o saque: " << Jeremias->getSaldo() << endl;
    }catch(SaldoNaoDisponivelException s){
        cout << s.what() << endl;
    }

    return 0;
}
