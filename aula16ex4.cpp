#include <iostream>
#include <string>
#include <vector>
// ex3
using namespace std;

// Definindo a estrutura Cliente
struct Cliente {
    string nome;
    double salario;
    string dataNascimento;
    string dataCadastro;
};

// Definindo a estrutura CD
struct CD {
    string nome;
    string artista;
    int numFaixas;
};

// Definindo a estrutura Locação
struct Locacao {
    int codigoCliente;
    int codigoCD;
    string dataLocacao;
    string dataDevolucao;
};

// Função para cadastrar um novo Cliente
Cliente cadastrarCliente() {
    Cliente cliente;
    cout << "Digite o nome do cliente: ";
    cin >> cliente.nome;
    cout << "Digite o salário do cliente: ";
    cin >> cliente.salario;
    cout << "Digite a data de nascimento do cliente: ";
    cin >> cliente.dataNascimento;
    cout << "Digite a data de cadastro do cliente: ";
    cin >> cliente.dataCadastro;
    return cliente;
}

// Função para cadastrar um novo CD
CD cadastrarCD() {
    CD cd;
    cout << "Digite o nome do CD: ";
    cin >> cd.nome;
    cout << "Digite o nome do artista: ";
    cin >> cd.artista;
    cout << "Digite o número de faixas: ";
    cin >> cd.numFaixas;
    return cd;
}

// Função para cadastrar uma nova Locação
Locacao cadastrarLocacao() {
    Locacao locacao;
    cout << "Digite o código do cliente: ";
    cin >> locacao.codigoCliente;
    cout << "Digite o código do CD: ";
    cin >> locacao.codigoCD;
    cout << "Digite a data de locação: ";
    cin >> locacao.dataLocacao;
    cout << "Digite a data de devolução: ";
    cin >> locacao.dataDevolucao;
    return locacao;
}

// Função para mostrar informações de um Cliente
void mostrarCliente(Cliente cliente) {
    cout << "Nome do cliente: " << cliente.nome << endl;
    cout << "Salário do cliente: " << cliente.salario << endl;
    cout << "Data de nascimento do cliente: " << cliente.dataNascimento << endl;
    cout << "Data de cadastro do cliente: " << cliente.dataCadastro << endl;
}

// Função para mostrar informações de um CD
void mostrarCD(CD cd) {
    cout << "Nome do CD: " << cd.nome << endl;
    cout << "Nome do artista: " << cd.artista << endl;
    cout << "Número de faixas: " << cd.numFaixas << endl;
}

// Função para mostrar informações de uma Locação
void mostrarLocacao(Locacao locacao) {
    cout << "Código do cliente: " << locacao.codigoCliente << endl;
    cout << "Código do CD: " << locacao.codigoCD << endl;
    cout << "Data de locação: " << locacao.dataLocacao << endl;
    cout << "Data de devolução: " << locacao.dataDevolucao << endl;
}

int main() {
    vector<Cliente> clientes;
    vector<CD> cds;
    vector<Locacao> locacoes;

    // Cadastro de clientes
    Cliente cliente1 = cadastrarCliente();
    clientes.push_back(cliente1);

    // Cadastro de CDs
    CD cd1 = cadastrarCD();
    cds.push_back(cd1);

    // Cadastro de Locações
    Locacao locacao1 = cadastrarLocacao();
    locacoes.push_back(locacao1);

    // Mostrar informações cadastradas
    cout << "Informações do Cliente: " << endl;
    mostrarCliente(clientes[0]);

    cout << "Informações do CD: " << endl;
    mostrarCD(cds[0]);

    cout << "Informações da Locação: " << endl;
    mostrarLocacao(locacoes[0]);

    return 0;
}
