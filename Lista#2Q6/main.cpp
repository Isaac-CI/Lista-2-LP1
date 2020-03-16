#include <iostream>
#include <string>
#include <vector>
#include "include/Pedido.h"
#include "include/MesaDeRestaurante.h"
#include "include/RestauranteCaseiro.h"

using namespace std;

int main()
{
    Pedido *agulhinhaFrita = new Pedido(18, 3, "3 porcoes de agulhinha frita", 25.90);
    Pedido *peixadaEspecial = new Pedido(21, 1, "A sugestao do chef", 124.49);
    Pedido *bolinhoDeBacalhau = new Pedido(11, 4, "cada porcao possui 8 bolinhos", 15.10);
    Pedido *fileComFritas = new Pedido(12, 2, "um dos pratos mais pedidos da casa", 49.90);
    MesaDeRestaurante *mesa1 = new MesaDeRestaurante(*bolinhoDeBacalhau);
    MesaDeRestaurante *mesa2 = new MesaDeRestaurante(*agulhinhaFrita);
    mesa1->adicionaAoPedido(*fileComFritas);
    RestauranteCaseiro *CasaAcolhedora = new RestauranteCaseiro(*mesa1);
    CasaAcolhedora->adicionaMesa(*mesa2);
    CasaAcolhedora->adicionaAoPedido(*peixadaEspecial, *mesa2);

    cout << CasaAcolhedora->calculaTotalRestaurante() << endl;
    cout << mesa1->calculaTotal() << endl;
    mesa1->zeraPedidos();
    cout << mesa2->calculaTotal() << endl;

    return 0;
}
