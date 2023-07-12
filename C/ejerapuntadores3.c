//PEDIR SU NOMBRE AL USUARIO Y DEVOLVER EL NÚMERO DE VOCALES QUE HAY
#include <stdio.h>
#include <string.h>

int cuentaVocales(char *nombre);

int main(int argc, char const *argv[])
{
    char nombre[50];
    puts("Introduce tu nombre: ");
    fgets(nombre,50,stdin);
    strtok(nombre,"\n"); //Eliminar el carácter de nueva línea
    printf("El numero de vocales que hay en tu nombre es: %d\n",cuentaVocales(nombre));
    return 0;
}

int cuentaVocales(char *nombre)
{
    int contador = 0;
    while(*nombre != '\0')
    {
        switch(*nombre)
        {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
            contador++;
        }
        nombre++;
    }
    return contador;
}