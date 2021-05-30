/* Silvana Dorita Ruiz Olivarría A01252346
Luis Rodolfo Bojórquez Pineda A01250513
TC1030
Programación Orientada a Objetos
Grupo 700
29 de mayo de 2021*/
#include <iostream>
#include <vector>
using namespace std;


#include "Jugador.h"
#include "Troll.h"
#include "Items.h"

int main(){
    string n;
    cout<<"Cual es tu nombre?"<<endl;
    cin >> n;
 

    vector<Personaje*> vecPersonaje;
    Personaje *objPersonaje;

    objPersonaje = new Jugador(n);
    vecPersonaje.push_back(objPersonaje);

    objPersonaje = new Troll();
    vecPersonaje.push_back(objPersonaje);

    for (int i = 0; i<vecPersonaje.size(); i++){
        cout<<vecPersonaje[i]->getName()<<endl;
        cout<<vecPersonaje[i]->getMonedas()<<endl;
        cout<<vecPersonaje[i]->getVida()<<endl;
    }

    vecPersonaje[0]->addItemMoneda();
    vecPersonaje[0]->addItemMedallon();
    vecPersonaje[0]->showInventory();
    return 0;
}