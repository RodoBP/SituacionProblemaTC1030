/* Silvana Dorita Ruiz Olivarría A01252346
Luis Rodolfo Bojórquez Pineda A01250513
TC1030
Programación Orientada a Objetos
Grupo 700
29 de mayo de 2021*/
#ifndef Cuartos_h
#define Cuartos_h
class Cuarto{
    protected:
        string descripCuarto;
        bool status; // Este indica si el cuarto está cerrado o no
        string acertijo;
        int respCorrecta;

    public:
        Cuarto();
        Cuarto(string,int);
        string getDescripCuarto();
        int getStatus();
        string getAcertijo();
        void setAcertijo(string);
        int getRespCorrecta();
        void entrar();
        void salir();
};

Cuarto::Cuarto(){
    descripCuarto = "";
    status = true; // singnifica que el cuarto esta abierto
}
Cuarto::Cuarto(string d, int s){
    descripCuarto = d;
    status = s; 
}
string Cuarto::getDescripCuarto(){
    return descripCuarto;
}
int Cuarto::getStatus(){
    return status;
}
string Cuarto::getAcertijo(){
    return acertijo;
}

int Cuarto::getRespCorrecta(){
    return respCorrecta;
}


void Cuarto::entrar(){
    cout << "Has ingresado a la habitacion."<< endl;
}
void Cuarto::salir(){
    cout << "Has salido de la habitacion."<< endl;
}
#endif