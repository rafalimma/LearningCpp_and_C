#include <stdio.h>
void prog1()
{
    int x = 9, y = 0;
    do{
        y = (x % 2) + 10 * y;
        x = x / 2;
        printf("x = %d, y = %d\n", x, y);
    } while ( x );
    while( y )
    {
        x = y % 100;
        y = y / 10;
        printf("x = %d, y = %d\n", x, y);
    }
}

int main()
{
    prog1();
}