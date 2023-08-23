//* typedef tipo_existente nuevo_nombre;
//! CREADO DE "ALIAS"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Datos
{
    char nombre[25];
}persona;

struct carro
{
    char placa[8];
};

typedef struct libreria
{
    char libro[25];
}libreria;

int main(int argc, char const *argv[])
{
    typedef int entero;
    entero num = 43; //? Ocupamos el nuevo nombre del tipo de dato.
    printf("%i\n",num);
    puts("Introduce el nombre: ");
    fgets(persona.nombre,25,stdin);
    printf("%s",persona.nombre);
    puts("\nIntroduce la placa: ");
    struct carro carro1;
    strcpy(carro1.placa,"310 YTK");
    printf("%s",carro1.placa);
    puts("\n\nIntroduce el libro: ");
    libreria libro1;
    strcpy(libro1.libro,"El Senor De Los Anillos");
    printf("%s",libro1.libro);
    return 0;
    
}

