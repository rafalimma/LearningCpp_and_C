// MAP e REDUCE

// VECTOR
#include <iostream>
#include <vector>
using namespace std;

//vx.size(); // retorna tamanho do vector vx
//vx.empty(); // determina se vector vx está vazio
//vx.resize(novo_tamanho); // redimensiona vector vx
//vx2=vx; // cópia de vectores

void print(std::vector<int> v)//função que aceita um vetor de numeros 
// inteiros como parâmetro
{
    std::cout << std::endl << "Vector: ";
    for (int i = 0; i < v.size(); i++) //retorna o número de elementos de um vetor
        std::cout << v[i] << "\n ";
}

int main(){
    std::vector<int> nums; //cria um vetor vazio cahamdo nums
    nums.insert(nums.end(), -3);
    nums.insert(nums.end(), 2); //O método insert é usado para adicionar elementos ao vetor na posição especificada
    // (no caso, nums.end() significa adicionar no final).
    print(nums);
}

// FUNÇÂO LAMBDA
// Funçoes sem nome

int main()
{
    auto add = [](auto a, auto b){
        return a+b;
    }
    cout << add(20, 30) << endl;
    cout << add(20.11, 30.40) << endl;

}

