#include <stdio.h>

int main(int argc, char const *argv[])
{
    for(char letra = 'A'; 'A' <= 'Z'; letra++)
    {
        printf("%c ",letra);
        if(letra == 'Z')
        {
         return 0;    
        }
        
    }
    return 0;
}
