#ifndef PARTIDAMULTIJUGADOR
#define PARTIDAMULTIJUGADOR
#include "Partida.h"

class PartidaMultijugador: public Partida {
    private:
        bool transmitidaEnVivo;
    public:
        PartidaMultijugador();
        PartidaMultijugador(DtFechaHora*fecha, int duracion, bool transmitidaEnVivo);
        bool getTransmitidaEnVivo();
        void setTransmitidaEnVivo(bool transmitidaEnVivo);
        int darTotalHorasParticipantes();
};

#endif