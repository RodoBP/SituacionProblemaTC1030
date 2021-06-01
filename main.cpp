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

void fight(vector<Personaje*> vecPersonaje){
    const int attack = 10;
    rand() % attack) + 1
    while(vecPersonaje[0]->getVida()>0 ||vecPersonaje[1]->getVida()>0){

    }
}

int main(){
    string n = "";
    string resp = "";


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


    // Cuartos
    vector<Cuarto*> vecCuarto;
    Cuarto *objCuarto;
    objCuarto = new Cuarto("Sala",0);
    vecCuarto.push_back(objCuarto);

    objCuarto = new Cuarto("Cocina",0);
    vecCuarto.push_back(objCuarto);

    objCuarto = new Cuarto("Cuarto del Arte",0);
    vecCuarto.push_back(objCuarto);

    objCuarto = new Cuarto("Habitacion",0);
    vecCuarto.push_back(objCuarto);

    objCuarto = new Cuarto("Cuarto Final Secreto",1);
    vecCuarto.push_back(objCuarto);

    


    cout << "En una tierra muy muy lejana existe una extraordinaria riqueza. Todo el que se ha atrevido a buscarla,"
    " ha perdido la vida. Aquellos con corazones deseosos se exponen al riesgo y deciden emprender la misión con el" 
    " objetivo de volverse victoriosos y por fin, resolver el misterio sobre las desapariciones de los antiguos aventureros. "
    " El monto está situado dentro de una enorme mansión con aura excéntrica, donde hay cuatro cuartos que deben"
    " ser vistos de arriba a abajo y una habitación final cerrada. En estos se encuentran los acertijos que deben"
    " ser respondidos para así obtener las monedas de poco en poco. Esta misión no es para los impacientes. Sin" 
    " embargo, como en la vida, siempre hay un camino fácil. Cuenta la leyenda que existe un medallón de oro, el"
    " cual es muy útil pero se desconoce su función, solo aquellos que lo han usado saben de sus maravillas. Se"
    " rumora que el no ser lo suficientemente codiciosos llevó a los anteriores osados a perderlo todo. ¿Deseas"
    " arriesgarte y participar en esta búsqueda? ¿Quién estará detrás de las desapariciones?" << endl;

    cout <<"Ah! con que eres tu el aventurero que desea adentrarse en este misterio. He escuchado terribles historias"
    " relacionadas con esta misión. Cuenta la leyenda que, solo los temerarios saldran con vida. Descuida, yo te guiare"
    " durante todo este recorrido y aseguraremos que obtengas todas las riquezas que hay dentro de esa casa. Me repites"
    " tu nombre por favor?" << endl;

    cin >> n;

    cout << "Ah " << n << ", claro! He escuchado mucho sobre ti. Bueno, mucho gusto."
    //////




    cout << vecPersonaje[0]->getName() << " recolectaste " << vecPersonaje)[0]->getMonedas<< " monedas." << endl; 
    cout << "El troll tiene " << vecPersonaje[1] ->getMonedas() << " monedas." <<endl;
    // Combate
    if (vecPersonaje)[1]->randomMonedas() > vecPersonaje)[0]->getMonedas()){
        cout << "Has fallado en recolectar la mayor cantidad de monedas posibles, por lo que, no podrás"
        "llevarte el tesoro y estás destinado a terminar como todos lo anteriores aventureros. Pero, hay"
        " una última opción, si logras derrotar al troll en un combate, podrás llevarte tu botín y ser el héroe."
        "Te atreves a aceptar el reto? s/n"
        cin << resp;
        if (reps != "n"){
            fight(vecPersonaje);
        }
        else{
            //mandarlos al menú
        }
        
    }
    return 0;
}
