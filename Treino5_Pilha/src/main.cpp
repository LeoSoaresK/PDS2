#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    // Cria um bloco de 10 caixinhas em algum lugar da memoria
    float *v = new float[n];

    // Nao apaga o ponto v, mas sim o conteudo de v (endereco de memoria para onde v aponta)
    delete[] v;

    getchar();
    return 0;
}