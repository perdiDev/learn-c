#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    FILE *fp;
    char *filename;
    int number;
    if(argc < 2){
        printf("Argumen open data tidak ada \n");
        exit(1);
    }
    filename = argv[1];
    fp = fopen(filename, "rb");
    while(1) {
        number = getw(fp);
        if(number == EOF)
            break;
        printf("%d ", number);
    }

    return 0;
}