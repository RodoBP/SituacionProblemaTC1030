/* Silvana Dorita Ruiz Olivarría A01252346
Luis Rodolfo Bojórquez Pineda A01250513
TC1030
Programación Orientada a Objetos
Grupo 700
29 de mayo de 2021*/

#include "Cuartos.h"

class CuartoArte: public Cuarto{
    public:
        CuartoArte();
};

CuartoArte::CuartoArte(){
    descripCuarto = "This rooms looks like an art gallery. It is full of paintings of fairy-tale scenes.";
    status = false; // singnifica que el cuarto no esta completado
    acertijo  = "Aquí va el acertijo";
    respCorrecta  = 1; //La respuesta 1 es blablabla
}
