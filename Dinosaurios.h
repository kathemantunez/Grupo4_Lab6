#ifndef DINOSAURIOS_H
#define DINOSAURIOS_H
#include <iostream>
using namespace std;

class Dinosaurios {

  public:
    string nombre;
    int altura;
    int peso;
    string fechaCreacion;
    string sexo;
    int longitud;

  public:
    //Constructor
    Dinosaurios();
    Dinosaurios(string, int, int, string, string, int);
    //Getters
    string getNombre();
    int getAltura();
    int getPeso();
    string getFechaCreacion();
    string getSexo();
    int getLongitud();
    //Cuidador*
    virtual void toString();

    //Setters
    /*void setNombre(string);
    void setAltura(int);
    void setPeso(int);
    void setFechaCreacion(string);
    void setSexo(string);
    void setLongitud(int);
    virtual void toString();*/
};
#endif
