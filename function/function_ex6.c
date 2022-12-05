#include <stdio.h>

// #define IDX()

void tambahArray2D(int a[][3], int b[][3], int c[][3]);
void tambahArrPointer2D(int *pa, int *pb, int *pc);

int main(int argc, char *argv[]){
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int b[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    int c[3][3] = {0};

    tambahArrPointer2D(*a, *b, *c);

    for(int baris=0; baris<3; baris++){
        for(int kolom=0; kolom<3; kolom++)
            printf("%d\t", c[baris][kolom]);
        printf("\n");
    }

    return 0;
}

void tambahArray2D(int a[][3], int b[][3], int c[][3]){
    for (int baris = 0; baris < 3; baris++)
    {
        for (int kolom = 0; kolom < 3; kolom++)
            c[baris][kolom] = a[baris][kolom] + b[baris][kolom];
    }
}

void tambahArrPointer2D(int *pa, int *pb, int *pc){
    printf("Ini lagi jalan\n");
    for(int baris=0; baris<3; baris++){
        for (int kolom = 0; kolom < 3; kolom++)
        {
            pc[kolom+baris*3] = pa[kolom+baris*3] + pb[kolom+baris*3];
        }
        
    }

}