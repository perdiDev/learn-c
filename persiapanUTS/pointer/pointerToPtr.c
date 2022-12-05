#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int **array2D;

    array2D = (int **)malloc(3*sizeof(int *));
    for(int baris=0; baris<2; baris++)
        array2D[baris] = (int *)malloc(sizeof(int));
    
    for(int baris=0; baris<2; baris++){
        for(int kolom=0; kolom<3; kolom++)
            array2D[baris][kolom] = kolom+baris*3;
    }

    for(int baris=0; baris<2; baris++){
        for(int kolom=0; kolom<3; kolom++)
            printf("%d\t", array2D[baris][kolom]);
        printf("\n");
    }

    return 0;
}