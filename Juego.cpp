#include "Juego.h"

Juego::Juego(){}
Juego::Juego(string nombre, TipoJuego genero){
    this->nombre=nombre;
    this->genero=genero;
}
string Juego::getNombre(){
    return this->nombre;
}
TipoJuego Juego::getGenero(){
    return this->genero;
}
void Juego::setNombre(string nombre){
    this->nombre=nombre;
}
void Juego::setGenero(TipoJuego genero){
    this->genero=genero;
}
Juego::~Juego(){}