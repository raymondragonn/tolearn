#include <stdio.h>

int funcion(long long num);

int main(int argc, char const *argv[])
{
	long long num=0;
	puts("\t\nPROGRAMA PARA IDENTIFICAR SI EL NUMERO ES MAYOR, IGUAL O MENOR A 200\n");
	puts("Bienvenido!\nIntroduce el numero a evaluar:\n");
	scanf(" %i",&num);
	funcion(num);
	return 0;
}

int funcion(long long num)
{
	puts("Analizando...\n");
	if(num>200)
		puts("El numero dado es MAYOR a 200");
	else
		if(num<200)
			puts("El numero dado es MENOR a 200");
		else
			puts("El numero dado es 200");
}