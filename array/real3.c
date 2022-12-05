#include <stdio.h>

int main(int argc, char *argv[]){
    int nRow=3, nCol=4;
    int matriks[3][4] = {
        {0, 1, 2, 3}, 
        {1, 2, 3, 0}, 
        {2, 3, 1, 0}
    };
    int A[3][4];
    int C[3][4];

    for(int row=0; row<nRow; row++){
        for(int col=0; col<nCol; col++){
            printf("%d ", matriks[row][col]);
        }
        printf("\n");
    }
    printf("Menampilkan alamat dari setiap elemen:\n");
    for(int row=0; row<nRow; row++){
        for(int col=0; col<nCol; col++){
            printf("%p\t", &matriks[row][col]);
        }
        printf("\n");
    }

    for(int row=0; row<nRow; row++){
        for (int col = 0; col < nCol; col++)
        {
            A[row][col] = col+row*nCol;
        }
        
    }
    printf("Menampilkan isi array A dan Menjumlahkannya dengan matriks: \n");
    for(int row=0; row<nRow; row++){
        for(int col=0; col<nCol; col++){
            printf("%d\t", A[row][col]);
            C[row][col] = A[row][col] + matriks[row][col];
        }
        printf("\n");
    }

    printf("Menampilkan isi array C: \n");
    for(int row=0; row<nRow; row++){
        for(int col=0; col<nCol; col++){
            printf("%d ", C[row][col]);
        }
        printf("\n");
    }

    return 0;
}