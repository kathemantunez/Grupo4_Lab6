#ifndef TREX_H
#define TREX_H
#include <iostream>

#include "Dinosaurios.h"
#include "Carnivoros.h"

using namespace std;

class TREX:public Carnivoros {

  public:
    int consumoDiario;
    int numColmillos;

  public:
    //Constructor
    TREX();
    TREX(string,int,int,string,string,int,string,string,int,int);
    //Getters
    int getconsumoDiario();
    int getnumColmillos();

    //Setters
    void setconsumoDiario(int);
    void setnumColmillos(int);
    virtual void toString();

};
#endif
