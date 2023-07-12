//* atof() CONVIERTE UN STRING A FLOTANTE.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char *cadena = "123.45"; //! Puedo igualar un puntero tipo char a una cadena
    float num;
    num = atof(cadena);
    printf("%.2f\n",num);


    //? Lo mismo que arriba pero sin igualar el puntero directamente
    char cad[] = "9204.451", *pcad = cad; 
    float num2;
    printf("%s",cad);
    num2 = atof(pcad);
    printf("\n%.2f",num2);
    return 0;
}
