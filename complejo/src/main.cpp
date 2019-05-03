#include <iostream>
#include <vector>
#include "complex.h"

int main(int argc, char const *argv[])
{
    if(argc < 2) return -1;
    std::cout << argc << "\n";
    std::cout << argv[0] << "\n";
    std::cout << argv[1] << "\n";
    
    float theta = atof(argv[1]);
    
    // declarar mi poligono
    std::vector<Complex> cuadrado;
    cuadrado.emplace_back(1,1);
    cuadrado.emplace_back(-1,1);
    cuadrado.emplace_back(-1,-1);
    cuadrado.emplace_back(1,-1);
    
    std::cout << "tamaño del vector: " << cuadrado.size() << std::endl;

    std::vector<Complex> rotado;
    std::cout << "vector original " <<std::endl;

    for(auto p: cuadrado)
    {
        std::cout << "(" << p.real() << "," << p.imag() << ")\n";
        Complex rot = polar(1, theta); // pi/2
        Complex aux = p * rot;
        rotado.push_back(aux);
    }
    std::cout << "vector rotado " <<std::endl;

    for(auto p: rotado)
    {
        std::cout << "(" << p.real() << "," << p.imag() << ")\n";
    }

    return 0;
}
