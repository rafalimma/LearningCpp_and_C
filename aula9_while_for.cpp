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
    int x, y;
    for(x=0, y=1 ; x<=10; x++, y+=2){
        cout << "OBABOXX - " << x << " - "<< y << "\n";
    }

    return 0;
}
