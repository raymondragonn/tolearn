#include <stdio.h>
#include <string.h>

int buscar(int *a, int n, int x)
{
    for (int i = 0; i < n; i++)
        if (a[i] == x)
            return i;
    return -1;
}

int buscar2(int *a, int n, int x)
{
    int i;
    for (i = 0; i < n && a[i] < x; i++)
        ;
    if (a[i] == x)
        return i;
    return -1;
}

void insertAt(int *a, int *n, int pos, int x)
{
    // recorrer hacia la derecha los elementos a partir de la posición en donde quiero insertar
    for (int i = *n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos] = x;
    (*n)++;
}

void deleteAt(int *a, int *n, int pos)
{
    for (int i = pos; i < (*n) - 1; i++)
        a[i] = a[i + 1];
    (*n)--;
}

void insertOrd(int *a, int *n, int x)
{
    int i;
    for (i = 0; i < *n; i++)
    {
        if (x <= a[i])
        {
            insertAt(a, n, i, x);
            return; // i=*n+1;
        }
    }
    if (i == *n)
        insertAt(a, n, i, x);
}

int main()
{
    int a[20] = {1, 10, 25, 30, 31, 40, 42, 50, 51};
    int n = 9;

    return 0;
}