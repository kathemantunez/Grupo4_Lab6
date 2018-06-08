#ifndef TRICERATOPS_H
#define TRICERATOPS_H
#include "Herbivoros.h"
#include "Dinosaurios.h"
#include <iostream>

class Triceratops:public Herbivoros{
  public:
    int longitudCuernos;
    int longitudCuernoNasal;

  public:
    Triceratops();
    Triceratops(string, int, int, string, string, int, string, int, int ,int);
    int getLongitudCuernos();
    int getLongitudCuernosNasal();
    virtual void toString();
    void setlongitudCuernos(int);
    void setLongitudCuernosNasales(int);

};
#endif
