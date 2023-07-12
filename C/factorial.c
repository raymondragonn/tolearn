#include <stdio.h>

//Recursividad es la capacidad de llamarse a si misma dentro de la misma función.

long factorial(int n);

int main(int argc, char const *argv[])
{
	int num=0;	
	puts("\nIntroduce un numero:");
	scanf("%i",&num);
	printf("El factorial del numero es: %i",factorial(num));
	return 0;
}

long factorial(int n){
	if(n<=1)
	{
		return 1;
	}
	else
	{
		return (n*factorial(n-1));
	}
}