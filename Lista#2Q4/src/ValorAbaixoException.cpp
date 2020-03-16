#include "ValorAbaixoException.h"

ValorAbaixoException::ValorAbaixoException(const char * c)
{
    errmsg = c;
}
const char *ValorAbaixoException::what()
{
    return errmsg;
}
