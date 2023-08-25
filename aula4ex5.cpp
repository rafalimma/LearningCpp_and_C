#include <stdio.h>


int main() {
    int n1,n2,n3;

    printf("Digite um valor para o numero 1 ");
    scanf("%d", &n1);

    printf("Digite um valor para o numero 2 ");
    scanf("%d", &n2);

    printf("Digite um valor para o numero 3 ");
    scanf("%d", &n3);

    if(n1 > n2 && n1 > n3)
    {
        printf("O numero 1 eh o maior ");
    }
        else
            if(n2 > n1 && n2 > n3)
            {
                printf("O numero 2 eh o maior ");
            }
            else{
                printf("O numero maior eh o 3 ");
            }


    return 0;

}