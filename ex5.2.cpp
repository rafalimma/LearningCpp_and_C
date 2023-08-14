#include <iostream>
#include <string>

using namespace std;

int main() {
string a, b, c;

a = "ola";
b = "mundo";
c = a + " " + b;

cout << "a) " << a << ", " << b << ", " << c << endl;

c = c + ", Saturno";
cout << "d) " << c << endl;

return 0;
}