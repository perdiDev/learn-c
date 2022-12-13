#include <stdio.h>
#include <stdlib.h>

int add(int x, int y);

int main(int argc, char *argv[]){
    int a, b;
    if(argc < 3){
        printf("Argumen kurang, harus ada dua argumen!");
        exit(1);
    }
    a = atoi(argv[1]);
    b = atoi(argv[2]);

    printf("%d + %d = %d", a, b, add(a, b));

    return 0;
}

int add(int x, int y){
    return x+y;
}