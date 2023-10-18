#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Data
{
    int dia;
    int mes;
    int ano;
};

Data dt_nasc;

int main(){
    dt_nasc.dia = 31;
    cout << endl << dt_nasc.dia;
}