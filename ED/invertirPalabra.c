#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char word[25] = "hola"; // hola
    char *ptr = word;
    char aux[25];
    int i = 3;
    for (int j = 1; j < 5; j++)
    {
        aux[i] = *ptr;
        ptr = &word[j];
        i--;
    }
    strcpy(word, aux);
    printf("\n%s", word);
    return 0;
}
