#include <stdio.h>

void funcionParOImpar(int *pnum);

int main(int argc, char const *argv[])
{
    int num;
    puts("Introduce el numero: ");
    scanf(" %i",&num);
    funcionParOImpar(&num);
    return 0;
}

void funcionParOImpar(int *pnum)
{
    if(*pnum % 2 == 0)
        puts("El numero es par!");
    else
        puts("El numero es impar!");
}