#include <stdio.h>

int main() {
    int A[] = {1, 1, 6, 6, 7, 7, 7, 1, 1, 1, 2};
    int tamanho = sizeof(A) / sizeof(A[0]); // Calcula o tamanho do vetor A
    int maiorSequencia = 1; // Inicializa com 1, pois há pelo menos um elemento no vetor
    int sequenciaAtual = 1; // Contador para a sequência atual

    for (int i = 1; i < tamanho; i++) {
        if (A[i] == A[i - 1]) {
            sequenciaAtual++;
            if (sequenciaAtual > maiorSequencia) {
                maiorSequencia = sequenciaAtual;
            }
        } else {
            sequenciaAtual = 1; // Reinicia a contagem da sequência atual
        }
    }

    printf("Tamanho da maior sequência de números iguais: %d\n", maiorSequencia);

    return 0;
}