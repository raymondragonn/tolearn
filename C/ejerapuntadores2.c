#include <stdio.h>

int main(int argc, char const *argv[])
{
    int entero = 10, *pentero;
    float flotante = 10.5, *pflotante;
    char caracter = 'a', *pcaracter;

    pentero = &entero;
    pflotante = &flotante;
    pcaracter = &caracter;

    printf("Entero: %d\n",entero);
    printf("Apuntador: %d\n", *pentero);
    printf("Apuntador Entero: %p\n", pentero);
    printf("Direccion de memora de entero: %p\n", &entero);

    printf("\nFlotante: %f\n",flotante);
    printf("Apuntador: %f\n",*pflotante);
    printf("Apuntador Flotante: %p\n",pflotante);
    printf("Direccion de memora de flotante: %p\n", &flotante);

    printf("\nCaracter: %c\n", caracter);
    printf("Apuntador: %c\n", *pcaracter);
    printf("Apuntador Caracter: %p\n", pcaracter);
    printf("Direccion de memora de caracter: %p\n", &caracter);

    return 0;
}
