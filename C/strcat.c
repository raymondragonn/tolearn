#include <stdio.h>
#include <string.h>

/* strcat(Destino,Fuente) = cat = CONCATENAR*/

int main(int argc, char const *argv[])
{
	char cad1[] = "Raymundo", cad2[] = "Becerra";
	char unir[50];

	// Concatenamos 
	strcat(unir,cad1);
	strcat(unir,"_");
	strcat(unir,cad2);
	printf("%s\n\n",unir); //Imprime 'Raymundo_Becerra'

	char cad3[15];
	scanf("%s",cad3);
	strcat(unir,"_");
	strcat(unir,cad3);
	printf("%s",unir); //Imprime 'Raymundo_Becerra_Mondragon'

	//strcat(DESTINO,ORIGEN)
	//Con strcat puedes unir cadenas colocando la nueva cadena
	//al final de la última cadena almacenada por la variable DESTINO
	return 0;
}