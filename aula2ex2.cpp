#include <stdio.h>

int main()
{
    double nota1;
    double nota2;
    double nota3;
    double nota4;
    double media;

    printf("\nDigite a nota 1: ");
    scanf("%lf", &nota1);
    printf("\nDigite a nota 2: ");
    scanf("%lf", &nota2);
    printf("\nDigite a nota 3: ");
    scanf("%lf", &nota3);
    printf("\nDigite a nota 4: ");
    scanf("%lf", &nota4);

    media = (nota1 + nota2 + nota3 + nota4)/4.0;

    printf("\nSua media e %.2lf", media);


}