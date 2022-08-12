/*
IMPLEMENTAR VAZIO PRA VER ENTRADA DA 5
*/

#include "vetor.h"

// Cria um vetor cujos índices variam de 'inicio' até 'fim'.
// PRECONDIÇÃO: fim >= inicio.
Vetor::Vetor(int inicio, int fim)
{
    if (inicio < 0 && fim < 0)
    {
        elementos_ = new string[-1 * (inicio - fim) + 1];
    }

    if (inicio < 0 && fim >= 0)
    {
        elementos_ = new string[fim + (-1 * inicio) + 1];
    }

    if (inicio == 0)
    {
        elementos_ = new string[1];
    }

    if (inicio > 0)
    {
        elementos_ = new string[fim - inicio + 1];
    }

    inicio_ = inicio;
}

// Altera o valor do índice i.
// PRECONDIÇÃO: i está dentro do intervalo de índices do vetor.
void Vetor::atribuir(int i, std::string valor)
{
    if (inicio_ < 0 && i < 0)
    {
        elementos_[-1 * (inicio_ - i)] = valor;
    }

    else if (inicio_ < 0 && i == 0)
    {
        elementos_[-1 * (inicio_)] = valor;
    }

    else if (inicio_ < 0 && i > 0)
    {
        elementos_[-1 * (inicio_) + i] = valor;
    }

    else if (inicio_ == 0)
    {
        elementos_[0] = valor;
    }

    else if (inicio_ > 0)
    {
        elementos_[-1 * (inicio_ - i)] = valor;
    }
}

// Retorna o valor do índice i.
// PRECONDIÇÕES:
// (1) i está dentro do intervalo de índices do vetor.
// (2) i foi inicializando anteriormente.
string Vetor::valor(int i) const
{
    if (inicio_ < 0 && i < 0)
    {
        return elementos_[-1 * (inicio_ - i)];
    }

    else if (inicio_ < 0 && i == 0)
    {
        return elementos_[-1 * (inicio_)];
    }

    else if (inicio_ < 0 && i > 0)
    {
        return elementos_[-1 * (inicio_) + i];
    }

    else if (inicio_ == 0)
    {
        return elementos_[0];
    }

    else if (inicio_ > 0)
    {
        return elementos_[-1 * (inicio_ - i)];
    }
}

// Desaloca a memória reservada para os elementos do vetor.
Vetor::~Vetor()
{
    if (inicio_ == 0)
    {

    }
    else
    {
    for (int i = inicio_; i < sizeof(elementos_); i++)
    {
        elementos_[i] = nullptr;
    }   
    }
}

// int inicio_;  // Primeiro índice válido do vetor.
// std::string* elementos_;  // Elementos do vetor.
