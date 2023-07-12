#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* srand(time(NULL));
	variable = limiteInferior + rand()%(limiteSuperior + 1) - limiteInferior) */


void funcionAleatoria();

int main(int argc, char const *argv[])
{
	funcionAleatoria();
	return 0;
}

void funcionAleatoria(){
	int num;
	srand(time(NULL));

	num = 1 + rand()%((10-1)-1);
	printf("%d",num);
}