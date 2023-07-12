#include <stdio.h>

int main(int argc, char const *argv[])
{
    char caracter = 'H';
    printf("\n%c\n",caracter);
    caracter = getchar();
    printf("\n%c\n",caracter);
    putchar(caracter); //! ALTERNATIVA A printf()

    char cadena[30] = "Hola";
    printf("\n\n\n%s\n",cadena);
    getchar(); //? LIMPIAR EL BUFFER
    gets(cadena);
    printf("%s\n",cadena);
    fgets(cadena,30,stdin); //! ALTENATIVA A gets()
    printf("%s\n",cadena);
    return 0;
}
