/* Silvana Dorita Ruiz Olivarría A01252346
Luis Rodolfo Bojórquez Pineda A01250513
TC1030
Programación Orientada a Objetos
Grupo 700
29 de mayo de 2021*/
#include "Items.h"

class Moneda: public Item{
    public:
        Moneda();
        void use();

};

Moneda::Moneda(){
    name = "Moneda";
    descripcion = "Has reunido riquezas!";
    valor = 0; // aquí debemos poner lo de rand
}

void Moneda::use(){

    cout<<"Este medallon hace algo pero el profe no nos ha dicho."<<endl;
}