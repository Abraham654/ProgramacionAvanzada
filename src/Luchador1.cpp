#include <curses.h>
#include <iostream>
#include <fstream>
#include <Dibujo.hpp>
#include <curses.h>
#include <unistd.h>
#include <Ventana.hpp>
#include <Fighter1.hpp>
#include <Bala.hpp>
using namespace std;

int main(int argc, char const *argv[])
{

    Ventana ventana;
    Vaca* vaca1 = new Vaca(0, 0);
    Vaca* vaca2 = new Vaca(100, 0);
    Vaca* vaca3 = new Vaca(50, 50);
    Arma* arma = new Arma();
    Bala* bala = new Bala(0,0);


    vaca1->RecogerArma(arma);

    list<Dibujo*> dibujos;
    dibujos.push_back(vaca1);
    dibujos.push_back(vaca2);
    dibujos.push_back(vaca3);
    dibujos.push_back(arma);
    dibujos.push_back(bala);

    list<Actualizable*>actualizables;
    actualizables.push_back(vaca1);
    actualizables.push_back(vaca2);
    actualizables.push_back(vaca3);
    actualizables.push_back(bala);

    while (true)
    {
        int key = getch();
        if (key == 'q' || key == 'Q')
            // salir del juego
            break;
        if(key == 'a' || key == KEY_LEFT){
            vaca1->DesplazarIzquierda();
        }
        if(key == 'd' || key == KEY_RIGHT){
            vaca1->DesplazarDerecha();
        }
        if(key == 'w'||key ==KEY_UP){
            arma->DesplazarArriba();
        }
         if(key == 's'||key ==KEY_DOWN){
            bala->DesplazarAbajo();
        }
        ventana.Actualizar(actualizables);
        ventana.Dibujar(dibujos);
    }
    return 0;
}