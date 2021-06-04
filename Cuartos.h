/* Silvana Dorita Ruiz Olivarría A01252346
Luis Rodolfo Bojórquez Pineda A01250513
TC1030
Programación Orientada a Objetos
Grupo 700
29 de mayo de 2021*/
#ifndef Cuartos_h
#define Cuartos_h
class Cuarto{
    private:
        string descripCuarto;
        int status; // Este indica si el cuarto está cerrado o no
        string acertijo;

    public:
        Cuarto();
        Cuarto(string,int);
        string getDescripCuarto();
        int getStatus();
        string getAcertijo();
        void setAcertijo(string);
        void entrar();
        void salir();
};

Cuarto::Cuarto(){
    descripCuarto = "";
    status = 1; // singnifica que el cuarto esta cerrado
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
string Cuarto::setAcertijo(string a){
    acertijo = a;
}
void Cuarto::entrar(){
    cout << "Has ingresado a la habitacion."<< endl;
}
void Cuarto::salir(){
    cout << "Has salido de la habitacion."<< endl;
}