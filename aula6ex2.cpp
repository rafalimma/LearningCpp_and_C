#include <stdio.h>
int main()
{
    double n1, n2, n3, n4, m, sum;
    int faltas;

    printf("\nDigite a nota 1: ");
    scanf("%lf", &n1);
    printf("\nDigite a nota 2: ");
    scanf("%lf", &n2);
    printf("\nDigite a nota 3: ");
    scanf("%lf", &n3);
    printf("\nDigite a nota 4: ");
    scanf("%lf", &n4);
    printf("\nDigite o número de faltas: ");
    scanf("%d", &faltas);

    sum = (n1 + n2 + n3 + n4);
    m = (sum/4);

    if (m > 7.0)
    {
        if (faltas < 20)
        printf("\nVocê foi aprovado!");
        else
        printf("\nReprovado!");
    }
    else
    {
        if (faltas < 20)
        printf("\nVocê foi aprovado!");
        else
        printf("\nVocê esta em exame final!");
    }
}