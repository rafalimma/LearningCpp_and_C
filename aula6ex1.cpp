#include <stdio.h>



#include <conio.h>  



int main() {



    char opcao;





    do {

 

        printf("MENU\n");

 

        printf("==========\n");

 

        printf("[1] Programa 1\n");

 

        printf("[2] Programa 2\n");

 

        printf("[3] Programa 3\n");

 

        printf("[S] Sair\n");

 

 

        opcao = getch();  

 

 

        if (opcao == '1') {

 

                float n1,n2,n3,n4, media;
                int faltas;
                printf("Digite a nota do Primeiro Bimestre ");
                scanf("%f", &n1);

                printf("Digite a nota do Segundo Bimestre ");
                scanf("%f", &n2);

                printf("Digite a nota do Terceiro Bimestre ");
                scanf("%f", &n3);

                printf("Digite a nota do Quarto Bimestre ");
                scanf("%f", &n4);

                printf("Digite o numero de faltas ");
                scanf("%d", &faltas);

                media = (n1 + n2 + n3 + n4) / 4;

                if(media >= 7.0 && faltas <= 20)
                {
                    printf("Aprovado");

                }else if(media >= 4.0 && faltas <= 20)
                {
                    printf("Exame final");
                }
                else
                {
                    printf("Reprovado");
                }

                return 0;


 

        } else if (opcao == '2') {

                    float A,B,C;

                    printf("Digite o valor de A ");
                    scanf("%f", &A);

                    printf("Digite o valor de B ");
                    scanf("%f", &B);

                    printf("Digite o valor de C ");
                    scanf("%f", &C);

                    if (A < B + C && B < A + C && C < A + B){
                        if(A == B && B == C)
                        {
                            printf("Triangulo Equilatero\n");
                        }
                        else if (A == B || A == C || B == C)
                        {
                            printf("Triangulo Isoseles\n");   
                        }
                        else
                        {
                            printf("Triangulo Escaleno");    
                        }
                    }


                    return 0;


 

        } else if (opcao == '3') {

 

        

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



                



        } else if (opcao == 'S' || opcao == 's') {


            printf("Saindo do programa.\n");



        } else {



            printf("Opção inválida. Por favor, escolha novamente.\n");



        }



    } while (opcao != 'S' && opcao != 's');




    return 0;



}