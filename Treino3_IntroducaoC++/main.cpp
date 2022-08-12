#include <iostream>

/*
using namespace std;
cout << "Leo Soares" << endl

Função p/ nao precisar colocar std::
Funciona caso nao haja funcoes com nomes repetidos
*/

int main()
{

    std::cout << "Leo Soares" << std::endl;
    std::cout << "Leo tem " << 19 << " anos" << std::endl
              << std::endl;

    std::cout << "Jonas" << std::endl;
    std::cout << "Insira a idade de Jonas: " << std::endl;

    int i;
    std::cin >> i;
    std::cout << "Jonas tem " << i << " anos" << std::endl
              << std::endl;

    // Caso o programa seja executado com o comando ./main < valores.txt o valor de i sera puxado do arquivo

    int j;
    while (std::cin >> j)
    {
        std::cout << j * j << std::endl;
    }

    // Imprime o quadrado dos valores seguintes no arquivo.

    // Caso o programa seja executado com o comando ./main < valores.txt > saida.txt a saida ira para um arquivo novo

    // Caso o programa seja executado apenas com ./main , deve-se pressionar CTRL + D para interromper o loop de entrada no while. 

    return 0;
}