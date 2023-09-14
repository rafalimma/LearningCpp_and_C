#include <stdio.h>

int main() {
    int tamanho; // Tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    if (tamanho <= 0) {
        printf("Tamanho do vetor deve ser positivo.\n");
        return 1;
    }

    int vetor[tamanho]; // Declaração do vetor
    int menor; // Variável para armazenar o menor elemento

    // Preencha o vetor
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    // Inicialize a variável 'menor' com o primeiro elemento do vetor
    menor = vetor[0];

    // Encontre o menor elemento no vetor
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    // Exiba o menor elemento
    printf("O menor elemento do vetor é: %d\n", menor);

    return 0;
}