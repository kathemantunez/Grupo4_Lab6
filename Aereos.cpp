#include "Dinosaurios.h"
#include "Aereos.h"

Aereos::Aereos(){

}
Aereos::Aereos(string nombre, int altura, int peso, string fechaCreacion, string sexo, int longitud
, bool vuela, bool plumas):Dinosaurios(nombre, altura, peso, fechaCreacion, sexo, longitud){
  this->vuela = vuela;
  this->plumas = plumas;
}

bool Aereos::getVuela(){
  return vuela;
}

bool Aereos::getPlumas(){
  return plumas;
}

void Aereos::toString(){
  
}
