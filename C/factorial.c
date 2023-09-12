#include <stdio.h>

int main(int argc, char const *argv[])
{
    int resultado=1, num;
    puts("Introduce el numero a calcular el factorial\n");
    scanf("%i",&num);
    for(int i=num; i >= 1; i--)
    {
        resultado*=i;
    }
    printf("El resultado es: %d\n",resultado);
    return 0;
}

//* x *= y es exactamente lo mismo que poner x = x*y
//* suponiendo que x = 2 y = 3, entonces x*=y 
//* por lo tanto 6 sería el nuevo valor de x
//* si seguimos repitiendo el proceso el nuevo valor
//* de x será 18, 54, 162, etc.