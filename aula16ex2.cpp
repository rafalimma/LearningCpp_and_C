
#include <cstdio>
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

struct Data {
    int dia;
    int mes;
    int ano;
};

Data ler_data(){
    Data data;
    cout << "Digite o dia: ";
    cin >> data.dia;
    cout << "Digite o mes: ";
    cin >> data.mes;
    cout << "Digite o ano: ";
    cin >> data.ano;
    return data;
}

Data gerar_data_aleatoria() {
    Data data;
    data.dia = rand() % 31 + 1;
    data.mes = rand() % 12 + 1;
    data.mes = rand() % 100 + 1900;
    return data;
}

bool anoBissexto(int ano) {
    if ((ano % 4 == 0 && ano % 100 !=0) || ano % 400 == 0) {
        return true;
    }
    return false;
}


int main(){
    srand(time(nullptr));

    Data dtNasc_bill, dtLanc_Win1;

    dtNasc_bill = ler_data();
    dtLanc_Win1 = gerar_data_aleatoria();

    cout << "data de nascimento do Bill Gates: " << dtNasc_bill.dia << "/" <<
    dtNasc_bill.mes << "/" << dtLanc_Win1.ano << endl;

    cout << "Data de lancamento do windows: " << dtLanc_Win1.dia << "/" <<
    dtLanc_Win1.mes << "/" << dtLanc_Win1.ano;

    if (anoBissexto(dtLanc_Win1.ano)) {
        cout <<"O  ano de lancamento do windoes e bissexto." << endl;
    } else {
        cout << "O ano de lancamento do Windows não e bissexto." << endl;
    }
    return 0;
}