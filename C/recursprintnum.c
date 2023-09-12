//* Consideremos una función que recibe un número
//* "n" e imprime los numeros de "n" al 1. Con recursividad.

#include <stdio.h>

int recursividad(int n);

int main(int argc, char const *argv[])
{
    int num;
    puts("Introduce un numero e imprimire los numeros descendientes hasta 1");
    scanf(" %i",&num);
    for (int i = num; i > 0; i--)
    {
       printf("%i\n",recursividad(i));
    }
    return 0;
}

int recursividad(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return recursividad(n-1);
    }
    
}