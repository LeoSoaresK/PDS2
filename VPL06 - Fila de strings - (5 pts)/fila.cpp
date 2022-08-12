#include "fila.h"

Fila::Fila()
{
    primeiro_ = nullptr;
}

string Fila::primeiro()
{
    return primeiro_->chave;
}

string Fila::ultimo()
{
    return ultimo_->chave;
}

bool Fila::vazia()
{
    return (primeiro_ == nullptr);
}

void Fila::Inserir(string k)
{

    if (vazia())
    {
        primeiro_ = new No{k, nullptr};
        ultimo_ = primeiro_;
    }

    else if (ultimo_ == primeiro_)
    {
        No *aux = new No{k, nullptr};

        primeiro_->proximo = aux;

        ultimo_ = aux;
    }

    else if (ultimo_ != primeiro_)
    {
        No *aux = ultimo_;
        
        ultimo_ = new No {k, nullptr};
        
        aux->proximo = ultimo_;
    }
}

void Fila::Remover()
{
    No *aux = primeiro_;

    primeiro_ = primeiro_->proximo;

    delete aux;
}

int Fila::tamanho()
{
    No *aux = primeiro_;
    int i = 0;

    while (aux != nullptr)
    {
        i++;
        aux = aux->proximo;
    }

    return i;
}

Fila::~Fila()
{
    while (!vazia())
    {
        Remover();
    }
}