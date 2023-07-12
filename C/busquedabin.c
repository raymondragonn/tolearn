
#include <stdio.h>

//Busqueda Binaria SOLO APLICABLE A LISTAS ORDENADAS (Podemos ordenar por el método Bubble sort)

int main() 
{

    int a[10] = {1,3,5,7,9,2,4,6,8,10};
    int inf,sup,mitad,dato;
    char band = 'F';

    puts("Introduce el numero a buscar");
    scanf("%i",&dato);

    inf = 0;
    sup = 10;

    while (inf <= sup)
    {
        mitad = (inf+sup)/2;

        if (a[mitad] == dato)
        {
            band = 'V';
            break;
        }
        if (a[mitad] > dato)
        {
            sup = mitad;
            mitad = (inf+sup)/2;
        }
        if (a[mitad] < dato)
        {
            inf = mitad;
            mitad = (inf+sup)/2;
        }
    }

    if (band == 'F')
    {
        printf("El numero no existe\n");
    }
    else if (band == 'V')
    {
        printf("El numero existe en la posicion %i",mitad);
    }
    return 0;
}