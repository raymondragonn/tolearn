#include <stdio.h>

int main() {

    int *p1;
    p1 = malloc(sizeof(int));
    if (p1 == NULL){
        printf("Memoria LLena\n");
    }else{
        printf("Hay Espacio\n");
        *p1 = 15;
        printf("\n\n%i",*p1);
    }
    free(p1); //Libera espacio que apunta p1

    printf("\n\n%i\n",*p1);
    return 0;
}