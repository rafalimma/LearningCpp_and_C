#include <stdio.h>

int main()
{
    int vet_a[5];
    int vet_b[5];
    int vet_c[5];

    for(int i=0; i<5; i++)
    {
        vet_a[i] = i;
    }
        for(int i=0; i<5; i++)
    {
        vet_b[i] = i;
    }
        for(int i=0; i<5; i++)
    {
        vet_c[i] = vet_a[i] + vet_b[i];
    }
    for(int i=0; i<5; i++)
    {
        printf("\n%d", vet_c[i]);
    }
    return 0;
}