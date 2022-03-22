#include "DtPartidaIndividual.h"

DtPartidaIndividual::DtPartidaIndividual(){}
DtPartidaIndividual::DtPartidaIndividual(DtFechaHora*fecha, int duracion, bool continuaPartidaAnterior):DtPartida(fecha,duracion){
    this->continuaPartidaAnterior=continuaPartidaAnterior;
}
bool DtPartidaIndividual::getContinuaPartidaAnterior(){
    return this->continuaPartidaAnterior;
}
DtPartidaIndividual::~DtPartidaIndividual(){}

ostream& operator << (ostream& salida,const DtPartidaIndividual& partida){
    string continuapartida;
    if (partida.continuaPartidaAnterior) {
        continuapartida = "Sí";
    } else {
        continuapartida = "No";
    }
    cout << /*"\tFecha: " << partida.getFecha() << "\n\tDuración: " << partida.duracion << "\n*/"\tContinúa Partida Anterior: " << continuapartida << endl;
  return salida;
}