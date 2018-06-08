#include <iostream>
#include <string>
using namespace std;

void cuidadores1();
void dinosaurios1();

int main(){
    bool seguir=true;
    char tecla;
    do{
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
    cout<<"1. Agregar cuidadores"<<endl;
    cout<<"2. Eliminar cuidadores"<<endl;
    cin>>tecla;
    switch(tecla){
        case '1'://agregar

                break;
        case '2'://eliminar
                break;
        default:
            cout<<"opcion incorrecta"<<endl;
            break;
    }
    

}

//Dinosaurios
void dinosaurios1(){
    char tecla;
    cout<<"1. Agregar dinosaurios"<<endl;
    cout<<"2. Listar dinosaurios"<<endl;
    cout<<"3. Modificar dinosaurios"<<endl;
    cout<<"4. Eliminar dinosaurios"<<endl;
    cin>>tecla;
    switch(tecla){
        case '1'://agregar

                break;
        case '2'://listar
                break;
        case '3'://modificar
                break;
        case '4'://eliminar
                break;

        default:
            cout<<"opcion incorrecta"<<endl;
            break;
    }
}
