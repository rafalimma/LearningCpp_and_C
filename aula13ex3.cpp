#include <iostream>
#include <cstring>


float IPVA(int valor, char* carro){
    float ipva;
    if (strcmp(carro, "etanol") == 0 || strcmp(carro, "gas") == 0 || strcmp(carro, "eletricidade") == 0){
    ipva = (valor * (0.03));
    } 
    if (strcmp(carro, "camionete") == 0 || strcmp(carro, "moto") == 0 || strcmp(carro, "bus") == 0){
    ipva = (valor * (0.02));
    } else {
    ipva = (valor * (0.04));
    }
    return ipva;
}

float IR(float renda){
    float ir;
    if(renda < 1903.98){
        ir = (renda * (0.075));
    }
    if(renda  1903.98)
}

int main()
{
    int valor;
    char carro[50];
    char nome[50];
    float renda;
    using namespace std;

    cout << endl << "______IMPOSTO_VEICULAR______"

    cout << endl << "Qual o preco do carro? ";
    cin >> valor;
    cout << endl << "Qual o nome do carro? ";
    cin >> nome;
    cout << endl << "Qual o tipo do carro? ";
    cin >> carro;
    
    float valoripva = IPVA(valor, carro);
    cout << "O ipva do carro " << nome << " e " << valoripva << endl;

    cout << endl << "______IMPOSTO_DE_RENDA______" 
    
    cout << endl << "Qual a sua renda mensal? ";
    cin >> renda;


    return 0;
}