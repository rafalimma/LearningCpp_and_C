#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int n1, n2, res;
    char opc;

    inicio:
    system("cls");
    cout << "Digite o valor da nota 1: ";
    cin >> n1;
    cout << "Digite o valor da nota 2: ";
    cin >> n2;

    res = n1 + n2;

    /*
    notas >= 60 aluno aprovado
    notas >=40 e =<59 aluno recuperação
    <40 reprovado
    */

    if (res >= 60) {
        cout << "\nAluno aprovado\n";
    } else if (res >= 40 && res < 60){
            cout << "\nAluno de recuperacao\n";
    } else{
        cout << "\nAluno reprovado\n";
        }
    
    cout << "\nDeseja digitar outras notas? (s/n): ";
    cin >> opc;
    if (opc == 's' or opc=='S'){
        goto inicio;
    }
    return 0;
}