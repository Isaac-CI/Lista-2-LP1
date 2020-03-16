#include "ValorMuitoAcimaException.h"

ValorMuitoAcimaException::ValorMuitoAcimaException(const char *c)
{
    errmsg = c;
}
const char *ValorMuitoAcimaException::what()
{
    return errmsg;
}
