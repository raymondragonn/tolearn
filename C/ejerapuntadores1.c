#include <stdio.h>

int main(int argc, char const *argv[])
{
    char caracter;
    char *pcaracter;
    pcaracter = &caracter;

    for (caracter = 'A';caracter <= 'Z'; caracter++)
    {
        printf("%c ",*pcaracter);
    }
    puts("\n");
    for (caracter = 'a'; caracter <= 'z'; caracter++)
    {
        printf("%c ", *pcaracter);
    }
    return 0;
}
