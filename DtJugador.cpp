#include "DtJugador.h"

DtJugador::DtJugador(){}
DtJugador::DtJugador(string nickname, int edad){
    this->nickname=nickname;
    this->edad=edad;
}
string DtJugador::getNickname(){
    return this->nickname;
}
int DtJugador::getEdad(){
    return this->edad;
}
DtJugador::~DtJugador(){}

ostream& operator << (ostream& salida,const DtJugador& jugador){
  cout << "\tNickname: " << jugador.nickname << "\n\tEdad: " << jugador.edad << endl;
  return salida;
}