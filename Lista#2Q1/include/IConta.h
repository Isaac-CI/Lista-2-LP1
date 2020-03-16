#ifndef ICONTA_H
#define ICONTA_H


class IConta
{
    public:
        IConta();
        virtual void sacar(double){};
        virtual void depositar(double){};

    protected:

    private:
};

#endif // ICONTA_H
