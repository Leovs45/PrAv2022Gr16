#ifndef DTPARTIDA
#define DTPARTIDA
#include "DtFechaHora.h"

class DtPartida {
    private:
        //Esto serían los atributos de la clase
        DtFechaHora* fecha;
        int duracion;
    public:
        //Esto serían las operaciones de la clase
        DtPartida();
        DtPartida(DtFechaHora*fecha, int duracion);
        DtFechaHora* getFecha();
        int getDuracion();
        ~DtPartida();

        virtual int darTotalHorasParticipantes()=0;

        friend ostream& operator << (ostream&,const DtPartida&);
};

#endif