#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    puts("-------------- MULTIPLOS DE CINCO --------------");
    puts("Introduce el numero hasta donde quieres calcular\n");
    scanf("%i",&num);
    for(int i=0; i <= num; i++)
    {
        if(i % 5 == 0)
        {
            printf("%i ",i);
        }
    }
    return 0;
}
