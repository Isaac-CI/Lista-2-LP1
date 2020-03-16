#ifndef SALDONAODISPONIVELEXCEPTION_H
#define SALDONAODISPONIVELEXCEPTION_H
#include <exception>


class SaldoNaoDisponivelException : public std::exception
{
    public:
        SaldoNaoDisponivelException(const char*);
        const char* what();

    protected:
        const char *errmsg;

    private:
};

#endif // SALDONAODISPONIVELEXCEPTION_H
