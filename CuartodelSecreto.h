/* Silvana Dorita Ruiz Olivarría A01252346
Luis Rodolfo Bojórquez Pineda A01250513
TC1030
Programación Orientada a Objetos
Grupo 700
29 de mayo de 2021*/

#include "Cuartos.h"

class CuartoSecreto: public Cuarto{
    public:
        CuartoSecreto();
};

CuartoSecreto::CuartoSecreto(){
    descripCuarto = "This room is filled with amazing treasures, from gems, coins, to even gold.";
    status = false; // singnifica que el cuarto no esta completado
    acertijo  = "Aquí va el acertijo";
    respCorrecta  = 1; //La respuesta 1 es blablabla
}
