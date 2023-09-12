#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    scanf("%i",&num);
    for(int i=num; i>=1; i--)
    {
        printf("%c", 42);
        for(int j=i;j>1;j--)
        {
            printf("%c", 42);
        }
        puts("\n");
    }

    return 0;
}
