#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Funciones Matemáticas:
floor(x) -> Redondea al entero menor más cercano.
ceil(x) -> Redondea al entero mayor más cercano.

sqrt(x) -> Saca la raíz cuadrada de x.
pow(x,y) -> Calcula x elevado a la pontencia y. 

fabs(x) -> Devuelve el valor absoluto de x.

fmod(x,y) -> Calcula el resto de la división de x/t. */

void funceil();
void funfabs();
void funfloor();
void funsqrt();
void funfmod();
void funpow();

int main(int argc, char const *argv[])
{
	int option=0;
	system("cls");
	puts("\n----------------------FUNCIONES MATEMATICAS EN C-----------------------\n");
	puts("MENU DE OPCIONES");
	puts(" (1) - floor(x)\n (2) - ceil(x)\n\n (3) - sqrt(x)\n (4) - pow(x)\n\n (5) - fabs(x,y)\n\n (6) - fmod(x,y)\n");
	scanf(" %i",&option);
	switch(option){
		case 1:
			funfloor();
			break;
		case 2:
			funceil();
			break;
		case 3: 
			funsqrt();
			break;
		case 4: 
			funpow();
			break;
		case 5:
			funfabs();
			break;
		case 6: 
			funfmod();
			break;
		default:
			puts("Opcion no valida\n");
	}
	return 0;
}

void funceil(){
	float x, change=0;
	system("cls");
	puts("\n----------------------FUNCION MATEMATICA: ceil(x)-----------------------\n");
	puts("ceil(x) -> Redondea al entero mayor mas cercano.\n");
	printf("Probemoslo! Escribe un numero con decimales:\n");
	scanf(" %f",&x);
	change=ceil(x);
	printf("R: %.2f",change);
}

void funfabs(){
	system("cls");
	float x,change=0;
	puts("\n----------------------FUNCION MATEMATICA: fabs(x)-----------------------\n");
	puts("fabs(x) -> Devuelve el valor absoluto de x.\n");
	printf("Probemoslo! Escribe un numero negativo:\n");
	scanf(" %f",&x);
	change=fabs(x);
	printf("R: %.2f",change);
}

void funfloor(){
	system("cls");
	float x,change=0;
	puts("\n----------------------FUNCION MATEMATICA: floor(x)-----------------------\n");
	puts("floor(x) -> Redondea al entero menor mas cercano.\n");
	printf("Probemoslo! Escribe un numero con decimales:\n");
	scanf(" %f",&x);
	change=floor(x);
	printf("R: %.2f",change);

}

void funsqrt(){
	system("cls");
	float x,change=0;
	puts("\n----------------------FUNCION MATEMATICA: sqrt(x)-----------------------\n");
	puts("sqrt(x) -> Saca la raiz cuadrada de x.\n");
	printf("Probemoslo! Escribe un numero, de preferencia x^2:\n");
	scanf(" %f",&x);
	change=sqrt(x);
	printf("R: %.2f",change);
}

void funfmod(){
	system("cls");
	float x,y,change=0;
	puts("\n----------------------FUNCION MATEMATICA: fmod(x,y)-----------------------\n");
	puts("fmod(x,y) -> Calcula el resto de la division de x/t.\n");
	printf("Probemoslo! Escribe el divisor y el dividendo:\n");
	scanf(" %f %f",&x,&y);
	change=fmod(x,y);
	printf("R: %.2f",change);
}

void funpow(){
	system("cls");
	float x,y,change=0;
	puts("\n----------------------FUNCION MATEMATICA: pow(x,y)-----------------------\n");
	puts("pow(x,y) -> Calcula x elevado a la potencia y.\n");
	printf("Probemoslo! Escribe la base y la potencia\n");
	scanf(" %f %f",&x,&y);
	change=pow(x,y);
	printf("R: %.2f",change);
}