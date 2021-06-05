/* Silvana Dorita Ruiz Olivarría A01252346
Luis Rodolfo Bojórquez Pineda A01250513
TC1030
Programación Orientada a Objetos
Grupo 700
29 de mayo de 2021*/

#include "Cuartos.h"

class Habitacion: public Cuarto{
    public:
        Habitacion();
};

Habitacion::Habitacion(){
    descripCuarto = "This room has a really big bed, next to it it there is are big-brown shoes. The floor is covered with a purple carpet and the ceiling is painted green.";
    status = false; // singnifica que el cuarto no esta completado
    acertijo  = "Aquí va el acertijo";
    respCorrecta  = 1; //La respuesta 1 es blablabla
}
