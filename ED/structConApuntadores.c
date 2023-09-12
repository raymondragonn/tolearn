#include <stdio.h>
#include <string.h>

typedef struct Persona 
{
    char nombre[25];
    int edad;
}Persona;

int main(int argc, char const *argv[])
{
    Persona p1;
    strcpy(p1.nombre,"Raymundo");
    p1.edad=20;

    Persona *ptr;
    ptr = &p1;
    
    printf("Nombre: %s\n",ptr->nombre);
    printf("Edad: %d\n",ptr->edad);

    char *ptrname;
    ptrname = p1.nombre;
    
    return 0;
}
