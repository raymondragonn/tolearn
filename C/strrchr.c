#include <stdio.h>
#include <string.h>

/* strrchr(Cadena,Caracter)
Regresa el restante de la cadena a partir de la primera aparición del carácter indicado.*/

int main(int argc, char const *argv[])
{
	char abecedario[] = "abcdefghijkmnopqrstuvwxys";
	char corte;

	puts("\nLa letra donde se cortara el abecedario sera:");
	scanf(" %c",&corte);
	printf("\n%s",strrchr(abecedario,corte));
	return 0;
}