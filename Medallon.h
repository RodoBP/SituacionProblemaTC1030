/* Silvana Dorita Ruiz Olivarría A01252346
Luis Rodolfo Bojórquez Pineda A01250513
TC1030
Programación Orientada a Objetos
Grupo 700
29 de mayo de 2021*/
#include "Items.h"

class Medallon: public Item{
    public:
        Medallon();
        void use();

};

Medallon::Medallon(){
    name = "Medallon";
    descripcion = "Sientes una gran magia dentro de este medallon.";
    valor = 20;
    cout<<"Conseguiste el Medallon"<<endl;
}


void Medallon::use(){
    cout<<"Este medallon hace algo pero el profe no nos ha dicho."<<endl;
}