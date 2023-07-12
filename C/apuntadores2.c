#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int a = 40;
    int b = 30;

    int *pA;
    pA = &a;
    int *pB = &b;

    printf("%i\n",a);
    printf("%i\n\n",*pA);
    scanf(" %i",&a);
    printf("\n\n%i\n",a);
    printf("%i\n",*pA);
}