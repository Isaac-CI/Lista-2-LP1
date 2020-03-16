#include "OrcamentoEstouradoException.h"
#include <iostream>

OrcamentoEstouradoException::OrcamentoEstouradoException(const char *c)
{
    errmsg = c;
}
const char* OrcamentoEstouradoException::what()
{
    return errmsg;
}
