#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char option = 'Y';
    while(option != 'N')
    {
        puts("Hola\n");
        puts("\n\nDesea repetir el programa?");
        scanf("%c",&option);
        strupr(option);
        getchar();
    }
    return 0;
}
