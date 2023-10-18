#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<int> A = {12, 45, 66, 33, 8, 9, 11};
    vector<int> B;

    for(auto i: A)
        if(i%2 != 0){
            B.push_back(i);
        }
    for(auto &i: B){
        cout << i << " ";
    }
}