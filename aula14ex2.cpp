#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    std::string frase;
    std::vector<char> maiusculas;

    cout  << endl <<  "digite uma frase: ";
    std::getline(std::cin, frase);
    
    for(char i: frase)
        if(std::isupper(i)){
            maiusculas.push_back(i);
        }
    
    cout << endl << "As letras maiusculas na sua frase e ";
    cout << endl <<"";
    
    for(char i : maiusculas) {
        cout << endl << i << ' ';
    }
    
    return 0;
}