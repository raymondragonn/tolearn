#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct infoDireccion
{
    char direccion[30];
    char ciudad[20];
    char provincia[20];
};

struct persona
{
    char nombre[20];
    int edad;
    struct infoDireccion dirPersonas;
} personas[2];

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 2; i++)
    {
        fflush(stdin);
        printf("PERSONA #%i:\n", i + 1);
        puts("\tNOMBRE:");
        fgets(personas[i].nombre, sizeof(personas[i].nombre), stdin);
        personas[i].nombre[strcspn(personas[i].nombre, "\n")] = '\0'; // Eliminar salto de línea
        fflush(stdin);

        puts("\tEDAD:");
        scanf(" %i", &personas[i].edad);
        fflush(stdin);

        puts("\tDIRECCION:");
        fgets(personas[i].dirPersonas.direccion, sizeof(personas[i].dirPersonas.direccion), stdin);
        personas[i].dirPersonas.direccion[strcspn(personas[i].dirPersonas.direccion, "\n")] = '\0'; // Eliminar salto de línea
        fflush(stdin);

        puts("\tCIUDAD:");
        fgets(personas[i].dirPersonas.ciudad, sizeof(personas[i].dirPersonas.ciudad), stdin);
        personas[i].dirPersonas.ciudad[strcspn(personas[i].dirPersonas.ciudad, "\n")] = '\0'; // Eliminar salto de línea
        fflush(stdin);

        puts("\tPROVINCIA:");
        fgets(personas[i].dirPersonas.provincia, sizeof(personas[i].dirPersonas.provincia), stdin);
        personas[i].dirPersonas.provincia[strcspn(personas[i].dirPersonas.provincia, "\n")] = '\0'; // Eliminar salto de línea
        fflush(stdin);
        puts("\n");
    }
    puts("Guardando cambios...\n\n");
    system("cls");
    puts("DATOS INGRESADOS:\n");
    for (int j = 0; j < 2; j++)
    {
        printf("\n\nPERSONA #%i:\n", j + 1);
        printf("\tNOMBRE: %s", personas[j].nombre);
        printf("\n\tEDAD: %i", personas[j].edad);
        printf("\n\tDIRECCION: %s", personas[j].dirPersonas.direccion);
        printf("\n\tCIUDAD: %s", personas[j].dirPersonas.ciudad);
        printf("\n\tPROVINCIA: %s", personas[j].dirPersonas.provincia);
    }
    puts("\n");
    return 0;
}
