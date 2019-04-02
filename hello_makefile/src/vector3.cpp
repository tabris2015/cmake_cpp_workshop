#include "vector3.h"

Vector3::Vector3(): x(0), y(0), z(0) {}

Vector3::Vector3(float x, float y, float z): x(x), y(y), z(z){}

Vector3 Vector3::operator+(const Vector3 &otro) const 
{
    return Vector3(x + otro.x, y + otro.y, z + otro.z);
}

float Vector3::operator*(const Vector3 &otro) const 
{
    return x * otro.x + y * otro.y + z * otro.z;
}

float Vector3::dist(const Vector3 &otro) const
{
    return std::sqrt(std::pow(otro.x - x, 2) + std::pow(otro.y - y, 2) + std::pow(otro.z - z, 2));
}

void Vector3::show()
{
    std::cout << "(" << x << "," << y << "," << z << ")" << std::endl;
}