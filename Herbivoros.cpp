#include "Herbivoros.h"
#include "Dinosaurios.h"
#include <iostream>
using namespace std;

Herbivoros::Herbivoros(){

}
Herbivoros::Herbivoros(string nombre, int altura, int peso, string fechaCreacion, string sexo, int longitud, string tipo, int incisivos)
:Dinosaurios(nombre, altura, peso, fechaCreacion, sexo, longitud){
  this->tipo = tipo;
  this->incisivos = incisivos;

}

string Herbivoros::getTipo(){
  return tipo;
}

int Herbivoros::getIncisivos(){
  return incisivos;
}

void Herbivoros::setIncisivos(int incisivos){
    this->incisivos = incisivos;
}

void Herbivoros::setTipo(string tipo){
    this->tipo = tipo;
}

void Herbivoros::toString(){

}
