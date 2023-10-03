#include <iostream>

int soma_numeros(int primeiro, int ultimo, int intervalo) {
    int soma = 0;
    for (int cont = primeiro; cont <= ultimo; cont += intervalo) {
        soma += cont;
    }
    return soma;
}

int main() {
    int primeiro = 1;
    int ultimo = 20;
    int intervalo = 1;
    int resultado = soma_numeros(primeiro, ultimo, intervalo);
    std::cout << resultado << std::endl;
    return 0;
}