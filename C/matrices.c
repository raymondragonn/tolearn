#include <stdio.h>

int main(int argc, char const *argv[])
{
    int filas,columnas;
    puts("------MATRICES------");
    puts(" Introduce la cantidad de filas:\n");
    scanf(" %i",&filas);
    puts(" Introduce la cantidad de columnas:\n");
    scanf(" %i",&columnas);
    int matriz[filas][columnas];
    printf(" Excelente! La matriz sera de [%i][%i]\n",filas,columnas);
    puts(" Introduce los datos de la matriz\n");
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            scanf(" %i",&matriz[i][j]);
        }
    }
    puts("\n");
    return 0;
}
