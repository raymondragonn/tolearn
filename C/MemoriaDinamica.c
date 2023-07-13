#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    #define SIZE 100000000

    int *array = malloc(sizeof(int)*SIZE);
    if(array == NULL)
    puts("Se alcanzo el limite de memoria\n");
    free(array);
    return 0;
}
