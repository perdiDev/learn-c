#include <stdio.h>

#define IDX(col, row, ncol) (col+row*ncol)

void tambahArray2D(int a[][3], int b[][3], int c[][3]);
void tambahArray2DPointer(int *pa, int *pb, int *pc);

int main(int argc, char *argv[]){
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int b[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    int c[3][3] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    
    // Using general way with array
    printf("General way: \n");
    tambahArray2D(a, b, c);
    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++)
            printf("%d\t", c[row][col]);
        printf("\n");
    }

    // Using pointer
    printf("Pointer way: \n");
    tambahArray2DPointer(*a, *b, *c);
    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++)
            printf("%d\t", c[row][col]);
        printf("\n");
    }

    return 0;
}

void tambahArray2D(int a[][3], int b[][3], int c[][3]){
    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++)
            c[row][col] = a[row][col] + b[row][col];
    }
}

void tambahArray2DPointer(int *pa, int *pb, int *pc){
    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++)
            pc[IDX(col, row, 3)] = pa[col+row*3] + pb[col+row*3];
    }
}