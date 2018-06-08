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

void Triceratops::setLongitudCuernosNasales(int longitudCuernoNasal){
    this->longitudCuernoNasal = longitudCuernoNasal;
}

void Triceratops::setlongitudCuernos(int longitudCuernos){
    this->longitudCuernos = longitudCuernos;
}

void Triceratops::toString(){
  cout <<"Nombre: " << nombre <<"Altura: "<<altura <<"Peso: "<< peso <<"Fecha: "<< fechaCreacion <<"Sexo: "<<sexo <<
  "Longitud: "<< longitud << "Longitud Cuernos: "<< longitudCuernos << "Longitud Cuernos Nasales: "<< longitudCuernoNasal;
}
