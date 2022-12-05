#include <stdio.h>


int main(int argc, char *argv[]) {
    int nCol = 4, nRow = 3;
    int arrayA2D[3][4] = {
        {1, 2, 3, 4}, 
        {5, 6, 7, 8},
        {1, 2, 3, 4}
    };
    int arrayB2D[3][4] = {
        {2, 2, 2, 2}, 
        {2, 2, 2, 2},
        {2, 2, 2, 2}
    };
    int arrSum[3][4];

    printf("Array A: \n");
    for(int row=0; row<nRow; row++) {
        for(int col=0; col<nCol; col++)
            printf("%d ", arrayA2D[row][col]);
        printf("\n");
    }

    printf("Array B: \n");
    for(int row=0; row<nRow; row++) {
        for(int col=0; col<nCol; col++){
            printf("%d ", arrayB2D[row][col]);
            arrSum[row][col] = arrayA2D[row][col] + arrayB2D[row][col];
        }
        printf("\n");
    }

    printf("Perjumalahan arr A dan arr B: \n");
    for(int row=0; row<nRow; row++) {
        for(int col=0; col<nCol; col++)
            printf("%d ", arrSum[row][col]);
        printf("\n");
    }

    return 0;
}