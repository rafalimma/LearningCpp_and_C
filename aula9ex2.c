#include <stdio.h>

int calcularFat(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * calcularFat(num - 1);
    }
}
int main(){
    int fatoriais[8];
    


    for (int i = 1; i <= 8; i++)
    {
        fatoriais[i] = calcularFat(i + 1);
    }
    for (int i = 1; i <= 8; i++)
    {
        printf("%d! = %d\n", i + 1, fatoriais[i]);
    }
    return 0;
}