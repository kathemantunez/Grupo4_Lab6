#include <iostream>
#include <string>
#include "cuidador.h"
#include "Dinosaurios.h"
#include "Aereos.h"
#include "Carnivoros.h"
#include "Herbivoros.h"
#include "Marinos.h"
#include "Omnivoros.h"
#include "Oviraptor.h"
#include "Spinosaurus.h"
#include "TREX.h"
#include "Triceratops.h"

#include <vector>
using namespace std;

void cuidadores1();
void dinosaurios1();
void agregar_dinosaurio();
void carnivoros1();
void herbivoros1();
void omnivoros1();
void aereos1();
void marinos1();


vector<cuidadores*> v_cuidadores;
vector<Dinosaurios*> v_dinosaurio;
Dinosaurios* dino;

int main(){
    bool seguir=true;
    char tecla;
    do{
        cout<<"---------------"<<endl;
        cout<<"JOYA PEQUEÑA"<<endl;
        cout<<"1. Cuidadores"<<endl;
        cout<<"2. Dinosaurios"<<endl;
        cout<<"3. Salir"<<endl;
        cin>>tecla;
        switch(tecla){
            case '1':
                cuidadores1();
                break;
            case '2':
                dinosaurios1();
                break;
            case '3':
                seguir=false;
                break;
            default:
                cout<<"opcion incorrecta"<<endl;
                break;


        }

    }while(seguir==true);


    return 0;
}

//cuidadores
void cuidadores1(){
    char tecla;
    cuidadores* cuidador;
    cout<<"---------------"<<endl;
    cout<<"1. Agregar cuidadores"<<endl;
    cout<<"2. Eliminar cuidadores"<<endl;
    cout<<"3. Listar"<<endl;
    cin>>tecla;
    string nombre,ID,sexo;
    int edad;
    int cont=0;
    switch(tecla){
        case '1'://agregar

                cout<<"ingrese el nombre:"<<endl;
                cin>>nombre;
                cout<<"ingrese su ID:"<<endl;
                cin>>ID;
                cout<<"ingrese el sexo(FEMENINO/MASCULINO):"<<endl;
                cin>>sexo;
                cout<<"ingrese edad:"<<endl;
                cin>>edad;
                while(edad<21){
                    cout<<"INCORRECTO,La edad tiene que ser mayor de 21 en adelante"<<endl;
                    cin>>edad;
                }
                cuidador=new cuidadores(nombre,ID,sexo,edad);
                v_cuidadores.push_back(cuidador);
                break;
        case '2'://eliminar

                int opcion;
                cout<<"¿A QUIEN DESEA ELIMINAR"<<endl;
                for(int i=0;i<v_cuidadores.size();i++){
                    cout<<cont<<". "<<v_cuidadores[i]->getnombre()<<endl;
                    cont++;
                }
                cin>>opcion;
                if(opcion<0 || opcion>=v_cuidadores.size()){
                    cout<<"incorrecto,opcion fuera de rango"<<endl;
                    cin>>opcion;
                }else{
                    v_cuidadores.erase(begin(v_cuidadores)+opcion);
                }
                break;

        case '3':
                for(int i=0;i<v_cuidadores.size();i++){
                    v_cuidadores[i]->toString();
                    cout<<endl;
                }

                break;
        default:
            cout<<"opcion incorrecta"<<endl;
            break;
    }


}

//Dinosaurios
void dinosaurios1(){
    char tecla;
    cout<<"---------------"<<endl;
    cout<<"1. Agregar dinosaurios"<<endl;
    cout<<"2. Listar dinosaurios"<<endl;
    cout<<"3. Modificar dinosaurios"<<endl;
    cout<<"4. Eliminar dinosaurios"<<endl;
    cin>>tecla;
    int cont=0;
    char tecla2;
    switch(tecla){
        case '1'://agregar
                if(v_cuidadores.size()!=0){
                    agregar_dinosaurio();
                }else{
                    cout<<"Error, Tiene que agregar cuidadores primero"<<endl;
                }
                break;
        case '2'://listar
                 for(int i=0;i<v_dinosaurio.size();i++){
                    v_dinosaurio[i]->toString();

                    cout<<endl;

                }
                break;
        case '3'://modificar
                
                


                break;
        case '4'://eliminar
                int opcion;
                cout<<"¿QUÈ DINOSAURIO DESEA ELIMINAR"<<endl;
                cout<<"------------------------------"<<endl;
                for(int i=0;i<v_dinosaurio.size();i++){
                    cout<<cont<<". "<<v_dinosaurio[i]->getNombre()<<endl;
                    cont++;
                }
                cout<<"------------------------------"<<endl;
                cin>>opcion;
                if(opcion<0 || opcion>=v_dinosaurio.size()){
                    cout<<"incorrecto, opcion fuera de rango"<<endl;
                    cin>>opcion;
                }else{
                    v_dinosaurio.erase(begin(v_dinosaurio)+opcion);
                }
                break;

        default:
            cout<<"opcion incorrecta"<<endl;
            break;
    }
}
void agregar_dinosaurio(){
    char tecla;
    cout<<"---------------"<<endl;

    cout<<"Tipos de Dinosaurio"<<endl;
    cout<<"1. Carnivoros"<<endl;
    cout<<"2. Herbìvoros"<<endl;
    cout<<"3. Omnivoros"<<endl;
    cout<<"4. Aèreos"<<endl;
    cout<<"5. Marinos"<<endl;

    cin>>tecla;
    switch(tecla){
        case '1':
            carnivoros1();
            break;
        case '2':
            herbivoros1();
             break;
        case '3':
            omnivoros1();
            break;
        case '4':
            aereos1();
            break;
        case '5':
            marinos1();
            break;
        default:
            cout<<"opcion incorrecta"<<endl;
            break;
    }
}
void marinos1(){

    //datos del clase padre
    string nombre,fecha,sexo;
    int altura,peso,longitud;
    cuidadores* c=new cuidadores();
    int cont=0;
    //Datos clase
    int num_aletas;
    string tipo;

    cout<<"---------------"<<endl;
    cout<<"Marinos"<<endl;
    //datos generales
            cout<<"ingrese nombre:"<<endl;
            cin>>nombre;
            cout<<"ingrese altura:"<<endl;
            cin>>altura;
            while(altura<2){
                cout<<"incorrecto,vuelva a ingresar altura"<<endl;
                cin>>altura;
            }
            cout<<"ingrese peso:"<<endl;
            cin>>peso;
            while(peso<200){
                cout<<"incorrecto,vuelva a ingresar peso"<<endl;
                cin>>peso;
            }
            cout<<"ingrese fecha de creacion(dd/mm/aaaa):"<<endl;
            cin>>fecha;
            cout<<"ingrese sexo:"<<endl;
            cin>>sexo;
            cout<<"ingrese longitud"<<endl;
            cin>>longitud;
            while(longitud<2){
                cout<<"incorrecto,vuelva a ingresar longitud"<<endl;
                cin>>longitud;
            }
            cout<<"Escoja cuidador:"<<endl;

            int opcion;
                for(int i=0;i<v_cuidadores.size();i++){
                    cout<<cont<<". "<<v_cuidadores[i]->getnombre()<<endl;
                    cont++;
                }
                cin>>opcion;
                if(opcion<0 || opcion>=v_cuidadores.size()){
                    cout<<"incorrecto,opcion fuera de rango"<<endl;
                    cin>>opcion;
                }else{
                    c=v_cuidadores[opcion];
                }

        //datos clase
        cout<<"numero de aletas"<<endl;
        cin>>num_aletas;
        while(num_aletas>6){
            cout<<"incorrecto,opcion fuera de rango"<<endl;
                    cin>>num_aletas;
        }
        cout<<"terrestre/marino o marino?:"<<endl;
        cin>>tipo;
        //string nombre, int altura, int peso, string fechaCreacion,
        // string sexo, int longitud,int numAletas,string tipo
        cout<<"hola"<<endl;
        dino=new Marinos(nombre,altura,peso,fecha,sexo,longitud,num_aletas,tipo);
         v_dinosaurio.push_back(dino);
          for(int i=0;i<v_cuidadores.size();i++){
                    if(v_cuidadores[i]==c){
                         c->setdinosaurio(dino);
                    }
                }
                cout<<"adios"<<endl;


}

void aereos1(){
    //datos del clase padre
    string nombre,fecha,sexo;
    int altura,peso,longitud;
    cuidadores* c=new cuidadores();
    int cont=0;
    //datos clase
    bool vuela,plumas;
    char op1,op2;
    cout<<"---------------"<<endl;
    cout<<"Aèreos"<<endl;
    //datos generales
            cout<<"ingrese nombre:"<<endl;
            cin>>nombre;
            cout<<"ingrese altura:"<<endl;
            cin>>altura;
            while(altura<2){
                cout<<"incorrecto,vuelva a ingresar altura"<<endl;
                cin>>altura;
            }
            cout<<"ingrese peso:"<<endl;
            cin>>peso;
            while(peso<200){
                cout<<"incorrecto,vuelva a ingresar peso"<<endl;
                cin>>peso;
            }
            cout<<"ingrese fecha de creacion(dd/mm/aaaa):"<<endl;
            cin>>fecha;
            cout<<"ingrese sexo:"<<endl;
            cin>>sexo;
            cout<<"ingrese longitud"<<endl;
            cin>>longitud;
            while(longitud<2){
                cout<<"incorrecto,vuelva a ingresar longitud"<<endl;
                cin>>longitud;
            }
            cout<<"Escoja cuidador:"<<endl;

            int opcion;
                for(int i=0;i<v_cuidadores.size();i++){
                    cout<<cont<<". "<<v_cuidadores[i]->getnombre()<<endl;
                    cont++;
                }
                cin>>opcion;
                if(opcion<0 || opcion>=v_cuidadores.size()){
                    cout<<"incorrecto,opcion fuera de rango"<<endl;
                    cin>>opcion;
                }else{
                    c=v_cuidadores[opcion];
                }
        //Datpos clase
        cout<<"vuela?\n1. SI\n2.NO"<<endl;
        cin>>op1;
        if(op1=='1'){
            vuela=true;
        }else{
            vuela=false;
        }
        cout<<"tiene plumas?\n1. SI\n2.NO"<<endl;
        cin>>op2;
        if(op2=='1'){
            plumas=true;
        }else{
            plumas=false;
        }
        dino=new Aereos(nombre,altura,peso,fecha,sexo,longitud,vuela,plumas);
        v_dinosaurio.push_back(dino);
         for(int i=0;i<v_cuidadores.size();i++){
                    if(v_cuidadores[i]==c){
                         c->setdinosaurio(dino);
                    }
                }



}

void omnivoros1(){
     //datos del clase padre
    string nombre,fecha,sexo;
    int altura,peso,longitud;
    cuidadores* c=new cuidadores();
    int cont=0;
    //Datos clase
    int num_molares,num_colmillos;
    //oviraptor
    int altura_cresta;
    char op;
    bool plumaje;
    cout<<"---------------"<<endl;
    cout<<"Oviraptor"<<endl;
    //datos generales
            cout<<"ingrese nombre:"<<endl;
            cin>>nombre;
            cout<<"ingrese altura:"<<endl;
            cin>>altura;
            while(altura<2){
                cout<<"incorrecto,vuelva a ingresar altura"<<endl;
                cin>>altura;
            }
            cout<<"ingrese peso:"<<endl;
            cin>>peso;
            while(peso<200){
                cout<<"incorrecto,vuelva a ingresar peso"<<endl;
                cin>>peso;
            }
            cout<<"ingrese fecha de creacion(dd/mm/aaaa):"<<endl;
            cin>>fecha;
            cout<<"ingrese sexo:"<<endl;
            cin>>sexo;
            cout<<"ingrese longitud"<<endl;
            cin>>longitud;
            while(longitud<2){
                cout<<"incorrecto,vuelva a ingresar longitud"<<endl;
                cin>>longitud;
            }
            cout<<"Escoja cuidador:"<<endl;

            int opcion;
                for(int i=0;i<v_cuidadores.size();i++){
                    cout<<cont<<". "<<v_cuidadores[i]->getnombre()<<endl;
                    cont++;
                }
                cin>>opcion;
                if(opcion<0 || opcion>=v_cuidadores.size()){
                    cout<<"incorrecto,opcion fuera de rango"<<endl;
                    cin>>opcion;
                }else{
                    c=v_cuidadores[opcion];
                }

        //datos clase
        cout<<"numeros de molares:"<<endl;
        cin>>num_molares;
        while(num_molares<0|| num_molares>30){
            cout<<"incorrecto,opcion fuera de rango"<<endl;
                    cin>>num_molares;
        }
        cout<<"numero de colmillos"<<endl;
        cin>>num_colmillos;
        while(num_colmillos<0|| num_colmillos>30){
            cout<<"incorrecto,opcion fuera de rango"<<endl;
                    cin>>num_colmillos;
        }

        //datos oviraptor
        cout<<"altura de cresta"<<endl;
        cin>>altura_cresta;
        while(altura_cresta>1){
             cout<<"incorrecto,opcion fuera de rango"<<endl;
             cin>>altura_cresta;
        }
        cout<<"tiene plumaje?"<<endl;
        cout<<"1. SI\n2. NO"<<endl;
        cin>>op;
        if(op=='1'){
            plumaje=true;
        }else{
            plumaje=false;
        }

    dino=new Oviraptor(nombre,altura,peso,fecha,sexo,longitud,num_molares,num_colmillos,altura_cresta,plumaje);
    v_dinosaurio.push_back(dino);
     for(int i=0;i<v_cuidadores.size();i++){
                    if(v_cuidadores[i]==c){
                         c->setdinosaurio(dino);
                    }
                }


}
void herbivoros1(){
    //datos del clase padre
    string nombre,fecha,sexo;
    int altura,peso,longitud;
    cuidadores* c=new cuidadores();
    int cont=0;
    //Datos clase
    string tipo;
    int num_incisivos;
    //Triceratops
    int long_cuernos, long_cuerno_nasal;

    cout<<"---------------"<<endl;
    cout<<"Triceratops"<<endl;
    //datos generales
            cout<<"ingrese nombre:"<<endl;
            cin>>nombre;
            cout<<"ingrese altura:"<<endl;
            cin>>altura;
            while(altura<2){
                cout<<"incorrecto,vuelva a ingresar altura"<<endl;
                cin>>altura;
            }
            cout<<"ingrese peso:"<<endl;
            cin>>peso;
            while(peso<200){
                cout<<"incorrecto,vuelva a ingresar peso"<<endl;
                cin>>peso;
            }
            cout<<"ingrese fecha de creacion(dd/mm/aaaa):"<<endl;
            cin>>fecha;
            cout<<"ingrese sexo:"<<endl;
            cin>>sexo;
            cout<<"ingrese longitud"<<endl;
            cin>>longitud;
            while(longitud<2){
                cout<<"incorrecto,vuelva a ingresar longitud"<<endl;
                cin>>longitud;
            }
            cout<<"Escoja cuidador:"<<endl;

            int opcion;
                for(int i=0;i<v_cuidadores.size();i++){
                    cout<<cont<<". "<<v_cuidadores[i]->getnombre()<<endl;
                    cont++;
                }
                cin>>opcion;
                if(opcion<0 || opcion>=v_cuidadores.size()){
                    cout<<"incorrecto,opcion fuera de rango"<<endl;
                    cin>>opcion;
                }else{
                    c=v_cuidadores[opcion];
                }
        //datos clase
        cout<<"tipo (frugìvoros/folìvoro)"<<endl;
        cin>>tipo;
        cout<<"numero de incisivos"<<endl;
        cin>>num_incisivos;
        while(num_incisivos<60){
            cout<<"incorrecto,opcion fuera de rango"<<endl;
            cin>>num_incisivos;
        }
        //Datos Triceratops
        cout<<"longitud de par de cuernos"<<endl;
        cin>>long_cuernos;
        while(long_cuernos<=1){
            cout<<"incorrecto,opcion fuera de rango"<<endl;
            cin>>long_cuernos;
        }
        cout<<"longitud de cuerno nasal"<<endl;
        cin>>long_cuerno_nasal;
        while(long_cuerno_nasal<5 || long_cuerno_nasal>12){
            cout<<"incorrecto,opcion fuera de rango"<<endl;
            cin>>long_cuerno_nasal;
        }
        //string nombre, int altura, int peso, string fechaCreacion, string sexo, int longitud, string tipo,
        // int incisivos, int longitudCuernos, int longitudCuernoNasal
        dino=new Triceratops(nombre,altura,peso,fecha,sexo,longitud,tipo,num_incisivos,long_cuernos,long_cuerno_nasal);
        v_dinosaurio.push_back(dino);
         for(int i=0;i<v_cuidadores.size();i++){
                    if(v_cuidadores[i]==c){
                         c->setdinosaurio(dino);
                    }
         }
}

void carnivoros1(){


    //datos del clase padre
    string nombre,fecha,sexo;
    int altura,peso,longitud;
    cuidadores* c=new cuidadores();

    //datos carnivoros
    string organo_depredador,tipo;
    //DATOS spinosaurus
    double altura_espina,log_brazos;
    //datos t rex
    int colmillos,consumo_carne;

    int cont=0;


    char tecla;
    cout<<"---------------"<<endl;
    cout<<"Tipos de Dinosaurio Carnivoro"<<endl;
    cout<<"1. T-Rex"<<endl;
    cout<<"2. Spinosaurus"<<endl;
    cin>>tecla;
    switch(tecla){
        case '1':
        //datos generales
            cout<<"ingrese nombre:"<<endl;
            cin>>nombre;
            cout<<"ingrese altura:"<<endl;
            cin>>altura;
            while(altura<2){
                cout<<"incorrecto,vuelva a ingresar altura"<<endl;
                cin>>altura;
            }
            cout<<"ingrese peso:"<<endl;
            cin>>peso;
            while(peso<200){
                cout<<"incorrecto,vuelva a ingresar peso"<<endl;
                cin>>peso;
            }
            cout<<"ingrese fecha de creacion(dd/mm/aaaa):"<<endl;
            cin>>fecha;
            cout<<"ingrese sexo:"<<endl;
            cin>>sexo;
            cout<<"ingrese longitud"<<endl;
            cin>>longitud;
            while(longitud<2){
                cout<<"incorrecto,vuelva a ingresar longitud"<<endl;
                cin>>longitud;
            }
            cout<<"Escoja cuidador:"<<endl;

            int opcion1;
                for(int i=0;i<v_cuidadores.size();i++){
                    cout<<cont<<". "<<v_cuidadores[i]->getnombre()<<endl;
                    cont++;
                }
                cin>>opcion1;
                if(opcion1<0 || opcion1>=v_cuidadores.size()){
                    cout<<"incorrecto,opcion fuera de rango"<<endl;
                    cin>>opcion1;
                }else{
                    c=v_cuidadores[opcion1];
                }
                //datos clase
                cout<<"ingrese organo depredador(dientes o garras)"<<endl;
                cin>>organo_depredador;
                cout<<"es cazado o carroñero"<<endl;
                cin>>tipo;
                //datos del t-rex
                cout<<"ingrese numero de colmillos:"<<endl;
                cin>>colmillos;
                while(colmillos<60){
                    cout<<"incorrecto, intentelo de nuevo:"<<endl;
                    cin>>colmillos;
                }
                cout<<"ingrese el consumo diario de carne:"<<endl;
                cin>>consumo_carne;
                while(consumo_carne<6877){
                     cout<<"incorrecto, intentelo de nuevo:"<<endl;
                    cin>>consumo_carne;
                }
                //string nombre, int altura, int peso, string fechaCreacion, string sexo, int longitud,
                //string organo,string tipo,int consumoDiario,int numColmillos
                dino=new TREX(nombre,altura,peso,fecha,sexo,longitud,organo_depredador,tipo,consumo_carne,colmillos);
                v_dinosaurio.push_back(dino);
                for(int i=0;i<v_cuidadores.size();i++){
                    if(v_cuidadores[i]==c){
                         c->setdinosaurio(dino);
                    }
                }




            break;
        case '2':
         //datos generales
            cout<<"ingrese nombre:"<<endl;
            cin>>nombre;
            cout<<"ingrese altura:"<<endl;
            cin>>altura;
            while(altura<2){
                cout<<"incorrecto,vuelva a ingresar altura"<<endl;
                cin>>altura;
            }
            cout<<"ingrese peso:"<<endl;
            cin>>peso;
            while(peso<200){
                cout<<"incorrecto,vuelva a ingresar peso"<<endl;
                cin>>peso;
            }
            cout<<"ingrese fecha de creacion(dd/mm/aaaa):"<<endl;
            cin>>fecha;
            cout<<"ingrese sexo:"<<endl;
            cin>>sexo;
            cout<<"ingrese longitud"<<endl;
            cin>>longitud;
            while(longitud<2){
                cout<<"incorrecto,vuelva a ingresar longitud"<<endl;
                cin>>longitud;
            }
            cout<<"Escoja cuidador:"<<endl;

            int opcion2;
                for(int i=0;i<v_cuidadores.size();i++){
                    cout<<cont<<". "<<v_cuidadores[i]->getnombre()<<endl;
                    cont++;
                }
                cin>>opcion2;
                if(opcion2<0 || opcion2>=v_cuidadores.size()){
                    cout<<"incorrecto,opcion fuera de rango"<<endl;
                    cin>>opcion2;
                }else{
                    c=v_cuidadores[opcion2];
                }
                //datos clase
                cout<<"ingrese organo depredador(dientes o garras)"<<endl;
                cin>>organo_depredador;
                cout<<"es cazado o carroñero"<<endl;
                cin>>tipo;
                //DATOS SPINOSAURUS
                cout<<"ingrese altura de espina neural:"<<endl;
                cin>>altura_espina;
                while(altura_espina<2.5){
                    cout<<"incorrecto,opcion fuera de rango"<<endl;
                    cin>>altura_espina;
                }
                cout<<"ingrese la longitud de los brazos"<<endl;
                cin>>log_brazos;
                while(log_brazos>1.5){
                    cout<<"incorrecto,opcion fuera de rango"<<endl;
                    cin>>log_brazos;
                }
           //string nombre, int altura, int peso, string fechaCreacion, string sexo, int longitud,string organo,string tipo,int alturaEspina,int longBrazos
                dino=new Spinosaurus(nombre,altura,peso,fecha,sexo,longitud,organo_depredador,tipo,altura_espina,log_brazos);
                v_dinosaurio.push_back(dino);
                
                for(int i=0;i<v_cuidadores.size();i++){
                    if(v_cuidadores[i]==c){
                        c->setdinosaurio(dino);
                    }
                }
                
            break;
        default:
            cout<<"opcion incorrecta"<<endl;
    }

}

