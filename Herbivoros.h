#ifndef HERBIVOROS_H
#define HERBIVOROS_H
#include <iostream>
using namespace std;
#include "Dinosaurios.h"

class Herbivoros:public Dinosaurios{

  public:
    string tipo;
    int incisivos;

  public:
    Herbivoros();
    Herbivoros(string, int, int, string, string, int,string,int);
    string getTipo();
    int getIncisivos();
    void setTipo(string);
    void setIncisivos(int);
    virtual void toString() = 0;

};
#endif
