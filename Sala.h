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
    descripCuarto = "Aquí va la descipción del cuarto";
    status = true; // singnifica que el cuarto esta cerrado
    acertijo  = "Aquí va el acertijo";
    respCorrecta  = 1;
}
