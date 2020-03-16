#include <string>
#include "../include/Pedido.h"

Pedido::Pedido(int n, int q, std::string d, double p)
{
    numero = n;
    quantidade = q;
    descricao = d;
    preco = p;
}

Pedido::Pedido()
{
    numero = -1;
    quantidade = 0;
    descricao = "";
    preco = 0;
}
