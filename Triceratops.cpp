#include "Triceratops.h"
#include "Herbivoros.h"
#include <iostream>
using namespace std;

Triceratops::Triceratops(){

}
Triceratops::Triceratops(int longitudCuernos, int longitudCuernoNasal){
  this->longitudCuernos = longitudCuernos;
  this->longitudCuernoNasal = longitudCuernoNasal;
}

int Triceratops::getLongitudCuernos(){
  return longitudCuernos;
}
int Triceratops::getLongitudCuernosNasal(){
  return longitudCuernoNasal;
}
