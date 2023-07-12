#include <stdio.h>

int main(int argc, char const *argv[])
{
    int array[] = {1,2,3,4,5,6,7,8,9,10}, copy[10];

    for (int i = 0; i < 10; i++)
    {
        copy[i]=array[i];
    }
    for (int j = 0; j < 10; j++)
    {
        printf("%i ",copy[j]);
    }
    return 0;
}
