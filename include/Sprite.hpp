#pragma once
#include <list>
#include <Dibujo.hpp>
using namespace std;

class Sprite
{
private:
    list<Dibujo*> cuadros;
public:
    Sprite(list<Dibujo*>cuadros){
        this->cuadros = cuadros;
    }
    void Dibujar(){
        this->cuadros[cuadroActual.Dibujar()];
    }
    void AvanzarCuadro(){

    }
    ~Sprite(){}
};
