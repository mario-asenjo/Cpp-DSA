#include <bits/stdc++.h>
using namespace std;

struct Rectangulo{
    int largo;
    int ancho;
};

int main(){
    //Instancia en el stack de una estructura.
    struct Rectangulo r2 = {12, 15};
    cout<<"Longitud de r2: "<<r2.largo<<endl<<"Ancho de r2: "<<r2.ancho<<endl;

    //Instancia en el heap de la esctructura,
    //pero teniendo un puntero en el stack que apunte fuera del frame del programa.
    struct Rectangulo *r1 = (struct Rectangulo*)malloc(sizeof(struct Rectangulo));
    
    //Para acceder y modificar valores tenemos que usar la semántica de punteros.
    //'->' en vez de '.' como operador de acceso a miembros.
    r1->largo = 20;
    r1->ancho = 20;
    cout<<"Longitud de r1: "<<r1->largo<<endl<<"Ancho de r1: "<<r1->ancho<<endl;
    
    return 0;
}