#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char nombre[20], *ptrnombre;
    int longitud;
    
    strcpy(nombre,"Raymundo");  //! Raymundo\0
    //* PODRIAMOS EVITARNOS ESTE strcpy() PIDIENDO AL USUARIO EL NOMBRE
    longitud = strlen(nombre);
    ptrnombre = malloc((longitud+1)*sizeof(char)); //! +1 por \0
    strcpy(ptrnombre,nombre);
    printf("Nombre: %s",ptrnombre);
    free(ptrnombre);
    return 0;
}
