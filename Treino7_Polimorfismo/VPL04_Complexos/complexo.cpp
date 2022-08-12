// Copyright 2022 Universidade Federal de Minas Gerais (UFMG)

#include "complexo.h"

#include <cmath>

Complexo::Complexo() : Complexo(0, 0){
}

Complexo::Complexo(double a, double b) {
    mod_ = sqrt ((a * a) + (b * b));
    arg_ = atan2 (b, a);
}

double Complexo::real() {
    return mod_ * cos (arg_);
}

double Complexo::imag() {
    return mod_ * sin (arg_);
}

bool Complexo::igual(Complexo x) {
    static const double epsilon = 1E-6;

    if (mod_ < epsilon)
    {
    return fabs(x.mod_ - mod_) < epsilon;
    }

    else
    {
    return fabs (x.mod_ - mod_) < epsilon &&
            fabs (sin(x.arg_) - sin(arg_)) < epsilon &&
            fabs (cos(x.arg_) - cos(arg_)) < epsilon;
    }
}

void Complexo::Atribuir(Complexo x) {
    mod_ = x.mod_;
    arg_ = x.arg_;
}

double Complexo::modulo() {
    return mod_;
}

Complexo Complexo::conjugado() {
    Complexo c;
    c.mod_ = mod_;
    c.arg_ = -arg_;
    return c;
}

Complexo Complexo::simetrico() {
    Complexo y;
    y.mod_ = mod_;
    y.arg_ = arg_ + M_PI;
    return y;
}

Complexo Complexo::inverso() {
    Complexo i;
    i.mod_ = 1.0 / mod_;
    i.arg_ = -arg_;
    return i;
}

Complexo Complexo::somar(Complexo y) {
    Complexo s (real() + y.real(), imag() + y.imag());
    return s;
}

Complexo Complexo::subtrair(Complexo y) {
    Complexo c;
    c.mod_ = mod_;
    c.arg_ = arg_ + M_PI;
    return c;
}

Complexo Complexo::multiplicar(Complexo y) {
    Complexo p;
    p.mod_ = mod_ * y.mod_;
    p.arg_ = arg_ + y.arg_;
    return p;
}

Complexo Complexo::dividir(Complexo y) {
    Complexo p = (*this);
    return p.multiplicar(y.inverso());
}
