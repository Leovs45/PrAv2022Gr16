#include "DtPartidaMultijugador.h"

DtPartidaMultijugador::DtPartidaMultijugador(){}
DtPartidaMultijugador::DtPartidaMultijugador(DtFechaHora*fecha, int duracion, bool transmitidaEnVivo):DtPartida(fecha,duracion){
    this->transmitidaEnVivo=transmitidaEnVivo;
}
bool DtPartidaMultijugador::getTransmitidaEnVivo(){
    return this->transmitidaEnVivo;
}
DtPartidaMultijugador::~DtPartidaMultijugador(){}

ostream& operator << (ostream& salida,const DtPartidaMultijugador& partida){
    string transmitidaenvivo;
    if (partida.transmitidaEnVivo) {
        transmitidaenvivo = "Sí";
    } else {
        transmitidaenvivo = "No";
    }
    cout << /*"\tFecha: " << partida.getFecha() << "\n\tDuración: " << partida.duracion << "\n*/"\tTransmitida en vivo: " << transmitidaenvivo << endl;
  return salida;
}