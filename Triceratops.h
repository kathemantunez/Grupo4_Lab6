#ifndef TRICERATOPS_H
#define TRICERATOPS_H
#include "Herbivoros.h"
#include <iostream>

class Triceratops:public Herbivoros{
  public:
    int longitudCuernos;
    int longitudCuernoNasal;

  public:
    Triceratops();
    Triceratops(int,int);
    int getLongitudCuernos();
    int getLongitudCuernosNasal();
    
};
#endif
