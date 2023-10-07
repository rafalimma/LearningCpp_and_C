#include <iostream>

using namespace std;
dobro(int n)
{
    return n * 2;
}
triplo(int n)
{
    return n * 3;
}
quad(int n)
{
    return n * n;
}
cubo(int n)
{
    return n * (n * n);
}
int main()
{
    while (true){
        int n;

        cout << endl << "Digite um Numero ";
        cin >> n;
        cout << endl << "N*2 = " << dobro(n);
        cout << endl << "N*3 = " << triplo(n);
        cout << endl << "N*N = " << quad(n);
        cout << endl << "N^3 = " << cubo(n);
    }

}