#include "complexo.h"

Complexo::Complexo(){
    v[0] = 0.0;
    v[1] = 0.0;
}

Complexo Complexo::somar(Complexo k)
{
    Complexo j;

    j.v[0] = v[0];
    j.v[1] = v[1];

    return j;
}

Complexo Complexo::conjugado()
{
    Complexo y(0,0);
    y.real_ = real_;
    y.imag_ = -imag_;
    return y;
}
