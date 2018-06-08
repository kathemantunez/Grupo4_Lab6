#ifndef OMNIVOROS_H
#define OMNIVOROS_H
#include <iostream>
#include "Dinosaurios.h"
using namespace std;

class Omnivoros:public Dinosaurios{

  public:
      int numeroMolares;
      int numeroColmillos;

  public:
    Omnivoros();
    Omnivoros(string, int, int, string, string, int, int, int);
    int getnumeroMolares();
    int getnumeroColmillos();
    virtual void toString() = 0;

};
#endif
