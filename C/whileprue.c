#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num=0,cont=1,sum=0;
	puts("\t\nPROGRAMA QUE SUMA TODOS LOS NUMEROS HASTA EL NUMERO DADO\n");
	puts("Bienvenido!\n");
	puts("Introduce hasta que numero quieres realizar la suma\n");
	scanf(" %i",&num);
	while(cont<=num)
	{
		sum+=cont;
		cont++;
	}
	printf("La suma hasta el numero %i es de %i\n",num,sum);
	return 0;
}