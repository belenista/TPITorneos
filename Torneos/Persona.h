#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

class Persona{

    private:
    char _dni[8]
    char _nombre[30]
    char _apellido [30]
    char _tel[10]
    char _eMail[50]
    Fecha _fechaNacimiento

    public:

    Persona();
    Persona(char _dni, char nombre, char _apellido, char _tel, char _email, char fechaNacimiento);
    void SetDni (char dni);
    void SetNombre (char nombre);
    void SetApellido (char aellido);
    void SetTel (char Tel);
    void SetEMail (char eMail);
    void SetFechaNacimiento (Fecha fechaNacimiento);
    char getDni();
    char getNombre();
    char getApellido();
    char getTel();
    char getEMail();
    Fecha getFechaNacimiento();
    };



#endif // PERSONA_H_INCLUDED
