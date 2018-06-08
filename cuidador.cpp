#include "cuidador.h"
#include "Dinosaurios.h"
#include <iostream>
#include <string>

using namespace std;
cuidadores::cuidadores(){

}
cuidadores::cuidadores(string pnombre,string pID,string psexo,int pedad){
    nombre=pnombre;
    ID=pID;
    sexo=psexo;
    edad=pedad;
}
string cuidadores::getnombre(){
    return nombre;
}
string cuidadores::getID(){
    return ID;
}
string cuidadores::getsexo(){
    return sexo;
}
int cuidadores::getedad(){
    return edad;
}
void cuidadores::setdinosaurio(Dinosaurios* dino){
    v_dinosaurio.push_back(dino);
}
Dinosaurios* cuidadores::getdinosaurio(int pos){
    return v_dinosaurio[pos];
}
void cuidadores::toString(){
     cout <<"Nombre: " << nombre <<" ID: "<<ID <<" sexo: "<<sexo<<" edad: "<<edad<<" dinosaurios:"<<endl;
     for(int i=0;i<v_dinosaurio.size();i++){
         cout<<v_dinosaurio[i]<<endl;
     }

}