#include "Carnivoros.h"
#include <iostream>
#include "Dinosaurios.h"
using namespace std;

Carnivoros::Carnivoros(){

}

Carnivoros::Carnivoros(string nombre, int altura, int peso, string fechaCreacion, string sexo, int longitud,string organo,string tipo)
:Dinosaurios(nombre,altura,peso,fechaCreacion,sexo,longitud){
  this->organo = organo;
  this->tipo = tipo;
}

string Carnivoros::getOrgano(){
    return organo;
}

string Carnivoros::getTipo(){
    return tipo;
}

void Carnivoros::setOrgano(string o){
    organo = o;
}

void Carnivoros::setTipo(string t){
    tipo = t;
}
