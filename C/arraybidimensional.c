#include <stdio.h>

/*	tipoDeDato nombreDela [numeroFilas][numeroColumnas];*/

int tabla(int fila, int columna);

int main(int argc, char const *argv[])
{
	int f,c;
	puts("\nIntroduce el numero de filas y columnas");
	scanf(" %i %i",&f,&c);
	tabla(f,c);
	return 0;
}

int tabla(int fila,int columna)
{
	int tabla[fila][columna];
	puts("\nIntroduce los datos de la tabla y la imprimire");
	for(int i=0; i<fila; i++)
	{
		for(int j=0; j<columna; j++)
		{
			printf(" Posicion:[%i][%i]: ",i+1,j+1);
			scanf(" %i",&tabla[i][j]);
		}
	}
	puts("\n");
	puts("Imprimiendo...\n");
	for(int i=0; i<fila; i++)
	{
		if(tabla[i][columna])
			{
				puts("\n");
			}
		for(int j=0; j<columna; j++)
		{
			printf(" %i\t",tabla[i][j]);
		}
	}
	return 0;
}