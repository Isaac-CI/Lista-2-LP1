#ifndef PEDIDO_H
#define PEDIDO_H
#include <string>


class Pedido
{
    public:
        Pedido(int, int, std::string, double);
        Pedido();
        int getNumero(){return numero;};
        int getQuantidade(){return quantidade;};
        std::string getDescricao(){return descricao;};
        double getPreco(){return preco;};
        void setNumero(int i){numero = i;};
        void setQuantidade(int i){quantidade = i;};
        void setDescicao(std::string s){descricao = s;};
        void setPreco(double d){preco = d;};

    protected:
        int numero, quantidade;
        std::string descricao;
        double preco;

    private:

};

#endif // PEDIDO_H
