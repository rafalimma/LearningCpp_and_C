#include <stdio.h>

int main()
{
    int vet[50];

    vet[0] = 1;
    vet[1] = 1;
    
    for(int i = 2; i < 50; i++) 
    {
        vet[i] = vet[i - 1] + vet[i - 2];
    }
    for(int i = 0; i < 50; i++) 
    {
        printf("Fibonacci[%d] = %d\n",i + 1, vet[i]);
    }

    return 0;
}
