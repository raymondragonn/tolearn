#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num = 3, *ptr;
    ptr = &num;
    printf("\n%d",num); //! Variable num
    printf("\n%p",&num); //! Dirección num

    printf("\n%d",*ptr); //! Puntero a Variable num
    printf("\n%p",ptr); //! Dirección a la que se apunta

    return 0;
}
