#pragma once
#include <Dibujo.hpp>
#include<Actualizable.hpp>
using namespace std;
class Fighter1 : public Dibujo, public Actualizable
{
private:
    
public:
    Fighter1() : Dibujo("ScorpionNormal")
    {
    }
    Fighter1(int x, int y) : Dibujo(x,y,"ScorpionNormal"){

    }
    void Actualizar()
    {
        //this->x += 1;
        // this->y +=1;
    }
    void DesplazarIzquierda(){
        this->x -=1;
    }
    void DesplazarDerecha(){
        this->x +=1;
    }
    void DesplazarArriba(){
        this->y +=3;
    }
    void DesplazarAbajo(){

    }
    ~Fighter1();
};
