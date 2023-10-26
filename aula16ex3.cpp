#include <cstdio>
#include <iostream>
using namespace std;
#include <cstring>
#include <string>
#include "data.cpp"
// ex1

struct Automovel {
    string modelo;
    char marca[40];
    Data dtAquisicao;
};
Automovel geraAutomovel(string mo, char *ma, Data aq) {
    Automovel aux;
    aux.modelo = mo;
    strcpy(aux.marca, ma);
    aux.dtAquisicao = aq
    return aux;
}
void mostraAutomovel(Automovel aux)
{
    cout << "Automóvel";
    cout << "Marca: " << aux.marca;
    cout << "Data de aquisição: ";
    mostraData(aux.dtAquisicao);
    printf(" }");
}
int main() {
    Automovel v1, v2;
    v1 = geraAutomovel("Uno", "Fiat", geraData(3, 7, 2005));
    v2 = geraAutomovel("Fusca", "Volks", geraData(20,11,1983));

    mostraAutomovel(v1);
    mostraAutomovel(v2);
}