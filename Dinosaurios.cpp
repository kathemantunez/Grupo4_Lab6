#include "Dinosaurios.h"
#include <iostream>
using namespace std;

Dinosaurios::Dinosaurios(){

}

Dinosaurios::Dinosaurios(string nombre, int altura, int peso, string fechaCreacion, string sexo, int longitud){
  this->nombre = nombre;
  this->altura = altura;
  this->peso = peso;
  this->fechaCreacion = fechaCreacion;
  this->sexo = sexo;
  this->longitud = longitud;
}

string Dinosaurios::getNombre(){
    return nombre;
}

int Dinosaurios::getAltura(){
    return altura;
}

int Dinosaurios::getPeso(){
    return peso;
}

string Dinosaurios::getFechaCreacion(){
    return fechaCreacion;
}

string Dinosaurios::getSexo(){
    return sexo;
}
int Dinosaurios::getLongitud(){
    return longitud;
}
