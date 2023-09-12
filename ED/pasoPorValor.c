#include <stdio.h>

int suma(int n1,int n2);

int main(int argc, char const *argv[])
{
    int num1,num2;
    puts("Introduce dos numeros a sumar");
    scanf("%d %d",&num1,&num2);
    printf("La suma de los dos numeros es: %d",suma(num1,num2));
    puts("\n\nOJO: El resultado si sera correcto, el inconveniente es que no modifica los valores originales, solo otorga una copia que despues sera borrada");
    return 0;
}

int suma(int n1,int n2)
{
    return n1 + n2;
}