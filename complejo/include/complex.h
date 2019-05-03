#ifndef COMPLEX_H
#define COMPLEX_H // para que no se incluya varias veces

class Complex
{
private:
    float real_;
    float imag_;
public:
    // constructor 
    Complex(float re, float im);
    // obtiene el modulo del vector
    float abs();
    // obtiene el argumento del vector
    float arg();
    // obtiene el complejo conjugado
    Complex conj();
    // sobrecargar operadores
    // operador suma
    Complex operator+(Complex& otro);
    // operador mult
    Complex operator*(Complex& otro);
    // 
    float real(){return real_;};
    float imag(){return imag_;};
};
// devuelve un numero complejo desde su forma polar
Complex polar(float r, float theta);

#endif // !COMPLEX_H