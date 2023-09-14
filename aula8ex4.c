#include <stdio.h>

int main()
{
    int vet [50]

    vet[0] = 1
    for(int i = 1; i < 50; i++)
    {
        vet[i] = i + 1 * (i + 1)
    }
    for(int i = 0; i < 50; i++) 
    {
        printf("%d\n",i + 1, vet[i]);
    }

}
