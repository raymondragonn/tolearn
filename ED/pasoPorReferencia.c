#include <stdio.h>

int suma(int *anum1,int *anum2);

int main(int argc, char const *argv[])
{
    int num1,num2;
    puts("Ingresa dos numero a sumar");
    scanf("%d %d",&num1,&num2);
    printf("\nLa suma de los dos numeros es: %d",suma(&num1,&num2));
    printf("\nLos valores son: num1:%d num2:%d",num1,num2);
    return 0;
}

int suma(int *anum1, int *anum2)
{
    return *anum1 + *anum2;
}