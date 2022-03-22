#include "PartidaMultijugador.h"

PartidaMultijugador::PartidaMultijugador(){}
PartidaMultijugador::PartidaMultijugador(DtFechaHora*fecha, int duracion, bool transmitidaEnVivo):Partida(fecha,duracion){
    this->transmitidaEnVivo=transmitidaEnVivo;
}
bool PartidaMultijugador::getTransmitidaEnVivo(){
    return this->transmitidaEnVivo;
}
void PartidaMultijugador::setTransmitidaEnVivo(bool transmitidaEnVivo){
    this->transmitidaEnVivo=transmitidaEnVivo;
}
PartidaMultijugador::~PartidaMultijugador(){}
int PartidaMultijugador::darTotalHorasParticipantes(){}