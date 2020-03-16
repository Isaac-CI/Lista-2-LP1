#include "ValorAcimaException.h"

ValorAcimaException::ValorAcimaException(const char *c)
{
    errmsg = c;
}
const char *ValorAcimaException::what()
{
    return errmsg;
}
