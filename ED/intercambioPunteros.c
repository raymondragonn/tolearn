//! Crea una función que tome dos punteros como argumentos 
//! y que intercambie los valores a los que apuntan esos punteros.

#include <stdio.h>

void intercambiar(int *ptr1, int *ptr2);

int main(int argc, char const *argv[])
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    printf("Valores: x=%d, y=%d\n", num1, num2);
    intercambiar(&num1,&num2);
    printf("Intercambio: x=%d, y=%d",num1,num2);
    return 0;
}

void intercambiar(int *ptr1, int *ptr2)
{
    int aux;
    aux = *ptr2;
    *ptr2 = *ptr1;
    *ptr1 = aux;

}
