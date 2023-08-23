#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float *ptr;
    int num;
    puts("Bienvenido!");
    puts("\nIntroduce la cantidad de numeros flotantes: ");
    scanf(" %i",&num);
    ptr = calloc(num,sizeof(float));
    puts("\nIngresa el valor de cada uno de los numeros flotantes: ");
    for(int i = 0; i < num; i++)
    {
       printf("No.%i: ",i+1);
       scanf(" %f",&ptr[i]); 
    }
    puts("\nImprimiendo valores dados...");
    for (int j = 0; j < num; j++)
    {
        printf("No.%i: %.2f\n",j+1,ptr[j]);
    }
    free(ptr);
    return 0;
}
