#ifndef DTPARTIDAMULTIJUGADOR
#define DTPARTIDAMULTIJUGADOR
#include "DtPartida.h"

class DtPartidaMultijugador: public DtPartida {
    private:
        bool transmitidaEnVivo;
    public:
        DtPartidaMultijugador();
        DtPartidaMultijugador(DtFechaHora*fecha, int duracion, bool transmitidaEnVivo);
        bool getTransmitidaEnVivo();
        ~DtPartidaMultijugador();

        friend ostream& operator << (ostream&,const DtPartidaMultijugador&);
};

#endif