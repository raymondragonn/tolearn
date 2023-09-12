#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1,num2,facto1=1,facto2=1,result;
    puts("Introduce los numeros a calcular su factorial y hacer la suma de cada resultado");
    scanf("%i %i",&num1,&num2);
    puts("\nCalculando...");
    for(int i=1; i <= num1; i++)
    {
        facto1 *= i;
    }
    for (int i = 1; i <= num2; i++)
    {
        facto2 *= i;
    }
    result = facto1 + facto2;
    printf("El resultado es: %i",result);
    return 0;
}
