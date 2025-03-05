#include <bits/stdc++.h>

int main(){
    int a[4]; //Declaramos un array
    //Inicializamos los valores.
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    a[3] = 4;

    int b[] = {1,2,3,4}; //Declaramos e inicializamos un array
    int len = sizeof(b) / sizeof(b[0]);
    for (int i=0; i<len; i++){ //Para recorrer los elementos de un array usamos bucles for con indices.
        std::cout<<"Posicion -> "<<i<<"; Valor -> "<<b[i]<<std::endl;
    }
    std::cout<<""<<std::endl; 
    for (int i=0; i<len; i++){ //Podemos acceder a los valores obteniendo la desreferencia de la posición en memoria de cada elemento del array.
        std::cout<<"Posicion -> "<<i<<"; Valor -> "<<*(b+i)<<std::endl;
    }
    std::cout<<""<<std::endl;
    for (int i : b){ //Podemos acceder con un iterador directo que obtiene el valor en cada posición del array.
        std::cout<<"Valor: "<<i<<std::endl;
    }

    std::cout<<"Introduce una longitud: ";
    std::cin>>len;
    int c[len];
    for (int i=0; i<len; i++){
        int x;
        std::cout<<"Introduce un valor para la posicion"<<i<<":";
        std::cin>>x;
        c[i]=x;
    }

    for (int i=0; i<len; i++){
        std::cout<<"Posicion -> "<<i<<"; Valor -> "<<c[i]<<std::endl;
    }

    return 0;
}