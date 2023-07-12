#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

void menu(int a[]);
void ingresar(int a[]);
void modificar(int a[]);
void modificauno(int a[]);
void suma(int a[]);
void multiplicacion(int a[]);
void sumadiv3(int a[]);
void multi3(int a[]);


int main()
{
	system("cls");
	int a[10] = {0};
	ingresar(a);
	menu(a);
	return 0;
}

void menu(int a[])
{
	system("cls");
	char option[2];
	puts("\n---------------EJERCICIOS CON ARREGLOS---------------\n");
	puts(" MENU DE OPCIONES");
	puts(" (A) - MODIFICAR VALORES\n (B) - SUMAR VALORES\n (C) - MULTIPLICAR VALORES\n (D) - SUMAR VALORES DIVISIBLES ENTRE 3\n (E) - MULTIPLICAR CADA VALOR POR 3\n\n (R) - REINICIAR\n (S) - SALIR\n");
	scanf(" %1s",option);
	strupr(option);
	switch(option[0]) 
	{
		case 'A':
			modificar(a);
			break;
		case 'B':
			suma(a);
			break;
		case 'C': 
			multiplicacion(a);
			break;
		case 'D':
			sumadiv3(a);
			break;
		case 'E':
			multi3(a);
			break;
		case 'S':
			return;
			break;
		case 'R':
			main();
			break;
		default:
			break;
	}
	
}

void ingresar(int a[])
{
	system("cls");
	char option[2];
	puts("\n---------------EJERCICIOS CON ARREGLOS---------------\n");
	puts(" INGRESA LOS VALOES DEL ARREGLO:");
	for (int i = 0; i < 10; ++i)
	{
		scanf(" %i",&a[i]);
	}
	puts("\n");
	puts(" VALORES ALMACENADOS CORRECTAMENTE...\n");
	for (int j = 0; j < 10; ++j)
	{
		printf(" POSICION[%i]: %i\n",j,a[j]);	
	}
}

void modificar(int a[])
{
	system("cls");
	int posicion;
	char option[2];
	puts("\n---------------EJERCICIOS CON ARREGLOS---------------\n");
	puts(" VALORES ALMACENADOS:\n");
	for (int j = 0; j < 10; ++j)
	{
		printf(" POSICION[%i]: %i\n",j,a[j]);	
	}
	puts(" \nPOSICION DEL VALOR A MODIFICAR:\n");
	scanf(" %i",&posicion);
	printf(" VALOR EN LA POSICION[%i]: %i\n",posicion,a[posicion]);
	printf(" INTRODUCE EL NUEVO VALOR PARA LA POSICION[%i]:\n",posicion);
	scanf(" %i",&a[posicion]);
	puts(" CAMBIOS GUARDADOS CORRECTAMENTE...\n");
	puts(" SELECCIONA UNA OPCION:");
	puts(" (A) - MODIFICAR OTRO VALOR\n\n (H) - HOME\n (S) - SALIR\n");
	scanf(" %1s",option);
	strupr(option);
	switch(option[0])
	{
		case 'A': 
			modificar(a);
			break;
		case 'H':
			menu(a);
			break;
		case 'S':
			return;
			break;
		default:
			modificar(a);
			break;
	}
}

void suma(int a[])
{
	system("cls");
	char option[2];
	int sumatoria=0;
	puts("\n---------------EJERCICIOS CON ARREGLOS---------------\n");
	puts(" VALORES ALMACENADOS:\n");
	for (int j = 0; j < 10; ++j)
	{
		printf(" POSICION[%i]: %i\n",j,a[j]);	
	}
	for (int i = 0; i < 10; ++i)
	{
		sumatoria+=a[i];
	}
	printf(" \nLA SUMA DE TODOS LOS VALORES ALMACENADOS ES: %i\n\n",sumatoria);
	puts(" SELECCIONA UNA OPCION:");
    puts(" (H) - HOME\n (S) - SALIR\n");
    scanf(" %1s",option);
    strupr(option);
    switch(option[0])
    {
        case 'H':
            menu(a);
            break;
        case 'S':
            return;
            break;
        default:
            suma(a); 
            break;
    }
}

void multiplicacion(int a[])
{
	system("cls");
	char option[2];
	long multiplica=1;
	puts("\n---------------EJERCICIOS CON ARREGLOS---------------\n");
	puts(" VALORES ALMACENADOS:\n");
	for (int j = 0; j < 10; ++j)
	{
		printf(" POSICION[%i]: %i\n",j,a[j]);	
	}
	for (int i = 0; i < 10; ++i)
	{
			multiplica*=a[i];
	}
	printf(" \nLA MULTIPLICACION DE TODOS LOS VALORES ALMACENADOS ES: %i\n\n",multiplica);
	puts(" SELECCIONA UNA OPCION:");
    puts(" (H) - HOME\n (S) - SALIR\n");
    scanf(" %1s",option);
    strupr(option);
    switch(option[0])
    {
        case 'H':
            menu(a);
            break;
        case 'S':
            return;
            break;
        default:
            suma(a); 
            break;
    }
}

void sumadiv3(int a[])
{
	system("cls");
	char option[2];
	int sumatoria=0;
	puts("\n---------------EJERCICIOS CON ARREGLOS---------------\n");
	puts(" VALORES ALMACENADOS:\n");
	for (int j = 0; j < 10; ++j)
	{
		printf(" POSICION[%i]: %i\n",j,a[j]);	
	}
	for (int i = 0; i < 10; ++i)
	{
		if(fmod(a[i],3)==0)
		{
			sumatoria+=a[i];
		}
	}
	printf(" \nLA SUMA DE LOS VALORES ALMACENADOS DIVISIBLES ENTRE 3 ES: %i\n\n",sumatoria);
	puts(" SELECCIONA UNA OPCION:");
    puts(" (H) - HOME\n (S) - SALIR\n");
    scanf(" %1s",option);
    strupr(option);
    switch(option[0])
    {
        case 'H':
            menu(a);
            break;
        case 'S':
            return;
            break;
        default:
            suma(a); 
            break;
    }
}

void multi3(int a[])
{
	system("cls");
	char option[2];
	long multiplica=1;
	puts("\n---------------EJERCICIOS CON ARREGLOS---------------\n");
	puts(" VALORES ALMACENADOS:\n");
	for (int j = 0; j < 10; ++j)
	{
		printf(" POSICION[%i]: %i\n",j,a[j]);	
	}
	for (int i = 0; i < 10; ++i)
	{
			a[i]=a[i]*3;
	}
	puts(" \nVALORES ALMACENADOS MULTIPLICADOS POR 3:\n");
		for (int j = 0; j < 10; ++j)
	{
		printf(" POSICION[%i]: %i\n",j,a[j]);	
	}
	puts(" \nSELECCIONA UNA OPCION:");
    puts(" (H) - HOME\n (S) - SALIR\n");
    scanf(" %1s",option);
    strupr(option);
    switch(option[0])
    {
        case 'H':
            menu(a);
            break;
        case 'S':
            return;
            break;
        default:
            suma(a); 
            break;
    }
}