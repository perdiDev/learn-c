#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    FILE *fp;
    char *filename;
    int number;
    if(argc < 2){
        printf("Argument open data tidak ada");
        exit(1);
    }
    filename = argv[1];
    fp = fopen(filename, "rb");
    while(1){
        if(feof(fp) == NULL)
            break;
        number = gets(fp);
        printf("%d ", number);
    }

    return 0;
}