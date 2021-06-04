/* Silvana Dorita Ruiz Olivarría A01252346
Luis Rodolfo Bojórquez Pineda A01250513
TC1030
Programación Orientada a Objetos
Grupo 700
29 de mayo de 2021*/
#include "Personajes.h"
#include <stdlib.h>
#include <stdio.h> 
#include <time.h> 
#include <Windows.h>

class Troll : public Personaje {
    public:
        Troll();
        int randomMonedas();
};

Troll::Troll(){
    nombre = "TrollMalo";
    monedas = 0;
    HP = 100;
}


int Troll::randomMonedas(){
    srand(time(0));


    Sleep(500);
    srand (time(NULL));
    int min = 80;
    int max = 120;
    int range = max - min + 1;
    int monedas = rand() % range + min;
    
    return monedas;
}