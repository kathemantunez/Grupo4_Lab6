#include "Omnivoros.h"
#include <iostream>
#include "Dinosaurios.h"
using namespace std;

Omnivoros::Omnivoros(){

}

Omnivoros::Omnivoros(string nombre, int altura, int peso, string fechaCreacion, string sexo, int longitud, int numeroColmillos, int numeroMolares)
:Dinosaurios(nombre, altura, peso, fechaCreacion, sexo, longitud){
  this->numeroColmillos = numeroColmillos;
  this->numeroMolares = numeroMolares;
}

int Omnivoros::getnumeroMolares(){
  return numeroMolares;
}

int Omnivoros::getnumeroColmillos(){
  return numeroColmillos;
}
