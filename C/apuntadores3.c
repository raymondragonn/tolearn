#include <stdio.h>
int main(int argc, char const *argv[])
{
    int *ptr;
    int var=2;
    ptr = &var;
    printf("%i",*ptr);
    
    return 0;
}
