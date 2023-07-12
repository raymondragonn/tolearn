#include <stdio.h>
#include <string.h>

/*
strcmp(Cadena1,Cadena2) = cmp = COMPERARISON
Compara 2 cadenas de texto caracter a caracter, es case-sensitive.
Cuando se encuentra la diferencia, esta función devuelve un valor entero
correspondiente a la diferencia de valor decimal según el código ASCII.

	Si Cadena1 es 			Entonces devuelve

	Igual que Cadena2			0
	Mayor que Cadena2			n > 0
	Menor que Cadena2			n < 0
*/



int main(int argc, char const *argv[])
{
	char contrasena[] = "Rayi2002";
	char userprueba[32];
	int i=2;

	puts("\t\nPROGRAMA QUE COMPRUEBA QUE TU CONTRASENA SEA CORRECTA (3 INTENTOS)");
	while(i>=0)
	{
		puts("\nIngresa la contrasena: \n");
		scanf("%s",userprueba);
		if(strcmp(userprueba,contrasena)==0)
		{
			puts("Contrasena correcta! Bienvenido.\n");
			i=0;
		}
		else
		{
			puts("Contrasena incorrecta. Intenta de nuevo!\n");
			printf("Te quedan #%d intentos",i);
			i--;
		}
	}
	return 0;
}