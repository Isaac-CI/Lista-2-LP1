#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

class Funcionario
{
    public:
        Funcionario(std::string, int);
        std::string getNome();
        int getMatricula();
        void setNome(std::string);
        void setMatricula(int);
        virtual double calculaSalario(){return 0;};

    protected:
        std::string nome;
        int matricula;

    private:
};

#endif // FUNCIONARIO_H
