#ifndef FUNCIONARIONAOEXISTEEXCEPTION_H
#define FUNCIONARIONAOEXISTEEXCEPTION_H
#include <exception>


class FuncionarioNaoExisteException : public std::exception
{
    public:
        FuncionarioNaoExisteException(const char *);
        const char* what();

    protected:
        const char *errmsg;

    private:
};

#endif // FUNCIONARIONAOEXISTEEXCEPTION_H
