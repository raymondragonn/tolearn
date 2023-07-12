#include <stdio.h>

/* 
    *fopen(nombreArchivo, modo);
*/

int main(int argc, char const *argv[])
{
    FILE *archivo = fopen("Prueba.txt","w+");
    if(archivo == NULL)
    {
        printf("Error al intentar crear/acceder al archivo!\n");
    }
    else
    {
        char texto[] = "Hola Mundo!";
        fprintf(archivo, "Texto Escrito: %s",texto);
        printf("Se ha creado/ accedido al archivo correctamente\n");
    }
    fclose(archivo);
    return 0;
}