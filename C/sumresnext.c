#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num=0,sumpar=1,sumimpar=-1,cont=1;
	puts("\tPROGRAMA QUE SUMA UN NUMERO Y RESTA EL SIGUIENTE\n");
	puts("Introduce hasta que numero quieres aplicar la sucesion (suma/resta):\n");
	scanf(" %i",&num);
	while(cont<=num)
	{
		if(cont%2==0)
		{
			sumpar+=cont;
		}
		else
		{
			sumimpar+=cont;
		}
	cont++;
	}
	printf("\nEl resultado de las sumas y restas hasta %i es: %i\n",num,sumpar-sumimpar);
	return 0;
}