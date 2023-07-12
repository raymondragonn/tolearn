//*Crear un programa en C que pueda seguir agregando contactos de email, 
//*hacia el archivo que creamos en el prorblema 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int num,i=1;
    char email[40],nombre[40];
    FILE *archivo = fopen("Prueba.txt","a+");
   
    if(archivo == NULL)
    {
        puts("No se ha podido acceder al archivo.\n");
    }
    else
    {
        puts("Archivo encontrado!\n");
    }
    puts("Cuantos contactos (email) agregaras?");
    scanf(" %i", &num);
    getchar();
    fprintf(archivo, " - CONTACTOS - \n");
    while (i <= num)
    {
        printf("CONTACTO #%i\n", i);
        puts("Nombre:");
        fgets(nombre, 25, stdin);
        strtok(nombre, "\n");
        puts("Email:");
        fgets(email, 30, stdin);
        strtok(email, "\n");
        puts("\n\n");
        fprintf(archivo, "Nombre: %s\n", nombre);
        fprintf(archivo, "Email: %s\n\n", email);
        i++;
    }
    fclose(archivo);
    puts("\nContados agregados correctamente.");
    return 0;
}
