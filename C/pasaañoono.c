#include <stdio.h>

int main(int argc, char const *argv[])
{
	puts("\t\nPRGRAMA PARA EVALUAR SI EL ALUMNO PASA DE ANO O NO\n");
	int materias=0,aprob=0,reprob=0;
	puts("Introduce la cantidad de materias\n");
	scanf(" %i",&materias);
	int calif[materias];
	puts("Guardando...\n");
	puts("Introduce la calificacion de cada una de tus materias\n");
	for(int i=1;i<=materias;i++)
	{
		printf("MATERIA #%i\n",i);
		scanf(" %i",&calif[i]);
		if(calif[i]<6)
		{
			reprob++;
		}
		else if(calif[i]>=6)
		{
			aprob++;
		}
	}
	printf("\nUsted aprobo #%i materias\n",aprob);
	printf("Usted reprobo #%i materias\n",reprob);
	if(reprob<=3)
	{
		puts("\nFelicitaciones, ha pasado el curso!");
		puts("Nos vemos el proximo ano\n");
	}
	else
	{
		puts("\nNo ha acreditado el curso :(");
		puts("Evalue con su coordinador la situacion\n");
	}
	return 0;
}