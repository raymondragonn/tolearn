#include <stdio.h>
#include <string.h>

/* strlwr(Cadena) = lwr = LOWER
Convierte a minúsculas todas las letras de una cadena de texto.*/

int main(int argc, char const *argv[])
{
	char texto[100];
	puts("Escribe un texto con mayusculas y minusculas\n");
	gets(texto); 
	//Cuando estamos trabajando con strings lo mejor es trabajar con gets para que guarde también los espacios.

	puts("El nuevo texto es el siguiente:\n");
	printf("%s\n",strlwr(texto));

	return 0;
}