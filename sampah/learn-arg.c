#include <stdio.h>

int main(int argc, char *argv[]) {
    if(argc == 2){
        printf("Hello, %s", argv[1]);
    } else {
        printf("Hello, World!");
    }

    return 0;
}