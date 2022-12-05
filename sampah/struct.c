#include <stdio.h>

typedef struct 
{
    int peringkat;
    float nilai;
}
kelas;



int main() {
    kelas A[2];
    A[0].peringkat = 1;
    A[0].nilai = 3.9;
    
    A[1].peringkat = 2;
    A[1].nilai = 3.88;

    for (int i = 0; i < sizeof(A)/sizeof(A[0]); i++)
    {
        if(A[i].peringkat==1){
            printf("Check %.2f\n", A[i].nilai);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}