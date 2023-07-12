#include <stdio.h>

int main(int argc, char const *argv[])
{
	int dia=0;
	char door='Y';
	if(door=='Y'||'y')
	{
	puts("Selecciona un numero de los dias de la semana (1-7)\n");
	scanf(" %i",&dia);
		switch(dia)
		{
			case 1: puts("Lunes\n");
			break;
			case 2: puts("Martes\n");
			break;
			case 3: puts("Miercoles\n");
			break;
			case 4:	puts("Jueves\n");
			break;
			case 5: puts("Viernes\n");
			break;
			case 6: puts("Sabado\n");
			break;
			case 7: puts("Domingo\n");
			break;
			default: puts("Introduce un numero del 1 al 7\n");
			break;
		}
	puts("Desea repetir el programa? (Y/N)\n");
	scanf(" %c",&door);
	}
	return 0;
}