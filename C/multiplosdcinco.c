#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num=0,cont=1;
	puts("\tPROGRAMA QUE CALCULA TODOS LOS MULTIPLOS DE 5 HASTA N\n");
	puts("Introduce el numero hasta donde quieres calcular\n");
	scanf(" %i",&num);
	printf("Multiplos de 5 hasta %i:\n",num);
	while(cont<=num)
	{
		if(cont%5==0)
		printf("\t%i",cont);
	cont++;
	}
	puts("\n");
	return 0;
}