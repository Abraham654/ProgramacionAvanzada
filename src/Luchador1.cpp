#include <curses.h>
#include <iostream>
#include <fstream>
#include <Dibujo.hpp>
#include <curses.h>
#include <unistd.h>
#include <Ventana.hpp>
#include <Fighter1.hpp>
using namespace std;

int main(int argc, char const *argv[])
{

    Ventana ventana;
    Fighter1* fighter1 = new Fighter1(0, 0);


    list<Dibujo*> dibujos;
    dibujos.push_back(fighter1);
    

    list<Actualizable*>actualizables;
    actualizables.push_back(fighter1);
    

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