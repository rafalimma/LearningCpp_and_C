#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>
using namespace std;
#include <ctime>

struct Endereco{
    int numero;
    char bairro[40], cidade[40], estado[40];
};

struct Pessoa{
    char nome[40];
    char sexo[10];
    Endereco endereco;
    string dataNascimento;
    int nasc, cpf;
};

Pessoa cadastrar() {
    Pessoa p;

    cout << "Digite seu nome: ";
    cin >> p.nome;
    cout << "Digite seu sexo: ";
    cin >> p.sexo;
    cout << "Digite o número da sua casa: ";
    cin >> p.endereco.numero;
    cout << "Digite seu bairro: ";
    cin >> p.endereco.bairro;
    cout << "Digite sua cidade: ";
    cin >> p.endereco.cidade;
    cout << "Digite seu estado: ";
    cin >> p.endereco.estado;
    cout << "Digite sua data de nascimento dia, mes e ano : ";
    cin >> dataNascimento;
    cout << "Digite seu cpf: ";
    cin >> p.cpf;
    return p;
}

void mostrar_pessoa(const Pessoa& p) {
    cout << "Nome: " << p.nome;
    cout << "Sexo: " << p.sexo;
    cout << "Endereco: " << p.endereco.cidade << ", " << p.endereco.numero << ", " << p.endereco.bairro
    << ", " << p.endereco.estado;
    cout << "Data de Nascimento: " << p.dataNascimento;
    cout << "CPF: " << p.cpf;
}

int calcularIdade(const string& dataNascimento){
    std:: time_t t = std::time(nullptr);
    std::tm* now = std::localtime(&t);

    int anoAtual = now->tm_year + 1900;

    int anoNascimento = std::stoi(dataNascimento.substr(dataNascimento.find_last_of('/') + 1));

    int idade = anoAtual - anoNascimento;
    return idade;
}

int main()
{

    Pessoa pessoa = cadastrarPessoa();
    mostrar_pessoa(pessoa)

    int idade = calcularIdade(pessoa.dataNascimento);
    cout << "Idade: " << idade << " anos ";
    return 0;
}





