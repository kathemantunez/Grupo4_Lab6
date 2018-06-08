#include "Marinos.h"
#include "Dinosaurios.h"
#include <iostream>

using namespace std;

Marinos::Marinos(){

}

Marinos::Marinos(string nombre, int altura, int peso, string fechaCreacion, string sexo, int longitud,int numAletas,string tipo):
Dinosaurios(nombre,altura,peso,fechaCreacion,sexo,longitud){
  this-> numAletas = numAletas;
  this-> Tipo = tipo;
}

int Marinos::getnumAletas(){
    return numAletas;
}

string Marinos::getTipo(){
    return Tipo;
}

void Marinos::setnumAletas(int o){
    numAletas = o;
}

void Marinos::setTipo(string t){
    Tipo = t;
}

void Marinos::toString(){
  cout <<"Nombre: " << nombre <<"Altura: "<<altura <<"Peso: "<< peso <<"Fecha: "<< fechaCreacion <<"Sexo: "<<sexo <<
  "Longitud: "<< longitud <<"Num. de Aletas: "<<numAletas<<"Tipo: "<<Tipo << endl;
}
