#ifndef PARTIDAINDIVIDUAL
#define PARTIDAINDIVIDUAL
#include "Partida.h"

class PartidaIndividual: public Partida {
    private:
        bool continuaPartidaAnterior;
    public:
        PartidaIndividual();
        PartidaIndividual(DtFechaHora*fecha, int duracion, bool continuaPartidaAnterior);
        bool getContinuaPartidaAnterior();
        void setContinuaPartidaAnterior(bool continuaPartidaAnterior);
        int darTotalHorasParticipantes();
        ~PartidaIndividual();
};

#endif