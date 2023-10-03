#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int somaAleatoria(int N) {
    int soma = 0;
    srand(time(NULL)); // Inicializa a semente do gerador de números aleatórios com o tempo atual

    for (int i = 0; i < N; i++) {
        int numeroAleatorio = rand(); // Gera um número inteiro aleatório
        soma += numeroAleatorio;
    }

    return soma;
}

int main() {
    int N;
    printf("Digite a quantidade de numeros a serem somados: ");
    scanf("%d", &N);

    int resultado = somaAleatoria(N);
    printf("A soma dos %d numeros aleatorios e: %d\n", N, resultado);

    return 0;
}