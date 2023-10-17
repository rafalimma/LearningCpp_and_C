// MAP REDUCE FILTER

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> A  = {1,2,3,4,5,6};
    vector<int> B;

    for (auto it: A)//a variável it tem o valor do elemento atual a cada iteração
        B.push_back(it * it); //pushback adiciona o calor a B

    for (int &it: B) {
        cout << it << ' ';
    }
}

// FIlTER

int main()
{
    vector<int> C = {1, 2, 3, 4, 5, 6};
    vector<int> D;

    for(auto it: C)
        if ( it%2==0 )
            D.push_back(it);
        for (int &it: D){
            cout << it << ' ';
        }
}

//REDUCE
//Usado quando é preciso encontrar um valor cumulativo ou
//concatenado com base em elementos de todo o array/lista

int main()
{
    vector<int> E = {1, 2, 3, 4, 5};

    int soma = 0;
    for(auto it: E)
        soma += it;

    print("Soma =%d", soma);
}
