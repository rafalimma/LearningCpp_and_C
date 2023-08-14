#include <iostream>
#include <cmath>
#include <cctype>



int main()
{
    int R =  3 * 6;
    int x = 2;
    int y = 3;


    printf("\n R=%d", R);
    R = R % y-x;
    printf("\n R = %d", R);
    R = R + 4;
    printf("\n R = %d", R);
    R = R * x;
    printf("\n R = %d", R);
    R = R / 3;
    printf("\n R = %d", R);
    R = 3 + R * 4;
    printf("\n R = %d", R);

}