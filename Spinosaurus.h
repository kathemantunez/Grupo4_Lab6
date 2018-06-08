#ifndef SPINOSAURUS_H
#define SPINOSAURUS_H
#include <iostream>

#include "Dinosaurios.h"
#include "Carnivoros.h"

using namespace std;

class Spinosaurus:public Carnivoros {

  public:
    int alturaEspina;
    int longBrazos;

  public:
    //Constructor
    Spinosaurus();
    Spinosaurus(string,int,int,string,string,int,string,string,int,int);
    //Getters
    int getalturaEspina();
    int getlongBrazos();

    //Setters
    void setalturaEspina(int);
    void setlongBrazos(int);
    virtual void toString();

};
#endif
