#include <iostream> // cin cout

using namespace std;
float x(float a, float b, float c)
{
    return a / (b+c);
}

int main() {
    float a, b, c;
    cout<< endl << "Entre com 3 numeros: ";
    cin >> a >> b >> c;
    cout << endl << "X = " << x(a,b,c);
    system("pause");
}
