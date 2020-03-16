#ifndef ORCAMENTOESTOURADOEXCEPTION_H
#define ORCAMENTOESTOURADOEXCEPTION_H
#include <exception>


class OrcamentoEstouradoException : public std::exception
{
    public:
        OrcamentoEstouradoException(const char *);
        const char* what();

    protected:
        const char *errmsg;

    private:
};

#endif // ORCAMENTOESTOURADOEXCEPTION_H
