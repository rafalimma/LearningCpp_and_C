#include <stdio.h>


int main()
{
    int dia,mes,ano, dia_max;

    printf("Digite o dia ");
    scanf("%d", &dia);

    printf("Digite o mes ");
    scanf("%d", &mes);

    printf("Digite o ano ");
    scanf("%d", &ano);

    if(ano > 0 && ano <= 2023 && mes >= 1 && mes <= 12)
    {
            dia_max = 31;
        if(mes == 4 || mes == 6 || mes == 9 || mes == 11)
        {
            dia_max = 30;
        }
        else if(mes == 2)
        {
            if((ano % 4 == 0 && ano % 100 != 0 ) || (ano % 400 == 0))
            {
                dia_max = 29;
                printf("Ano bissexto\n");
            }
            else
            {
                dia_max = 28;
            }
        }
    }
    if (dia >= 1 && dia <= dia_max) {



            printf("Data válida\n");
        } 
        else 
        {
        printf("Data inválida %d\n", dia_max);
        }



return 0;



}