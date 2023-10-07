#include <iostream>

using namespace std;
dobro(int n)
{
    return n * 2;
}

int main()
{
    int n;

    cout << endl << "Digite um Numero ";
    cin >> n;
    cout << endl << "N*2 = " << dobro(n);
}