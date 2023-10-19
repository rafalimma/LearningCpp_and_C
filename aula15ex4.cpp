#include <iostream>
#include <vector>
#include <string>
#include <ctime>

// Definição da classe Cliente
class Cliente {
public:
    std::string nome;
    double salario;
    std::tm dataNascimento;
    std::tm dataCadastro;
};

// Definição da classe CD
class CD {
public:
    std::string nome;
    std::string artista;
    int numeroFaixas;
};

// Definição da classe Locação
class Locacao {
public:
    int codigoCliente;
    int codigoCD;
    std::tm dataLocacao;
    std::tm dataDevolucao;
};

// Definição da classe Locadora
class Locadora {
public:
    std::vector<Cliente> clientes;
    std::vector<CD> cds;
    std::vector<Locacao> locacoes;
};

int main() {
    // Exemplo de uso das classes
    Cliente cliente1;
    cliente1.nome = "João";
    cliente1.salario = 5000.0;
    // Definir as datas (exemplo: 1 de janeiro de 1990)
    cliente1.dataNascimento = {0, 0, 0, 1, 0, 90};
    // Definir a data de cadastro (exemplo: 15 de outubro de 2023)
    cliente1.dataCadastro = {0, 0, 0, 15, 9, 123};

    CD cd1;
    cd1.nome = "Álbum 1";
    cd1.artista = "Artista 1";
    cd1.numeroFaixas = 10;

    Locacao locacao1;
    locacao1.codigoCliente = 1;
    locacao1.codigoCD = 1;
    // Definir as datas de locação e devolução (exemplo: 1 de janeiro de 2023 e 15 de janeiro de 2023)
    locacao1.dataLocacao = {0, 0, 0, 1, 0, 123};
    locacao1.dataDevolucao = {0, 0, 0, 15, 0, 123};

    // Adicionar os objetos às listas da Locadora
    Locadora locadora;
    locadora.clientes.push_back(cliente1);
    locadora.cds.push_back(cd1);
    locadora.locacoes.push_back(locacao1);

    // Exemplo de acesso aos dados
    std::cout << "Nome do cliente: " << locadora.clientes[0].nome << std::endl;
    std::cout << "Nome do CD: " << locadora.cds[0].nome << std::endl;

    return 0;
}
