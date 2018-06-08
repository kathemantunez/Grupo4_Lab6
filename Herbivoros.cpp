#include "Herbivoros.h"
#include <iostream>
using namespace std;

Herbivoros::Herbivoros(){

}
Herbivoros::Herbivoros(string tipo, int incisivos){
  this->tipo = tipo;
  this->incisivos = incisivos;
}

string Herbivoros::getTipo(){
  return tipo;
}

int Herbivoros::getIncisivos(){
  return incisivos;
}
