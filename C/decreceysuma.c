#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num=0,cont=1,copy=0,resta=0,sum=0;
	puts("\tPROGRAMA QUE DISMINUYE Y SUMA HASTA N\n");
	puts("Introduce hasta que numero quieres calcular:\n");
	scanf(" %i",&num);
	copy=num;
	while(cont<=num)
	{
		resta=copy-1;
		sum+=resta;
		printf("\t%i",resta);
		cont++;
		copy--;
	}
	printf("\nLa sumatoria es: %i\n",sum+num);
	return 0;
}