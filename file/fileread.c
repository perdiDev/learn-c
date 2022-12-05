#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char character;
    fp = fopen("data.txt", "r");
    if(fp == NULL){
        puts("File tidak ditemukan atau tidak dapat dibuka");
        exit(1);
    } else printf("File berhasil dibuka\n");
    while((character = getc(fp)) != EOF)
        printf("%c", character);
    fclose(fp);

    return 0;
}