#include <stdio.h>

int* funcion(int a[], int tam);

int main(int argc, char const *argv[])
{
    int array[20] = {1,7,5,9,3};
    int tam = sizeof(array)/sizeof(int);
    int *max = funcion(array,tam);
    if(max != NULL)
    {
        printf("El valor maximo en el arreglo es: %d.\n",*max);
    }
    else
    {
        printf("El arreglo esta vacio.\n");
    }
    
    return 0;
}

int* funcion(int a[], int tam)
{
    if(tam == 0) 
        return NULL;
    int *maxPtr = &a[0]; //Consideramos el primer elemento como el valro máximo.
    for (int i = 1; i < tam; i++) //Iniciamos el ciclo for en el segundo elemento.
    {
        if(a[i] > *maxPtr)
        {
            maxPtr = &a[i];
        }
    }
    return maxPtr;
}