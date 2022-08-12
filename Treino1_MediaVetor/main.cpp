// Programa para encontrar a media entre os elementos de um vetor

#include <iostream>
#include "media.h"

using std::cout;
using std::endl;

int main()
{
    float v[] = {3, 4, 2, 1, 5};
    cout << "A media eh: " << media(5, v) << endl;

    // FIM ---------------------------------------------------------------------------------------------------------------------------------
    
    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
    return 0;
}