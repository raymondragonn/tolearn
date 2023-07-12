#include <stdio.h>
#include <string.h>

//ESTRUCTURAS - COLECCIÓN DE UNO O MÁS ELEMENTOS DENOMINADOS MIEMBROS.
//PUEDEN SER DE DISTINTO TIPO. (CHAR, INT, FLOAT, ETC)

struct informacion{
	char nombre[35];
	int edad;
}senador[2];

void funcion();

int main(int argc, char const *argv[])
{
	funcion();
	return 0;
}

void funcion() {
	puts("------------INFORMACION SENADORES 2023------------\n");
	puts("INGRESA LA CANTIDAD TOTAL DE SENADORES:\n");
	for (int i = 0; i < 2; ++i) {
		printf("INTRODUCE LOS DATOS DEL SENADOR #%i\n", i+1);
		puts("NOMBRE:");
		fgets(senador[i].nombre, sizeof(senador[i].nombre), stdin);
		puts("EDAD:");
		scanf("%i", &senador[i].edad);
		fflush(stdin); //Liberar el búfer de entrada.
		puts("");
	}
	puts("\n\n");
	for (int i = 0; i < 2; ++i) {
		printf("DATOS DEL SENADOR #%i\n", i+1);
		printf("NOMBRE: %s", senador[i].nombre);
		printf("EDAD: %i\n", senador[i].edad);
		puts("");
	}
}