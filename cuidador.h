#ifndef CUIDADOR_H
#define CUIDADOR_H
#include <iostream>
#include <string>
using namespace std;

class cuidadores{

    private:
    //cuentan con un Nombre, ID, Sexo y Edad (mayor a 21 años).
        string nombre;
        string ID;
        string sexo;
        int edad;

    public:
        cuidadores(string,string,string,int);
        string getnombre();
        string getID();
        string getsexo();
        int getedad();

};
#endif