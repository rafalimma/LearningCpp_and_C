#include <stdio.h> 
#include <string.h>

struct Carro {
    char nome[10];
    int kilometragem;
    char marca[10];
};

int main()
{
    struct Carro carro1;
    struct Carro aux;

    strcpy(carro1.nome, "Gol");
    carro1.kilometragem = 500;
    strcpy(carro1.marca, "VolksWagen");

    printf("Nome: %s\n", carro1.nome); // Imprime o nome da pessoa1
    printf("Kilometragem: %d\n", carro1.kilometragem);
    printf("Marca: %s\n", carro1.marca);
    

    return 0;
}

