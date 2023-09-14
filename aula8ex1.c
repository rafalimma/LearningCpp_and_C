#include <stdio.h>

void prog12()
{
char a[8] = { 'p', 'e', 'i', 'i', 'm', 'r', 'a', 'r'};
int b[8] = { 5, 3, 4, 7, 1, 2, -1, 6};
int i=0;
while (i >= 0)
{
printf("%d", i);

i = b[i];
}
}
int main ()
{
    prog12();
    
    return 0;
}

