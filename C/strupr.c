#include <stdio.h>
#include <string.h>

/* strupr(Cadena) = upr = UPPER
Contrario a strlwr, esta función convierte a mayúsculas las letras de una cadena.*/

int main(int argc, char const *argv[])
{
	char texto[100];
	puts("Escribe un texto con mayusculas y minusculas\n");
	gets(texto); 
	//Cuando estamos trabajando con strings lo mejor es trabajar con gets para que guarde también los espacios.

	puts("El nuevo texto es el siguiente:\n");
	printf("%s\n",strupr(texto));

	return 0;
	return 0;
}