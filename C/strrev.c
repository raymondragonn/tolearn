#include <stdio.h>
#include <string.h>

/* strrev(Cadena) = rev = REVERSE
Invierte la cadena dada */

int main(int argc, char const *argv[])
{
	char cadena[200];
	puts("\nIngresa un texto y lo revertire:");
	gets(cadena);
	printf("%s\n",strrev(cadena));
	return 0;
}