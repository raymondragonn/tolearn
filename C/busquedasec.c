#include <stdio.h>

//Busqueda secuencial

int main(int argc, char const *argv[])
{
	int a[10]={2,4,6,8,0,1,3,5,7,9},i=0,dato;
	char band='F';
	puts("Introduce un numero\n");
	scanf(" %i",&dato);
	while((band=='F')&&(i<10))
	{
		if(a[i]==dato)
		{
			band='V';
		}
		i++;
	}
	if(band=='F')
	{
		puts("El numero no existe en la lista\n");

	}
	else
	{
		printf("El numero existe, en la posicion %i",i-1);
	}
	return 0;
}