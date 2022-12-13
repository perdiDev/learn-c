#include <stdio.h>
#include <stdlib.h>

int main(){
    int **arr2d;

    arr2d = (int **)malloc(4*sizeof(int *));

    for(int baris=0; baris<3; baris++)
        arr2d[baris] = (int *)malloc(sizeof(int));

    for(int baris=0; baris<3;  baris++){
        for(int kolom=0; kolom<4; kolom++)
            arr2d[baris][kolom] = kolom+baris*4;
    }

    for(int baris=0; baris<3;  baris++){
        for(int kolom=0; kolom<4; kolom++)
            printf("%d\t", arr2d[baris][kolom]);
        printf("\n");
    }

    return 0;
}