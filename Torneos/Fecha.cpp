#include "Fecha.h"

Fecha::Fecha(){
    _dia = 0;
    _mes = 0;
    _anio = 0;
}

Fecha::Fecha(int dia, int mes, int anio){
    _dia = dia;
    _mes = mes;
    _anio = anio;
}

int Fecha::getDia(){
    return _dia;
}

int Fecha::getMes(){
    return _mes;
}

int Fecha::getAnio(){
    return _anio;
}

void Fecha::setDia(int dia){
  if(dia>=1 && dia <=31){
   _dia = dia;
  }

}

void Fecha::setMes(int mes){

if(mes>=1 && mes<=12){
    _mes = mes;
}
}

void Fecha::setAnio(int anio){
    _anio = anio;
}

/*std::string Fecha::toString(){
    return std::to_string(_dia) + "/" + std::to_string(_mes) + "/" + std::to_string(_anio);
}*/
