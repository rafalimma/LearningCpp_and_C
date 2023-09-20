#include <stdio.h>

int main()
{
    int vet_a[5] = {4, 7, 8, 9, 2};
    int v1[5], v2[5], v3[5];
    int i_v1 = 0, i_v2 = 0, i_v3 = 0;


    for(int i=0; i<5; i++)
    {
        if (i % 2 == 0){
            v1[i_v1] = vet_a[i];
            i_v1++;
        }
        else{
            v2[i_v2] = vet_a[i];
            i_v2++;
        }
        if (vet_a[i] % 2 == 0){
            v3[i_v3] = i;
            i_v3++;
        }
    }
    printf("v1: ");
    for(int i=0; i<i_v1; i++){
        printf("%d ", v1[i]);
    }
    printf("v2: ");

    for(int i=0; i<i_v2; i++){
        printf("%d ", v2[i]);
    }
    printf("v3: ");

    for(int i=0; i<i_v3; i++){
        printf("%d ", v3[i]);
    }

    return 0;
}