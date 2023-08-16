#include <stdio.h>

int main()
{
    double a, b, c, x, y, z;

    printf("\nDigite um valor pra a: ");
    scanf("%lf", &a);
    printf("\nDigite um valor pra b: ");
    scanf("%lf", &b);
    printf("\nDigite um valor pra c: ");
    scanf("%lf", &c);

    x = a/ (b + c);
    y = a/ (b * c);
    z = (a + 2*b)/ (4-c);
    printf("\n X = %.1lf", x);
    printf("\n Y = %.1lf", y);
    printf("\n z = %.1lf", z);

}