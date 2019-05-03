#include "complex.h"
#include <math.h>
Complex::Complex(float re, float im)
:real_(re), imag_(im)
{}

float Complex::abs()
{
    return sqrtf(powf(real_, 2) + powf(imag_,2));
}

float Complex::arg()
{
    return atanf(imag_/real_);
}

Complex Complex::conj()
{
    return Complex(real_, (-1) * imag_);
}

Complex Complex::operator+(Complex& otro)
{
    return Complex(real_ + otro.real(), imag_ + otro.imag());
}

Complex Complex::operator*(Complex& otro)
{
    float re;
    float im;
    //
    re = real_ * otro.real() - imag_ * otro.imag();
    im = real_ * otro.imag() + imag_ * otro.real();

    return Complex(re, im);
}


Complex polar(float r, float theta)
{
    float re;
    float im;

    re = r * cosf(theta);
    im = r * sinf(theta);
    return Complex(re, im);
}



