#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));//inicializa a semente do gerador de n aleatórios
    int vet[10];

    for(int i=0; i<10; i++)
    {
        vet[i] = rand();
    }
    for(int i=0; i<10; i++)
    {
        printf("\n %d", vet[i]);
    }
    return 0;
}