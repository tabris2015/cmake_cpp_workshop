#ifndef VECTOR3_H
#define VECTOR3_h

#include <iostream>
#include <cmath>

struct Vector3
{
    float x;
    float y;
    float z;
    // constructor por defecto
    Vector3(/* args */);
    // Constructor con valores de inicializacion
    Vector3(float x, float y, float z);

    // sobrecarga del operador + para suma de vectores
    Vector3 operator+(const Vector3 &otro) const;

    // sobrecarga del operador * para producto escalar de vectores
    float operator*(const Vector3 &otro) const;
    
    // calculo de la distancia de in vector a otro
    float dist(const Vector3 &otro) const;
    
    // imprime los valores del vector
    void show();

};

#endif // !VECTOR3_H