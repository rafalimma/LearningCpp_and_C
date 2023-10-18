#include <cstdio>
#include <iostream>
using namespace std;

struct Data {
    int dia;
    int mes;
    int ano;
};

int main()
{
    Data dtNasc_bill, dtLanc_Win1;

    dtNasc_bill.dia = 28;
    dtNasc_bill.mes = 10;
    dtNasc_bill.ano = 1955;

    dtLanc_Win1.dia = 20;
    dtLanc_Win1.mes = 11;
    dtLanc_Win1.ano = 1985;

    cout << endl << "data de nascimento de Bill Gates";
    cout << endl <<  dtNasc_bill.dia << "/" << dtNasc_bill.mes << "/" << dtNasc_bill.ano;

    cout << endl << "data de lancamento do windows";
    cout << endl <<  dtLanc_Win1.dia << "/" << dtLanc_Win1.mes << "/" << dtLanc_Win1.ano;

}

