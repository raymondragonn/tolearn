#include <stdio.h>

float funcion(float *ptr);

int main(int argc, char const *argv[])
{
    float num;
    puts("Introduce un numero y te dire si es par o impar\n");
    scanf("%f,&num");
    funcion(&num);
    printf("El valor es %.2f",num);
    return 0;
}

float funcion(float *ptr)
{
    if(*ptr/2 == 0)
    {
        return *ptr;
    }
    else
    {
        return *ptr;
    }
}