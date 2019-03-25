#ifndef SALUDO_H

#include <iostream>
#include <string>
class Saludo
{
private:
    /* data */
    std::string nombre_;
    std::string saludo_;

public:
    Saludo(std::string nombre="test");
    void memorizar(std::string frase);
    void hablar(std::string frase);
    void repetir(int rep);
};

#endif // !SALUDO_H