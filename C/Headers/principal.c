#include <stdio.h>
#include "suma.h"
#include "resta.h"

int main(int argc, char const *argv[])
{
    int *pa, *pb, a=4, b=2;
    pa = &a;
    pb = &b;

    int r1 = suma(pa,pb);
    printf("El valor de la suma es: %i\n",r1);
    int r2 = resta(pa,pb);
    printf("El valor de la resta es: %i\n", r2);
    return 0;
}
