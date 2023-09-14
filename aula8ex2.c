#include <stdio.h>

int main()
{
    int vet[50];
    
    for (int i = 0; i < 50; i++) 
    {
        vet[i] = i * i;
    }
    for(int i = 0; i < 50; i++) 
    {
        printf("%d ", vet[i]);
    }
    return 0;
}