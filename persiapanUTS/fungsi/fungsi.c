#include <stdio.h>
#include <stdlib.h>

int jumlah(int a, int b);

int main(int argc, char *argv[]) {
    if(argc < 3) {
        printf("Argumen kurang! Masukkan dua data\n");
        exit(1);
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    printf("%d + %d = %d\n", a, b, jumlah(a, b));

    return 0;
}

int jumlah(int a, int b){
    return a + b;
}