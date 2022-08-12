#include <iostream>
#include <cmath>
#include <utility>

#include "complexo.h"

// Para compilar, digite
// c++ -c complexo.c
// g++ treino4.cpp complexo.cpp
// ou c++ treino4.o complexo.o -o treino4

using namespace std;

// Struct numeros complexos

// struct Complexo
// {
//     double real;
//     double imag;
//     Complexo conjugado()
//     {
//         Complexo y;
//         y.real = real;
//         y.imag = -imag;
//         return y;
//     }
// };

void imprimirComplexo(Complexo x)
{
    if (x.imag() == 0.0)
        cout << x.real() << endl;

    else if (x.imag() < 0)
        cout << x.real() << " - " << x.imag() << "i" << endl;

    else if (x.imag() > 0)
        cout << x.real() << " + " << x.imag() << "i" << endl;
}

// Funcao raizes equacao 2 grau

pair<Complexo, Complexo> raizes(double a, double b, double c)
{
    Complexo c1, c2;
    pair<Complexo, Complexo> par = {c1, c2};

    double delta = b * b - 4 * a * c;

    if (delta >= 0)
    {
        c1.imag = c2.imag = 0;
        c1.real = ((-b) + sqrt(delta)) / 2 * a;
        c1.real = ((-b) - sqrt(delta)) / 2 * a;
    }

    if (delta < 0)
    {
        c1.real = (-b) / 2 * a;
        c1.imag = sqrt(-delta) / 2 * a;
        c2 = c1.conjugado();
    }

    return par;
}

// A funcao retorna dois valores em par (2 numeros complexos c1 e c2)

int main()
{
    // Struct numeros complexos
    Complexo(c1);
    c1.real = 3.0;
    c1.imag = -4.0;

    imprimirComplexo(c1);

    // Funcao raizes equacao 2 grau
    double a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    pair<Complexo, Complexo> p = raizes(a, b, c);

    imprimirComplexo(p.first);
    imprimirComplexo(p.second);

    getchar();
    return 0;
}