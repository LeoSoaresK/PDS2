#ifndef PILHA_H
#define PILHA_H

// Tipo de variavel para a pilha (armazena dois valores, um float e um endereco de memoria para a proxima caixa)
struct No
{
    float chave;
    No *proximo;
};

// Representa uma pilha de numeros reais
class Pilha
{

// Privado: Implementacao usada
private:

    // Aponta para onde esta a primeira caixinha de memoria
    No *topo_;

// Public: Funcoes usadas
public:

    // Cria uma pilha vazia
    Pilha();

    // Desaloca a memoria dos elementos que ainda estao na pilha;
    ~Pilha();

    // Retorna o elemento no topo da pilha
    float topo();

    // Insere k na pilha
    void Inserir(float k);

    // Testa se a pilha esta vazia
    bool vazia();

    // Remove o topo da pilha
    void Remover();
};

#endif