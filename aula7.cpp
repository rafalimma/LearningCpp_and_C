#include <stdio.h>

int main()
{
    int cont;

    cont = 1;
    while(cont <= 20)
    {
        printf("\n%d", cont);
        cont++;
    }

    printf("\nHora do for:");

    for(cont=1; cont<=20; cont++)
    {
        printf("\n%d", cont);
    }
}