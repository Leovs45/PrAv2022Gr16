#include "DtJuego.h"

DtJuego::DtJuego(){}
DtJuego::DtJuego(string nombre, TipoJuego genero, int totalHorasDeJuego){
    this->nombre=nombre;
    this->genero=genero;
    this->totalHorasDeJuego=totalHorasDeJuego;
}
string DtJuego::getNombre(){
    return this->nombre;
}
TipoJuego DtJuego::getGenero(){
    return this->genero;
}
int DtJuego::getTotalHorasDeJuego(){
    return this->totalHorasDeJuego;
}
DtJuego::~DtJuego(){}

ostream& operator <<(ostream& salida,const DtJuego& juego){
  cout << "\tNombre: " << juego.nombre << "\n\tGénero: " << juego.genero << "\n\tHoras de Juego totales: " << juego.totalHorasDeJuego << endl;
  return salida;
}