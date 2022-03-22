#ifndef DTJUEGO
#define DTJUEGO
#include "TipoGenero.h"
#include <iostream>
#include <string>
using namespace std;

class DtJuego {
    private:
        string nombre;
        TipoJuego genero;
        int totalHorasDeJuego;
    public:
        DtJuego();
        DtJuego(string nombre, TipoJuego genero, int totalHorasDeJuego);
        string getNombre();
        TipoJuego getGenero();
        int getTotalHorasDeJuego();
        ~DtJuego();

        friend ostream& operator <<(ostream&,const DtJuego&);
};


#endif