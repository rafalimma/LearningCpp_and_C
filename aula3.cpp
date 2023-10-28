#include <iostream>
using namespace std;

int n1, n2; // variáveis globais

int main() {
//operadores matemáticos + - / * %
// () faz a operação no parenteses primeiro

    int n3, n4; // variáveis locais
    int res;
    n1=11;
    n2=3;
    n3=5;
    n4=2;

    res=n1 + n3 + n4;
    cout << "SOma de todas as variaveis: " << res << "\n\n";

    return 0;
}
