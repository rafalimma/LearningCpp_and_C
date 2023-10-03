#include <stdio.h>

void calcular_quadrados(int limite) {
    int quad;
    for (int i = 0; i <= limite; i++) {
        quad = i * i;
        printf("\n%d^%d = %d", i, i, quad);
    }
}

int main() {
    int limite = 50;
    calcular_quadrados(limite);
    return 0;
}