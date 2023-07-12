#include <stdio.h>

int sumar();
int suma=0,a=0,b=0;

int main(int argc, char const *argv[])
{
	puts("Introduce el valor de dos numeros para sumarlos.\n");
	scanf(" %i %i",&a,&b);
	printf("La suma es %i",sumar(a,b));
	return 0;
}

int sumar(int n1, int n2)
{
	int suma=0;
	suma = n1+n2;
	return suma;
}