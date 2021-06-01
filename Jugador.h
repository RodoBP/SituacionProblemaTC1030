/* Silvana Dorita Ruiz Olivarría A01252346
Luis Rodolfo Bojórquez Pineda A01250513
TC1030
Programación Orientada a Objetos
Grupo 700
29 de mayo de 2021*/
#include "Personajes.h"

class Jugador : public Personaje {
    public:
        Jugador();
        Jugador(string);
        int getMonedas();
        int getVida();
        
};

Jugador::Jugador(){
    nombre = "nadie";
    monedas = 0;
    HP = 50;
}

Jugador::Jugador(string nom): Personaje(nom) {
    nombre = nom;
    monedas = 0;
    HP = 50;
}

int Jugador::getMonedas(){
    return monedas;
}
int Jugador::getVida(){
    return HP;
}