#ifndef CUIDADOR_H
#define CUIDADOR_H
#include "Dinosaurios.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class cuidadores{

    private:
    //cuentan con un Nombre, ID, Sexo y Edad (mayor a 21 años).
        string nombre;
        string ID;
        string sexo;
        int edad;
        vector<Dinosaurios*> v_dinosaurio;

    public:
        cuidadores();
        cuidadores(string,string,string,int);
        string getnombre();
        string getID();
        string getsexo();
        int getedad();
        Dinosaurios* getdinosaurio(int);
        void setdinosaurio(Dinosaurios*);
        void toString();

};
#endif