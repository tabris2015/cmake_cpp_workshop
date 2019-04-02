#include <iostream>
#include "vector3.h"

int main()
{
    Vector3 v1(0, 5.2, 7.4);
    Vector3 v2(2.01, 3.45, 6);
    
    Vector3 u = v1 + v2;
    float s = v1 * v2;

    std::cout << "v1: ";
    v1.show(); 
    std::cout << "v2: "; 
    v2.show();

    std::cout << "Suma: ";
    u.show();

    std::cout << "Producto escalar: " << s << std::endl;

    std::cout << "Distancia: " << v1.dist(v2) << std::endl;

    return 0;
}
