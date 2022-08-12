#include "pilha.h"

// Inicializa as funcoes de pilha.h
// Para compilar o .o, digite c++ -c pilha.cpp

// Cria uma pilha vazia
Pilha::Pilha()
{
    this->topo_ = nullptr;
}

// Retorna o elemento no topo da pilha
float Pilha::topo()
{
    return topo_->chave;
    // ou (*topo_).chave;
}

// Testa se a pilha esta vazia
bool Pilha::vazia()
{
    return (topo_ == nullptr);
}

// Insere k na pilha
void Pilha::Inserir(float k)
{
    // Insere um novo no em endereco de topo.
    topo_ = new No{k, topo_};

    // Que eh equivalente a:

    // No *ptr = new No;
    // ptr->chave = k;
    // ptr->proximo = topo_;
    // topo_ = ptr;
}

// Remove o topo da pilha
void Pilha::Remover()
{
    // Armazena o valor de topo em aux
    No *aux = topo_;

    // O valor do endereco de topo passa a ser o valor do proximo de topo (skipa uma caixa)
    topo_ = (*topo_).proximo;

    // Apaga aux
    delete aux;
}

Pilha::~Pilha()
{
    while (!vazia())
    {
        Remover();
    }
}