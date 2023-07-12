#include <stdio.h>
#include <string.h>

/* strlen(Cadena) = len = LONGITUD
Devuelve un entero que representa la longitud de una cadena de texto 
(incluyendo espacios en blanco, pero excluyendo el caracter nulo).*/

int main(int argc, char const *argv[])
{
	char a[200];
	printf("Escribe cualquier cosa\n");
	gets(a);
	printf("\nLa longitud de la cadena digitada es: %i",strlen(a));
	return 0;
}