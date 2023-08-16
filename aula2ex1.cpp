#include <cstdio>

int main()
{
    char frase[20];

    printf("\nDigite uma frase: ");
    fgets(frase, 20, stdin);
    printf("\nSua frase e ");
    puts(frase);
}