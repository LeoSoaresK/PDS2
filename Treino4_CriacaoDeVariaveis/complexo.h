#ifndef COMPLEXO_H
#define COMPLEXO_H

struct Complexo
{
private:
    double v[2];

public:
    double real() { return real; };
    double imag() { return imag; };

    Complexo conjugado();
    Complexo somar();
};
#endif