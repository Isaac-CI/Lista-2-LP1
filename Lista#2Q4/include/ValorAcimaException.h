#ifndef VALORACIMAEXCEPTION_H
#define VALORACIMAEXCEPTION_H
#include <exception>


class ValorAcimaException : public std::exception
{
    public:
        ValorAcimaException(const char *);
        const char *what();

    protected:
        const char *errmsg;

    private:
};

#endif // VALORACIMAEXCEPTION_H
