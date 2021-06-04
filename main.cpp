/* Silvana Dorita Ruiz Olivarría A01252346
Luis Rodolfo Bojórquez Pineda A01250513
TC1030
Programación Orientada a Objetos
Grupo 700
29 de mayo de 2021*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;


#include "Jugador.h"
#include "Troll.h"
#include "Sala.h"

void fight(vector<Personaje*> vecPersonaje){
    const int attack = 10;
    //rand() % attack) + 1;
    while(vecPersonaje[0]->getVida()>0 || vecPersonaje[1]->getVida()>0){
        cout <<"entre al while"<<endl;
    }
}

int main(){
    Moneda i1;
    Sala s1;

    string n = "";
    string resp = "";
    int cuarto = 0;
    int nvalor = 0;
    int nvalor1 = 0;
    int oldvalor = 0;

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




        cout << "En una tierra muy muy lejana existe una extraordinaria riqueza. Todo el que se ha atrevido a buscarla," << endl
    << " ha perdido la vida. Aquellos con corazones deseosos se exponen al riesgo y deciden emprender la misión con el" << endl
    <<" objetivo de volverse victoriosos y por fin, resolver el misterio sobre las desapariciones de los antiguos aventureros. "<< endl
    <<" El monto está situado dentro de una enorme mansión con aura excéntrica, donde hay cuatro cuartos que deben"<< endl
    <<" ser vistos de arriba a abajo y una habitación final cerrada. En estos se encuentran los acertijos que deben"<< endl
    <<" ser respondidos para así obtener las monedas de poco en poco. Esta misión no es para los impacientes. Sin" << endl
    <<" embargo, como en la vida, siempre hay un camino fácil. Cuenta la leyenda que existe un medallón de oro, el" << endl
    <<" cual es muy útil pero se desconoce su función, solo aquellos que lo han usado saben de sus maravillas. Se"<< endl
    <<" rumora que el no ser lo suficientemente codiciosos llevó a los anteriores osados a perderlo todo. ¿Deseas"<< endl
    <<" arriesgarte y participar en esta búsqueda? ¿Quién estará detrás de las desapariciones?" << endl;

    cout <<"Ah! con que eres tu el aventurero que desea adentrarse en este misterio. He escuchado terribles historias"<<endl
    <<" relacionadas con esta misión. Cuenta la leyenda que, solo los temerarios saldran con vida. Descuida, yo te guiare"<<endl
    <<" durante todo este recorrido y aseguraremos que obtengas todas las riquezas que hay dentro de esa casa. Me repites"<<endl
    <<" tu nombre por favor?" << endl;

    cin >> n;

    cout << "Ah " << n << ", claro! He escuchado mucho sobre ti. Bueno, mucho gusto."<<endl;
    //////

    vector<Personaje*> vecPersonaje;
    Personaje *objPersonaje;

    objPersonaje = new Jugador(n);
    vecPersonaje.push_back(objPersonaje);

    objPersonaje = new Troll();
    vecPersonaje.push_back(objPersonaje);

    nvalor1 = static_cast<Troll *>(vecPersonaje[1])->randomMonedas();
    vecPersonaje[1]->setMonedas(nvalor1);



    for (int i = 0; i<vecPersonaje.size(); i++){
        cout<<vecPersonaje[i]->getName()<<endl;
        cout<<vecPersonaje[i]->getMonedas()<<endl;
        cout<<vecPersonaje[i]->getVida()<<endl;
    }


    cout<<"Intro de la casa"<<endl;

    while(cuarto > 4 || cuarto < 1){  
        cout<<"Presentacion de cuartos"<<endl;
        cin>>cuarto;

        if(cuarto == 1){
            if(s1.getStatus() == false){

                s1.entrar();
                cout<<s1.getStatus()<<endl;
                cout<<s1.getDescripCuarto()<<endl;

                int resp;
                cout << s1.getAcertijo() << endl;
                cin >> resp; //respuesta de opción múltiple al acertijo
                if(s1.getRespCorrecta() != resp){
                    cout << "Respuesta incorrecta. No lograste responder este acertijo." << endl;
                    }
                else{
                    cout << "Usted es excepcional, tiene habilidades de detective! Ha conseguido recolectar monedas."<<endl;
                    if(vecPersonaje[0]->getMonedas() == 0){
                        vecPersonaje[0]->addItemMoneda();
                        i1.use();
                        nvalor = i1.getValor();
                        vecPersonaje[0]->setMonedas(nvalor);

                        cout<<vecPersonaje[0]->getMonedas()<<endl;
                    }
                    else{
                        i1.use();
                        nvalor = i1.getValor();
                        oldvalor = vecPersonaje[0]->getMonedas();
                        nvalor = oldvalor + nvalor;
                        vecPersonaje[0]->setMonedas(nvalor);
                        cout<<vecPersonaje[0]->getMonedas()<<endl;
                    }
                    s1.setStatus(true);
                } 
                cuarto = 0;
                s1.salir();
            }
            else{
                cout<<"Ya resolviste este cuarto."<<endl;
                cuarto = 0;
            }
        }
        else if(cuarto == 2){

        }
        else if(cuarto == 3){

        }
        else if(cuarto == 4){

        }
    }
    /*cout << vecPersonaje[0]->getName() << " recolectaste " << vecPersonaje)[0]->getMonedas<< " monedas." << endl; 
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
        
    }*/
    return 0;
}
