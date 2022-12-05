#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int **arr2d;
    int n;

    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    arr2d = (int **)malloc(n*sizeof(int *));
    // printf("Titik nol\n");

    for(int i=0; i<n; i++)
        arr2d[i] = (int *)malloc(n*sizeof(int));

    for(int i=0; i<n; i++){
        for(int y=0; y<n; y++)
            arr2d[i][y] = y+i*n;
    }
    printf("Titik satu\n");

    for(int i=0; i<n; i++){
        for(int y=0; y<n; y++)
            printf("%d\t", arr2d[i][y]);
        printf("\n");
    }
    printf("Titik dua\n");
    return 0;
}