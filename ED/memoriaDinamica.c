#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int *arr,num,rangoMin,rangoMax;
    puts("Introduce la cantidad de valores aleatorios que requieres.");
    scanf("%d",&num);
    puts("\nIntroduce el intevalo de numeros aleatorios.");
    scanf("%d %d",&rangoMin,&rangoMax);
    arr = (int*)malloc(num*sizeof(int));
    if(arr == NULL)
    {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }
    srand(time(NULL));
    for (int i = 0; i < num; i++)
    {
        arr[i] = rand() % (rangoMin - rangoMax + 1) + rangoMin;
    }
    for (int i = 0; i < num; i++)
    {
        printf("arr[%d] = %d\n",i,arr[i]);
    }
    free(arr);
    return 0;
}
