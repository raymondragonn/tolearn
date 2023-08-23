#include <stdio.h>
#include <string.h>

typedef struct
{
    char nombre[25];
    int edad;
}Persona;

int main(int argc, char const *argv[])
{
    int num;
    puts("Introduce la cantidad de personas a ingresar: ");
    scanf(" %i",&num);
    Persona persona[num];
    for (int i = 0; i < num; i++)
    {
        fflush(stdin);
        printf("\n---PERSONA #%i---", i + 1);
        puts("\nNOMBRE: ");
        fgets(persona[i].nombre,25,stdin);
        persona[i].nombre[strcspn(persona[i].nombre, "\n")] = '\0';
        puts("\nEDAD: ");
        scanf(" %i",&persona[i].edad);
    }
    puts("\n");
    for (int i = 0; i < num; i++)
    {
        printf("\n---PERSONA #%i---",i+1);
        printf("\nNOMBRE: %s",persona[i].nombre);
        printf("\nEDAD: %i\n",persona[i].edad);
    }
    return 0;
}
