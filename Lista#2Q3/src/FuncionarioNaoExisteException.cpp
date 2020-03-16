#include "FuncionarioNaoExisteException.h"
#include <iostream>

FuncionarioNaoExisteException::FuncionarioNaoExisteException(const char *c)
{
    errmsg = c;
}
const char* FuncionarioNaoExisteException::what()
{
    return errmsg;
}
