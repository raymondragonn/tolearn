#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    #define SIZE 1000000000

    int* array = (int*)malloc(sizeof(int)*SIZE);
    if(array == NULL)
    puts("Se alcanzo el limite de memoria\n");
    free(array);
    return 0;
}
