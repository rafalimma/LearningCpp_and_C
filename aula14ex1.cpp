#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> G = {12, 44, 56, 82};
    vector<int> F;

    for(auto i: G)
        F.push_back(i*i);

    for(int &i: F){
        cout << i << ' ';
    }
    return 0;
}
