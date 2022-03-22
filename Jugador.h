#ifndef JUGADOR
#define JUGADOR
#include <iostream>
using namespace std;
class Jugador{
    private:
        string nickname;
        int edad;
        int password;
    public:
        Jugador();
        Jugador(string nickname, int edad, int password);
        string getNickname();
        int getEdad();
        int getPassword();
        void setNickname(string nickname);
        void setEdad(int edad);
        void setPassword(int password);
        ~Jugador();
};

#endif