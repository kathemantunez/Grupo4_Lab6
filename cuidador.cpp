#include "cuidador.h"
#include <iostream>
#include <string>

using namespace std;

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