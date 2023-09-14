#include <stdio.h>

int main()
{
    int vet[10];
    vet[0] = 1;
    vet[1] = 1;

    for (int i = 0; i<10; i++)
    {
        vet[i] = vet[i - 1] + vet[i - 2];
    }
    for (int i = 0; i<10; i++)
    {
        printf("\n %d %d", i + 1, vet[i]);
    }
    return 0;
}