#ifndef VALORABAIXOEXCEPTION_H
#define VALORABAIXOEXCEPTION_H
#include <exception>


class ValorAbaixoException : public std::exception
{
    public:
        ValorAbaixoException(const char *);
        const char *what();

    protected:
        const char *errmsg;

    private:
};

#endif // VALORABAIXOEXCEPTION_H
