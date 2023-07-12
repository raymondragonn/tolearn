//* atoi() CONVIERTE UN STRING A ENTERO.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char *cadena = "123.43"; //! Puedo igualar un puntero tipo char a una cadena
    int num;
    num = atoi(cadena);
    printf("%i\n", num);

    //? Lo mismo que arriba pero sin igualar el puntero directamente
    char cad[] = "9204.34", *pcad = cad;
    int num2;
    printf("%s", cad);
    num2 = atof(pcad);
    printf("\n%i", num2);
    return 0;
    return 0;
}
