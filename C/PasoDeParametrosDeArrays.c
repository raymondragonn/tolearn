#include <stdio.h>

//* Esta Funcion Recibe un Array y lo llena
//! Nota que no se indica el numero de indices que recibira, se hace con otra variable

void llenarArray(int Array[],int dimension){
    for(int i = 0; i<dimension;i++){
        printf("\nDame el valor [%d] del array: ",i);
        scanf("%d",&Array[i]);
    }
}


int main() {

    int miVector[5];
    //* Solo pasamos el nombre del array y su dimension
    llenarArray(miVector,5);
    //! Imprimimos sus valores 

    //? Recuerda que por defecto el array se hace con paso de parametros por referencia 
    //? Esto nos permite editarlo desde otra funcion

    for (int x = 0; x < 5; x++){
        printf("%d",miVector[x]);
    }

    return 0;
}