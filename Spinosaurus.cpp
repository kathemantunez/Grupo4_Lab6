#include "TREX.h"
#include "Carnivoros.h"
#include "Dinosaurios.h"
#include "Spinosaurus.h"

using namespace std;

Spinosaurus::Spinosaurus(){

}

Spinosaurus::Spinosaurus(string nombre, int altura, int peso, string fechaCreacion, string sexo, int longitud,string organo,string tipo,int alturaEspina,int longBrazos)
:Carnivoros(nombre,altura,peso,fechaCreacion,sexo,longitud,organo,tipo){
  this-> alturaEspina = alturaEspina;
  this-> longBrazos = longBrazos;
}

int Spinosaurus::getalturaEspina(){
  return alturaEspina;
}

int Spinosaurus::getlongBrazos(){
  return longBrazos;
}

void Spinosaurus::setalturaEspina(int c){
  alturaEspina = c;
}

void Spinosaurus::setlongBrazos(int n){
  longBrazos = n;
}

void Spinosaurus::toString(){
  cout <<"Nombre: " << nombre <<"Altura: "<<altura <<"Peso: "<< peso <<"Fecha: "<< fechaCreacion <<"Sexo: "<<sexo <<
  "Longitud: "<< longitud <<"Organo: " <<organo << "Tipo: " <<tipo<<"Altura de Espina: "<<alturaEspina<<"Longitud de Brazos: "<<longBrazos<< endl;
}
