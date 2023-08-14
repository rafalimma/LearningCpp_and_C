#include <stdio.h>
#include <math.h>

int main() {
int r, a, b;

// Inicialização das variáveis
r = 2 * 1.45 / 3;
printf("Valor de r após r = 2 * 1.45 / 3: %d\n", r);

b = 4;
a = 40 - sqrt(b);
r = (int)3.1416 + a * 5;
printf("Valor de r após r = (int)3.1416 + a * 5: %d\n", r);

r = 9.5 - 18 % 5;
printf("Valor de r após r = 9.5 - 18 %% 5: %d\n", r);

r = (-6 + (int)3.4) * (-6 + (int)3.4) - 7 / 3;
printf("Valor de r após r = (-6 + (int)3.4) * (-6 + (int)3.4) - 7 / 3: %d\n", r);

return 0;
}