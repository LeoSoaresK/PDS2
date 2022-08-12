#include <iostream>

using namespace std;

class Conta{
private:
    int numero_;
    float saldo_;

public:
    Conta(int numero) : numero_(numero), saldo_(0.0)
    {
    }

    float saldo() const
    {
        return saldo_;
    }

    int numero() const
    {
        return numero_;
    }

    void Imprimir()
    {
        cout << numero() << ": " << saldo() << endl;
    }

    void Depositar(float valor)
    {
        saldo_ += valor;
    }

    bool Sacar(float valor)
    {
        if (valor > saldo_)
            return 0;

        else
        {
            saldo_ = saldo_ - valor;
            return 1;
        }
    }
};

class ContaInternacional : public Conta
{
private:
    float saldo_usd_;

public:
    ContaInternacional(int numero) : Conta(numero)
    {
        saldo_usd_ = 0.0;
    }

    float saldo_em_dolar() const
    {
        return saldo_usd_;
    }

    void DepositarEmDolar(float valor_usd)
    {
        saldo_usd_ += valor_usd;
    }

    bool SacarEmDolar(float valor_usd)
    {
        if (valor_usd > saldo_usd_)
            return 0;

        else
        {
            saldo_usd_ = saldo_usd_ - valor_usd;
            return 1;
        }
    }
};

int main()
{
    Conta cs(11);
    cs.Depositar(100.00);
    cs.Imprimir();

    ContaInternacional ci(22);
    ci.DepositarEmDolar(200.00);
    ci.Depositar(1000.00);
    ci.Imprimir();
}