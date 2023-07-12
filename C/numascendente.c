#include <stdio.h>

//ORDENAR NÚMEROS DE MANERA ASCENDENTE

void funcion();

int main(int argc, char const *argv[])
{
	
	puts("PROGRAMA QUE ORDENA NUMEROS DE MANERA ASCENDENTE\n");
	funcion();
	return 0;
}

void funcion()
{
	int cant=0,wait;
	puts("\t-Cuantos numeros quieres ordenar?\n");
	scanf(" %i",&cant);
	int num[cant];
	puts("\t-De acuerdo!\n");
	for(int i=0; i<cant; i++)
	{
		printf("\t-Numero #%i: ",i+1);
		scanf(" %i",&num[i]);
	}
	puts("\n");
	puts("\tOrdenando numeros...\n");
	for (int i=0; i<cant-1; i++)
	{
   	 	for (int j=0; j<cant-i-1; j++)
    	{
        	if (num[j] > num[j + 1])
        	{
            wait = num[j];
            num[j] = num[j + 1];
            num[j + 1] = wait;
        	}
    	}
	}
	for(int i=0; i<cant; i++)
	{
	printf(" %i",num[i]);	
}	
}
