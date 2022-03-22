#ifndef PARTIDA
#define PARTIDA
#include "DtFechaHora.h"

class Partida {
    private:
        //Esto serían los atributos de la clase
        DtFechaHora* fecha;
        int duracion;
    public:
        //Esto serían las operaciones de la clase
        Partida();
        Partida(DtFechaHora*fecha, int duracion);
        DtFechaHora* getFecha();
        int getDuracion();
        void setFecha(DtFechaHora*fecha);
        void setDuracion(int duracion);
        ~Partida();
        virtual int darTotalHorasParticipantes()=0;
};

#endif