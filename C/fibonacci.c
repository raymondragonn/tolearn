#include <stdio.h>

int main(int argc, char const *argv[])
{
    long int alto,suma,num1=0,num2=1,num3;
    puts("Introduce el numero hasta donde deseas calcular la serie fibonacci");
    scanf("%i",&alto);
    printf("%li %li ",num1,num2);
    for(int i=1; i <= alto-2; i++)
    {
        suma = num1 + num2;
        num3 = suma;
        num1 = num2;
        num2 = num3;
        printf("%li ",suma);
    }
    return 0;
}
