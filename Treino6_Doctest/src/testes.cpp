#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
//Usa a funcao main de doctest.h

#include "doctest.h"

#include <iostream>
#include "pilha.h"

using namespace std;

//Macro para testar funcao inserir
TEST_CASE("Testa Pilha::Inserir()")
{
    Pilha b();
    b.Inserir(5.0);

    //Comando para o doctest checar se o topo da funcao eh igual a 5
    CHECK (b.topo() == 5.0);

    b.Inserir(4.0);

    CHECK (b.topo() == 4.0);

    b.Remover()

    CHECK (b.topo() == 5.0);
}