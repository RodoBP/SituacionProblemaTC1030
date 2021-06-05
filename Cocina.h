/* Silvana Dorita Ruiz Olivarría A01252346
Luis Rodolfo Bojórquez Pineda A01250513
TC1030
Programación Orientada a Objetos
Grupo 700
29 de mayo de 2021*/

#include "Cuartos.h"

class Cocina: public Cuarto{
    public:
        Cocina();
};

Cocina::Cocina(){
    descripCuarto = "The kitchen is jond of messy, there are cooking books everywhere, these in particular included dishes fot fairies, dragons, dwarfs, trolls, and unicorns.";
    status = false; // singnifica que el cuarto no esta completado
    acertijo  = "Aquí va el acertijo";
    respCorrecta  = 1; //La respuesta 1 es blablabla
}
