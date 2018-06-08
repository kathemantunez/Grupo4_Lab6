#include "Triceratops.h"
#include "Herbivoros.h"
#include "Dinosaurios.h"
#include <iostream>
using namespace std;

Triceratops::Triceratops(){

}
Triceratops::Triceratops(string nombre, int altura, int peso, string fechaCreacion, string sexo, int longitud, string tipo, int incisivos, int longitudCuernos, int longitudCuernoNasal)
:Herbivoros(nombre, altura, peso, fechaCreacion, sexo, longitud, tipo, incisivos){
  this->longitudCuernos = longitudCuernos;
  this->longitudCuernoNasal = longitudCuernoNasal;
}

int Triceratops::getLongitudCuernos(){
  return longitudCuernos;
}
int Triceratops::getLongitudCuernosNasal(){
  return longitudCuernoNasal;
}
void Triceratops::toString(){

}
