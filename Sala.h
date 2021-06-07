/* Silvana Dorita Ruiz Olivarría A01252346
Luis Rodolfo Bojórquez Pineda A01250513
TC1030
Programación Orientada a Objetos
Grupo 700
29 de mayo de 2021*/

#include "Cuartos.h"

class Sala: public Cuarto{
    public:
        Sala();
};

Sala::Sala(){
    descripCuarto = "This room has a huge sofa and Tv. The Tv is turned on and tuned in a cooking channel for mythical cratures. Everything looks pretty neat.";
    status = false; // singnifica que el cuarto no esta completado
    acertijo  = "Acertijo";
    respCorrecta  = 1; //La respuesta es 1
}
