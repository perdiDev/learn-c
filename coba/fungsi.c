#include <stdio.h>
#include <stdlib.h>

int add(int x, int y);

int main(int argc, char *argv[]){
    if(argc<3){
        printf("Argumen kurang, tambahkan!");
        exit(1);
    }
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    int ans = add(a, b);
    printf("%d\n", ans);

    return 0;
}

int add(int x, int y){
    return x + y;
}