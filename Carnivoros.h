#ifndef CARNIVOROS_H
#define CARNIVOROS_H
#include <iostream>

#include "Dinosaurios.h"

using namespace std;

class Carnivoros:public Dinosaurios {

  public:
    string organo;
    string tipo;

  public:
    //Constructor
    Carnivoros();
    Carnivoros(string,int,int,string,string,int,string,string);
    //Getters
    string getOrgano();
    string getTipo();

    //Setters
    void setOrgano(string);
    void setTipo(string);
    virtual void toString()=0;

};
#endif
