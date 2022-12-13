#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv){
    char ch;
    FILE *fp;
    fp = fopen("text.txt", "r");
    if(fp == NULL){
        printf("File tidak ada\n");
        exit(1);
    } else printf("File berhasil dibuka\n");

    while((ch = getc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);


    return 0;
}