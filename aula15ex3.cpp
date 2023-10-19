#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

struct Endereco{
    int numero;
    char bairro[40], cidade[40], estado[40];
};

struct Pessoa{
    char nome[40];
    char sexo[10];
    Endereco endereco;
    int nasc, cpf;
};
int main()
{
    Endereco e1;
    Pessoa p1;

    e1.numero = 55;
    strcpy(p1.endereco.bairro, "Batel");
    strcpy(p1.endereco.cidade, "Curitiba");
    strcpy(p1.endereco.estado, "Parana");
    
    strcpy(p1.nome, "Rafa");
    strcpy(p1.sexo, "masculino");
    p1.nasc = 12122005;
    p1.cpf = 45675432;

    cout << endl << "Endereco da pessoa: " << p1.endereco.bairro <<" "<< p1.endereco.cidade << " "
    << p1.endereco.estado;
    cout << "nome: " << p1.nome << " " << " sexo: " << p1.sexo << " " << " cpf: " << p1.cpf << " nascimento: " << p1.nasc;

}