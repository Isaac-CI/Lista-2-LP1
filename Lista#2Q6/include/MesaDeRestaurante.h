#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include <vector>


class MesaDeRestaurante
{
    public:
        MesaDeRestaurante(Pedido);
        void adicionaAoPedido(Pedido);
        void zeraPedidos();
        double calculaTotal();


    protected:

    private:
        std::vector<Pedido> listaDePedidos;
};

#endif // MESADERESTAURANTE_H
