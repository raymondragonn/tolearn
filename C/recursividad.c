#include <stdio.h>

/* CUENTA REGRESIVA INICIANDO DESDE EL NUMERO DADO POR EL USUARIO 
HECHO CON RECURSIVIDAD, por lo tanto necesitamos caso base. */

void cuentaRegresiva(int numeroActual);

int main(int argc, char const *argv[])
{
	int num;
	puts("\nIntroduce el numero a empezar:\n");
	scanf(" %i",&num);
	cuentaRegresiva(num);
	return 0;
}

void cuentaRegresiva(int numeroActual){
	if(numeroActual <= 0) //Caso base
	{
		return;
	}
	else
	{
		printf(" %i",numeroActual);
		cuentaRegresiva(numeroActual-1);
	}
}