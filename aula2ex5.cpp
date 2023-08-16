#include <stdio.h>

int main()
{
    int temp, c;

    printf("\nQual a temperatura");
    scanf("\n temp= %d", temp);
    
    c = (9 * temp)/5 + 32;
    printf("\nC para  F e %d", c);
}
