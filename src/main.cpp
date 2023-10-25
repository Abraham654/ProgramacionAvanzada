#include <iostream>
#include <Mascota.hpp>
int main(int argc, char const *argv[])
{
    int a;
    std::cout << "Inicio del programa" << std::endl;

    void *puntero = malloc(32);
    std::cout << "int" << sizeof(int) << std::endl;
    std::cout << "char" << sizeof(char) << std::endl;
    std::cout << "float" << sizeof(float) << std::endl;
    std::cout << "char" << sizeof(char) << std::endl;
    std::cout << "bool" << sizeof(bool) << std::endl;
    std::cout << "double" << sizeof(double) << std::endl;
    std::cout << "Mascota" << sizeof(Mascota) << std::endl;
    std::cout << "Direcciones de memoria" << std::endl;
    std::cout << "size of: " << sizeof(puntero) << std::endl;
    std::cout << "puntero 1: " << puntero << std::endl;
    std::cout << "puntero 2: " << &puntero << std::endl;
    std::cout << "tamaño: " << sizeof(a) << std::endl;
    std::cout << "contenido: " << a << std::endl;
    std::cout << "direccion: " << &a << std::endl;

    free(puntero);
    void *puntero2 = malloc(sizeof(Mascota));
    int a = 4;
    free(puntero2);
    std::cout << "tamaño puntero: " << sizeof(Mascota) << std::endl;
    void *Mascota = malloc(sizeof(Mascota));
    //C
    std::cout<< "Mascota en C: " <<std::endl;
    Mascota* mascotaC = (Mascota*)malloc(sizeof(Mascota));
    mascotaC->Inicializar();
    mascotaC->DecirNombre();
    mascotaC->Destruir();
    free(mascotaC);
    //C++
    std::cout<< "Mascota en C++: " <<std::endl;
    Mascota* mascotaCPP = new Mascota();
    mascotaCPP->DecirNombre();

    return 0;
}