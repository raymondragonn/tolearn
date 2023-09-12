#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m[3][3] = {10,20,30,60,70,80,110,120,130};
    int fila, columna;
    for (int i = 0; i < 3; i++)
    {
        puts("");
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",m[i][j]);
        }
    }
    puts("");
    int *ptr = m;
    printf("\n%d %d %d\n",*ptr,*(ptr+1),*(ptr+2));
    printf("%d %d %d\n", *(ptr + 1*3), *(ptr + 1*3 + 1), *(ptr + 1*3 + 2));
    printf("%d %d %d\n", *(ptr + 2*3), *(ptr + 2*3 + 1), *(ptr + 2*3 + 2));

    return 0;
}
