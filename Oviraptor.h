#ifndef OVIRAPTOR_H
#define OVIRAPTOR_H
#include "Omnivoros.h"
#include <iostream>
#include "Omnivoros.h"
#include "Dinosaurios.h"
using namespace std;

class Oviraptor: public Omnivoros{
  public:
    int alturaCresta;
    bool plumaje;

  public:
    Oviraptor();
    Oviraptor(string, int, int, string, string, int, int, int, int, bool);
    int getalturaCresta();
    bool getPlumaje();
    void setAlturaCresta(int);
    void setPlumaje(bool);
    virtual void toString();


};
#endif
