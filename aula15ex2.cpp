#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Automovel {
    string modelo;
    char marca[40];
    Data dtAquisicao;
};

int main() {
    Automovel v1, v2;

    v1.modelo = "Uno";
    strcpy(v2.marca, "Fiat");
    v1.dtAquisicao.dia = 3;
    v1.dtAquisicao.mes = 7;
    v1.dtAquisicao.ano = 2005;
    
    v2.modelo = "Fusca";
    strcpy(v2.marca, "Volks");
    v2.dtAquisicao.dia = 20;
    v2.dtAquisicao.mes = 11;
    v2.dtAquisicao.dia = 1983;

    cout << endl << "carro " << v1.modelo << " data de aquisicao";
    cout << endl << v1.dtAquisicao.dia << "/" << v1.dtAquisicao.mes << "/"
    << v1.dtAquisicao.ano;

    cout << endl << "carro " << v2.modelo << " data de aquisicao";;
    cout << endl << v2.dtAquisicao.dia << "/" << v2.dtAquisicao.mes << "/"
    << v2.dtAquisicao.ano;

}