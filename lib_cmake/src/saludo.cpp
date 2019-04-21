#include "saludo.h"

Saludo::Saludo(std::string nombre):nombre_(nombre){}

void Saludo::memorizar(std::string frase)
{
    saludo_ = frase;
}
void Saludo::hablar(std::string frase)
{
    std::cout << frase << std::endl;
}
void Saludo::repetir(int rep)
{
    for(int i = 0; i < rep; i++)
    {
        std::cout << i << ": " << saludo_ << std::endl;
    }
}