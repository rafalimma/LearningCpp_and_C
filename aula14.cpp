// MAP e REDUCE

// VECTOR
#include <iostream>
#include <vector>

//vx.size(); // retorna tamanho do vector vx
//vx.empty(); // determina se vector vx está vazio
//vx.resize(novo_tamanho); // redimensiona vector vx
//vx2=vx; // cópia de vectores

void print(std::vector<int> v)
{
    std::cout << std::endl << "Vector: ";
    for (int i = 0; i < v.size(); i++)
        std::cout << v[i] << "\n ";

}

int main(){
    std::vector<int> nums;
    nums.insert(nums.end(), -3);
    nums.insert(nums.end(), 2);
    print(nums);
}

// FUNÇÂO LAMBDA