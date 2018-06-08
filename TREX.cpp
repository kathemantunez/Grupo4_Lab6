#include "TREX.h"
#include "Carnivoros.h"
#include "Dinosaurios.h"

using namespace std;

TREX::TREX(){

}

TREX::TREX(string nombre, int altura, int peso, string fechaCreacion, string sexo, int longitud,string organo,string tipo,int consumoDiario,int numColmillos)
:Carnivoros(nombre,altura,peso,fechaCreacion,sexo,longitud,organo,tipo){
  this-> consumoDiario = consumoDiario;
  this-> numColmillos = numColmillos;
}

int TREX::getconsumoDiario(){
  return consumoDiario;
}

int TREX::getnumColmillos(){
  return numColmillos;
}

void TREX::setconsumoDiario(int c){
  consumoDiario = c;
}

void TREX::setnumColmillos(int n){
  numColmillos = n;
}

void TREX::toString(){
  cout <<"Nombre: " << nombre <<"Altura: "<<altura <<"Peso: "<< peso <<"Fecha: "<< fechaCreacion <<"Sexo: "<<sexo <<
  "Longitud: "<< longitud <<"Organo: " <<organo << "Tipo: " <<tipo<<"Consumo de Carne: "<<consumoDiario<<"Num. de numColmillos: "<<numColmillos<< endl;
}
