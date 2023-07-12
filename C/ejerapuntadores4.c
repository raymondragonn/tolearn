#include <stdio.h>

int main(int argc, char const *argv[])
{
    int array[] = {1, 2, 3, 4, 4, 7, 8, 9, 5, 4};
    int *parray;
    parray = array;

   for (int i = 0; i < 10; i++)
   {
       printf("Posicion: %i Valor: %i Direccion: %p\n",i, *parray, parray);
       parray++;
       
   }
    return 0;
}
