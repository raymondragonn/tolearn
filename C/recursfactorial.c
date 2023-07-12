#include <stdio.h>

//PROGRAMA QUE REGRESA EL FACTORIAL DE UN NUMERO CON RECURSIVIDAD

int factorial(int numero);

int main(int argc, char const *argv[])
{
	int num;
	puts("\nIntroduce el numero a calcular el factorial:");
	scanf(" %i",&num);
	printf("R: %i",factorial(num));
	return 0;
}

int factorial(int numero)
{
	if(numero <= 0)
	{
		return 1;
	}
	else
	{
		return numero*factorial(numero-1);
	}
}