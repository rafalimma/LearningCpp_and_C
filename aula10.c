#include <stdio.h>

int main()
{
    int v[10], g[10];

    for (int i=0; i<10; i++)
    {
        g[i] = i;
        v[i] = i;
    }
    for (int i=0; i<10; i++)
    {
        printf("\n %d %d", v[i], g[i]);
    }
}
//usando mesmo indice para 2 vetores