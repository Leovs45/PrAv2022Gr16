#ifndef JUEGO
#define JUEGO
#include "TipoGenero.h"
#include <iostream>
using namespace std;

class Juego {
    private:
        string nombre;
        TipoJuego genero;
    public:
        Juego();
        Juego(string nombre, TipoJuego genero);
        string getNombre();
        TipoJuego getGenero();
        void setNombre(string nombre);
        void setGenero(TipoJuego genero);
        ~Juego();
};


#endif