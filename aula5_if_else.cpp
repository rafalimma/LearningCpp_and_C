#include <iostream>
using namespace std;

int main(){
    int num;
    int num2;


    cout << "Digite um numero: ";
    cin >> num;
    cout << "Digite outro numero: ";
    cin >> num2;

    if (num + num2 == 15) 
        cout << "correto" << "\n\n";
    else {
        cout << "incorreto" << "\n\n";
    }

    return 0;
}