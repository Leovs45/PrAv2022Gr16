#ifndef DTJUGADOR
#define DTJUGADOR
#include <iostream>
#include <string>
using namespace std;

class DtJugador{
    private:
        string nickname;
        int edad;
    public:
        DtJugador();
        DtJugador(string nickname, int edad);
        string getNickname();
        int getEdad();
        ~DtJugador();

        friend ostream& operator << (ostream&,const DtJugador&);
};

#endif