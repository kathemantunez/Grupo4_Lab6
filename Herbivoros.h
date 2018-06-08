#ifndef HERBIVOROS_H
#define HERBIVOROS_H
#include <iostream>
using namespace std;

class Herbivoros{

  public:
    string tipo;
    int incisivos;

  public:
    Herbivoros();
    Herbivoros(string,int);
    string getTipo();
    int getIncisivos();

};
#endif
