//Demostrar el uso basico de punteros

#include <stdio.h>

int main() {

    int numero = 50;
    int *pNumero;
    printf("Dato: %i",numero); //Dato
    printf("\nPosicion:  %p\n",&numero); //Posicion en memoria

    pNumero = &numero; //&numero = posicion en memoria de numero
    printf("\nValor de la variable\n");
    printf("Dato: %i\n",numero);
    printf("Dato: %i\n",*pNumero);

    printf("\n\nPosicion de memoria\n");
    printf("Posicion: %p",&numero);
    printf("\nPosicion: %p",pNumero);

    printf("\n\n%i",pNumero);
    printf("\n%p",*pNumero);

    printf("\n\n%p",numero);
    printf("\n%i",&numero);
    

    return 0;
}