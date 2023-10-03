#include <stdio.h>

void mostrar_numeros(int primeiro, int ultimo) {
    for (int cont = primeiro; cont <= ultimo; cont++) {
        printf("%d ", cont);
    }
}

int main() {
    int primeiro = 1;
    int ultimo = 20;
    mostrar_numeros(primeiro, ultimo);
    return 0;
}