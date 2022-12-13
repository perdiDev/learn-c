#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    FILE *fp;
    char ch;
    char *filename;

    filename = argv[1];

    fp = fopen(filename, "r");
    if(fp == NULL){
        printf("FIle gagal dimuat!\n");
        exit(1);
    } else printf("File berhasil dimuat\n");

    while((ch = getc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}