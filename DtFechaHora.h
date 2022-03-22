#ifndef DTFECHAHORA
#define DTFECHAHORA

#include <iostream>
#include <string>
using namespace std;

class DtFechaHora {
    private:
        //Esto serían los atributos de la clase
        int dia;
        int mes;
        int anio;
        int hora;
        int minuto;
    public:
        //Esto serían las operaciones de la clase
        DtFechaHora();
        DtFechaHora(int dia, int mes, int anio, int hora, int minuto);
        int getDia();
        int getMes();
        int getAnio();
        int getHora();
        int getMinuto();
        // void setDia(int dia);
        // void setMes(int mes);
        // void setAnio(int anio);
        // void setHora(int hora);
        // void setMinuto(int minuto);
        ~DtFechaHora();

        friend ostream& operator <<(ostream&,const DtFechaHora&);
};

#endif