#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<int> S = {12, 6, 5, 8, 9, 10, 100};
    vector<int> pares;
    int soma = 0;

    for(auto i: S)
        if(i % 2 == 0){
        pares.push_back(i);
        }
    
    for(auto i: pares)
        soma += i;

    cout << endl << soma;
}