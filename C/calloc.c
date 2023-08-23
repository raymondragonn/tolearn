//* calloc(no. elementos,tam cada elemento) 

//! CALLOC INICIA TODOS SUS BYTES EN 0.
//! MALLOC INICIA TODOS SYS BYTES CON UN NO. ALEATORIO


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *p1;
    p1 = calloc(5,sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        printf("Escribe un numero: ");
        scanf("%i",&p1[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%i ",p1[i]);
    }
    free(p1);
    return 0;
}
