//* realloc() NOS PERMITE AMPLIAR EL ARREGLO EN BYTES QUE ANTES HABÍAMOS DECLARADO CON malloc()

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *ptr,*ptr2;
    ptr = malloc(3*sizeof(int));
    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;

    for (int i = 0; i < 3; i++)
    {
        printf("%i ",ptr[i]);
    }
    puts("\n");
    //! REALLOC()
    ptr2 = realloc(ptr,5*sizeof(int));
    //? Agregamos los demas valores
    ptr[3] = 4;
    ptr[4] = 5;

    for (int i = 0; i < 5; i++)
    {
        printf("%i ", ptr[i]);
    }

    return 0;
}
