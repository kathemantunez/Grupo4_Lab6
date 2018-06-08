#include "Oviraptor.h"
#include "Omnivoros.h"
#include "Dinosaurios.h"
#include <iostream>
using namespace std;

Oviraptor::Oviraptor(){

}

Oviraptor::Oviraptor(string nombre, int altura, int peso, string fechaCreacion, string sexo, int longitud
,int numeroMolares, int numeroColmillos, int alturaCresta, bool plumaje): Omnivoros(nombre, altura, peso, fechaCreacion, sexo, longitud, numeroMolares, numeroColmillos){
  this->alturaCresta = alturaCresta;
  this->plumaje = plumaje;
}

int Oviraptor::getalturaCresta(){
  return alturaCresta;
}

bool Oviraptor::getPlumaje(){
  return plumaje;
}

void Oviraptor::toString(){
  cout <<"Nombre: " << nombre <<"Altura: "<<altura <<"Peso: "<< peso <<"Fecha: "<< fechaCreacion <<"Sexo: "<<sexo <<
  "Longitud: "<< longitud<< "Altura de la cresta: "<<alturaCresta << "Tiene plumaje?: "<< plumaje;
}

void Oviraptor::setAlturaCresta(int alturaCresta){
  this->alturaCresta = alturaCresta;
}

void Oviraptor::setPlumaje(bool plumaje){
  this->plumaje = plumaje;
}
