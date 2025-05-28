///Ejercicio:
///Autor:Bel
///Fecha:
///Comentario:

# include<iostream>

using namespace std;
# include "Persona.h"

Persona::Persona(){
    _dni="";
    _nombre="";
    _apellido="";
    _tel="";
    _eMail="";
    fechaNacimiento=0
}
 Persona::Persona(char dni, char nombre, char apellido, char tel, char eMail, Fecha fechaNacimiento){
    _dni=dni;
    _nombre=nombre;
    _apellido=_apellido;
    _tel=tel;
    _eMail=eMail;
    ///fechaNacimiento

 }
 void Persona::setDni (char dni){
 _dni=dni;
 }
 void Persona::setNombre (char nombre){
 _nombre=nombre;
 }
 void Persona::SetApellido(char apellido){
 _apellido=apellido;
 }
 void Persona::setTel (char tel){
 _tel=tel;
 }
 void Persona::setEMail (char eMail){
 _eMail=eMail;
 }
 void Persona::setFechaNacimiento (Fecha FechaNacimiento){
 _dni=dni;
 }

