#include <iostream>
#include <string>
#include <cstdio>
class Mascota
{
private:
    std::string nombre;

public:
    Mascota(/* args */)
    {
        std::cout << "Ha nacido una  nueva mascota." << std::endl;
        this->nombre = "SnoppDog";
    }
    void Inicialiar(){
        std::cout<<"Ha nacido una nueva mascota."<<std::endl;
        this->nombre ="SnoppDog";
    }
    ~Mascota() {
        std::cout<<"Adios Mundo cruel."<<std::endl;
    }
    void Destruir(){
        std::cout<<"Adios Mundo cruel."<<std::endl;
    }
    void DecirNombre()
    {
        std::cout << "Mi nombre es: " << this->nombre << std::endl;
    }
};