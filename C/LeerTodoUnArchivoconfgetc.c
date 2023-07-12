//* LEER TODO DE UN ARCHIVO CON LA FUNCION fgetc().

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    FILE *archivo;
    archivo = fopen("Prueba.txt","rt"); //! rt = read text
    if(archivo == NULL)
    {
        puts("Error al tratar de leer el archivo\n");
        return 1;
    }
    int c;
    while((c=fgetc(archivo))!=EOF)
        if(c == '\n')
        {
            puts("\n");
        }
        else
        {
            putchar(c);
        }
    return 0;
}
