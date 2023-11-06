#include <iostream>

using namespace std;
/*
int main(){
    int n=20;
    while(n<25){
        cout << "oba boxx - " << n << "\n";
        n++;
    }

    do{
        cout << "oba boxx - " << n << "\n";
        n++;
    }while(n<25);

    cout << "\ncabou\n";
    return 0;
}
*/
int main(){
    int x, y, z;

    for(int tmp=0; tmp < 10000000 ; tmp++);

    for(x=0, y=1, z=0 ; x<=10 && z<=6; x++, y+=2, z+=2){
        cout << "OBABOXX - " << x << " - "<< y <<" - "<< z << "\n";
    }

    return 0;
}
