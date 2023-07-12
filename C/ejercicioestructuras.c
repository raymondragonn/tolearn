/* Hacer una estructura llamada alumno, en la cual se tendrán los siguientes miembros:
Nombre, edad, promedio, pedir datos al usuario para 3 alumnos, comprobar cual de los 3 
tiene el mejor promedio y posteriormente impirmir los datos del alumnos.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct alumno
{
    char nombre[25];
    int edad;
    float promedio;
}alumnos[3];

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 3; i++)
    {
        fflush(stdin);
        printf("\nALUMNO #%i:\n",i+1);
        puts("\tNOMBRE:");
        fgets(alumnos[i].nombre, sizeof(alumnos[i].nombre),stdin);
        alumnos[i].nombre[strcspn(alumnos[i].nombre, "\n")] = '\0';
        puts("\tEDAD:");
        scanf(" %i",&alumnos[i].edad);
        puts("\tPROMEDIO OBTENIDO:");
        scanf(" %f",&alumnos[i].promedio);
        puts("\n");
    }
    puts("\n");
    if (alumnos[0].promedio>alumnos[1].promedio)
    {
        if(alumnos[0].promedio>alumnos[2].promedio)
        {
        printf("\nEL ALUMNO #1 HA OBTENIDO EL PROMEDIO MAS ALTO.\n");
        printf("ALUMNO #1:\n");
        printf("\tNOMBRE: %s\n",alumnos[0].nombre);
        printf("\tEDAD: %i\n",alumnos[0].edad);
        printf("\tPROMEDIO OBTENIDO: %.2f\n",alumnos[0].promedio);
        puts("\n");
        puts("FELICITACIONES!\n");
        }
        else
        {
        printf("\nEL ALUMNO #3 HA OBTENIDO EL PROMEDIO MAS ALTO.\n");
        printf("ALUMNO #3:\n");
        printf("\tNOMBRE: %s\n", alumnos[2].nombre);
        printf("\tEDAD: %i\n", alumnos[2].edad);
        printf("\tPROMEDIO OBTENIDO: %.2f\n", alumnos[2].promedio);
        puts("\n");
        puts("FELICITACIONES!\n");
        }
    }
    else
    {
        if(alumnos[1].promedio>alumnos[2].promedio)
        {
        printf("\nEL ALUMNO #2 HA OBTENIDO EL PROMEDIO MAS ALTO.\n");
        printf("ALUMNO #2:\n");
        printf("\tNOMBRE: %s\n", alumnos[1].nombre);
        printf("\tEDAD: %i\n", alumnos[1].edad);
        printf("\tPROMEDIO OBTENIDO: %.2f\n", alumnos[1].promedio);
        puts("\n");
        puts("FELICITACIONES!\n");
        }
        else
        {
        printf("\nEL ALUMNO #3 HA OBTENIDO EL PROMEDIO MAS ALTO.\n");
        printf("ALUMNO #3:\n");
        printf("\tNOMBRE: %s\n", alumnos[2].nombre);
        printf("\tEDAD: %i\n", alumnos[2].edad);
        printf("\tPROMEDIO OBTENIDO: %.2f\n", alumnos[2].promedio);
        puts("\n");
        puts("FELICITACIONES!\n");
        }
    }
        return 0;
}
