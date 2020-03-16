#include <vector>
#include "../include/Pedido.h"
#include "../include/MesaDeRestaurante.h"
#include "../include/RestauranteCaseiro.h"

RestauranteCaseiro::RestauranteCaseiro(MesaDeRestaurante m)
{
    listaDeMesas.push_back(m);
}

void RestauranteCaseiro::adicionaAoPedido(Pedido p, MesaDeRestaurante m)
{
    m.adicionaAoPedido(p);
}

double RestauranteCaseiro::calculaTotalRestaurante()
{
    double d = 0;
    for(int i = 0; i < listaDeMesas.size(); i++)
    {
        d += listaDeMesas[i].calculaTotal();
    }
    return d;
}

void RestauranteCaseiro::adicionaMesa(MesaDeRestaurante m)
{
    listaDeMesas.push_back(m);
}
