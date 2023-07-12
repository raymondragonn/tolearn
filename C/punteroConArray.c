#include <stdio.h>

int main()
{
    char cadena[] = "Hola";
    char *ptr = cadena; // Inicialización del puntero con la dirección de inicio de la cadena

    while (*ptr != '\0')
    {
        printf("%c ", *ptr); // Acceso al contenido del puntero (carácter actual)
        ptr++;               // Avance al siguiente carácter en la cadena
    }

    return 0;
}