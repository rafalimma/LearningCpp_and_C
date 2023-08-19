
#include <stdio.h>



int main()
{
    char sexo;
    float altura;
    float peso;



    printf("\nInforme seu sexo: ");
    scanf(" %c", &sexo);



    printf("\nInforme sua altura: ");
    scanf(" %f", &altura);



    if (sexo == 'm')
    {
        peso = ((72.7 * altura) - 58);
    }
    if (sexo == 'f')
    {
        peso = ((62.1 * altura) - 44.7);
    }

    printf("\n%.2f", peso);

}
