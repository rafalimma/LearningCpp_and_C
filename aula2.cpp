#include <iostream>

int main()
{
    float a, b, c;
    float soma;
    char nome;

    scanf("%f", &a);
    scanf("%f%f", &b, &c);

    soma = a + b + c;
    printf("\nSoma=%f", soma);

    printf("\nDigite seu nome: ");
    scanf("%s", nome);
    printf("\nPalavra digitada: %s", nome);
}