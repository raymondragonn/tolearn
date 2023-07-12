#include <stdio.h>
#include <string.h>

/* strcpy(Destino,Fuente) = cpy = COPY*/

int main(int argc, char const *argv[])
{
	char base[]= "Raymundo"; //No colocar cantidad de caracteres en arreglo
	char copia[8]; //Necesario conocer una longitud estimada

	strcpy(copia,base);
	printf("%s",copia);

	return 0;
}