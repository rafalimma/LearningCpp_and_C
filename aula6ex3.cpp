#include <stdio.h>

int main()
{
    int a, b, c ;

    printf("\nDigite o valor de a: ");
    scanf("%d", &a);
    printf("\nDigite o valor de b: ");
    scanf("%d", &b);
    printf("\nDigite o valor de c: ");
    scanf("%d", &c);


    if ((a < b + c) && (b < c + a) && (c < b + a))
    {
        if ((a == b) && (b == c) && (a == c))
            printf("\nTriangulo equilatero 3 lados iguais");
        else if
            ((a == b) || (b == c) || (a == c))
            printf("\nTriangulo isosceles 2 lados iguais");
        else
            printf("\nTriangulo escaleno 3 lados diferentes");
    }
    else
    {
        printf("\nIsso não é um triangulo")
    }
}