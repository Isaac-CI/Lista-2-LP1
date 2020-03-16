#include <vector>
#include "../include/Pedido.h"
#include "../include/MesaDeRestaurante.h"

MesaDeRestaurante::MesaDeRestaurante(Pedido p)
{
    listaDePedidos.push_back(p);
}

void MesaDeRestaurante::adicionaAoPedido(Pedido p)
{
    unsigned int i;
    for(i = 0; i < listaDePedidos.size(); i++)
    {
        if(listaDePedidos[i].getNumero() == p.getNumero() || listaDePedidos[i].getDescricao() == p.getDescricao())
        {
            listaDePedidos[i].setQuantidade(listaDePedidos[i].getQuantidade() + 1);
            break;
        }
    }
    if(i == listaDePedidos.size())
        listaDePedidos.push_back(p);
}

void MesaDeRestaurante::zeraPedidos()
{
    for(unsigned int i = 0; i < listaDePedidos.size(); i++)
    {
        listaDePedidos.erase(listaDePedidos.begin() + i);
    }
}

double MesaDeRestaurante::calculaTotal()
{
    double retorno = 0;
    for(unsigned int i = 0; i < listaDePedidos.size(); i++)
    {
        retorno += (listaDePedidos[i].getPreco() * listaDePedidos[i].getQuantidade());
    }
    return retorno;
}
