#include <stdio.h>

int main()
{
    FILE *archivo = fopen("datos.txt", "w+");
    if (archivo == NULL)
    {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

    // Mover la posición de lectura a partir del tercer byte del archivo
    fseek(archivo, 2, SEEK_SET);

    // Leer y mostrar el contenido desde la nueva posición
    int caracter;
    while ((caracter = fgetc(archivo)) != EOF)
    {
        printf("%c", caracter);
    }

    fclose(archivo);
    return 0;
}
