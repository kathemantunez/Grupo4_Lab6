#ifndef AEREOS_H
#define AEREOS_H
#include "Dinosaurios.h"
#include<iostream>
using namespace std;

class Aereos:public Dinosaurios {

  public:

    bool vuela;
    bool plumas;

  public:

    Aereos();
    Aereos(string, int, int , string, string, int, bool, bool);
    bool getVuela();
    bool getPlumas();
    virtual void toString();


};
#endif
